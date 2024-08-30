#include "allcarsdialog.h"
#include "ui_allcarsdialog.h"
#include"afterlogin.h"
#include<QFile>
#include<QTextStream>
#include<QString>
#include <QLabel>
#include <QPixmap>

AllcarsDialog::AllcarsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AllcarsDialog)
{
    ui->setupUi(this);
    ui->audia4label->hide();
    ui->audia6_label->hide();
    ui->audia7_label->hide();
    ui->bmw3er_label->hide();
    ui->bmw5er_label->hide();
    ui->bmw7er_label->hide();

    QString filename = "car_name.txt";
    QFile file(filename);
    int ok1=0;

    if (!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        ok1=1;

    QTextStream stream(&file);
    file.seek(0);

    QString line1=stream.readLine();
    ui->carnameline->setText(line1);

    if(ok==0)
    {
        ok=1;

        if(line1=="Audi A4")
        {
            ui->audia6_label->hide();
            ui->audia7_label->hide();
            ui->audia4label->show();
        }

        if(line1=="Audi A7")
        {
            ui->audia6_label->hide();
            ui->audia7_label->show();
            ui->audia4label->hide();
        }

        if(line1=="Audi A6")
        {
            ui->audia6_label->show();
            ui->audia7_label->hide();
            ui->audia4label->hide();
        }

        if(line1=="BMW 3 Series")
        {
            ui->bmw3er_label->show();
        }

        if(line1=="BMW 5 Series")
        {
            ui->bmw5er_label->show();
        }

        if(line1=="BMW 7 Series")
        {
            ui->bmw7er_label->show();
        }
    }
}

AllcarsDialog::~AllcarsDialog()
{
    delete ui;
}

void AllcarsDialog::on_backbutton_clicked()
{
    AfterLogin  *a=new AfterLogin();
    a->show();
    this->hide();
}

