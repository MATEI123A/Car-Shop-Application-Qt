#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include "qstackedwidget.h"
#include<QFile>
#include<QTextStream>
#include<QString>
#include "signindialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap bkgnd("D:/test/modelx.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_signinbutton_clicked()
{
    int nr=1,ok=0,k=1;

    for(int i=0;i<name_person.size();i++)
    {
        if(name_person[i].isLetter())
            ok=1;
        else
            if(name_person[i]=='-' && name_person[i-1].isLetter() && name_person[i+1].isLetter())
            k=1;
        else
            if(name_person[i]=='-' && name_person[i-1].isLetter()==0 && name_person[i+1].isLetter()==0)
            k=0;
        else
            if(name_person[i].isDigit() || name_person[i]!=' ' || name_person[i]!='-')
            k=0;
    }

    if(k && ok)
    {
    ui->erorsignin->hide();
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

        if(name_person!=line1)
            nr++;
        else
        {
            nr=0;
            break;
        }
    }

    if(nr && name_person.size()>0 && password.size()>0)
    {
        stream<<name_person<<Qt::endl;
        stream<<password<<Qt::endl;
        SigninDialog *a=new SigninDialog();
        a->show();
        this->hide();
    }
   }
   else
   {
       ui->erorsignin->setText("Name must contain just letters!");
       ui->erorsignin->show();
   }

   if(nr==0)
   {
       ui->erorsignin->setText("This name is already taken!");
       ui->erorsignin->show();
   }
}

void Dialog::on_back_button_clicked()
{
    //this->hide();
    MainWindow *a=new MainWindow();
    a->show();
    this->hide();
}

void Dialog::on_lineEdit_name_cursorPositionChanged(int arg1, int arg2)
{
    name_person=ui->lineEdit_name->text();
}


void Dialog::on_lineEdit_password_cursorPositionChanged(int arg1, int arg2)
{
    password=ui->lineEdit_password->text();
}

