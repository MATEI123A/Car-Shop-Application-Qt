#include "setdialog.h"
#include "ui_setdialog.h"
#include "mainwindow.h"
#include<QString>
#include<QFile>
#include<QTextStream>
#include"afterlogin.h"

SetDialog::SetDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SetDialog)
{
    ui->setupUi(this);
    QPixmap bkgnd("D:/test/bmw.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}

SetDialog::~SetDialog()
{
    delete ui;
}

void SetDialog::on_pushButton_clicked()
{
    MainWindow *a=new MainWindow();
    a->show();
    this->hide();
}


void SetDialog::on_nameline_cursorPositionChanged(int arg1, int arg2)
{
     nameper=ui->nameline->text();
}


void SetDialog::on_passline_cursorPositionChanged(int arg1, int arg2)
{
     pass=ui->passline->text();
}

void clearFileContent(const QString &filePath) {
    QFile file(filePath);

    // Open the file in WriteOnly mode, which clears the content
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        qDebug() << "File content deleted successfully.";
        file.close();
    } else {
        qDebug() << "Failed to open the file.";
    }
}


void SetDialog::on_pushButton_2_clicked()
{
    ui->errorlogin->hide();
    QString filename = "output_file.txt";
    QFile file(filename);

    if (!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        this->hide();

    QTextStream stream(&file);
    file.seek(0);

    QString line1;
    QString line2;

    while(!stream.atEnd())
    {
        line1=stream.readLine();
        line2=stream.readLine();

        if(line1==nameper && line2==pass)
        {
            QString filePath = "C:/Qt/Complex_App/build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/logout_file.txt";
            clearFileContent(filePath);
            AfterLogin *a=new AfterLogin();
            a->show();
            this->hide();
            break;
        }
    }

    ui->errorlogin->setText("Incorrect name or password!");
    ui->errorlogin->show();
}


