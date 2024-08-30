#include "afterlogin.h"
#include "ui_afterlogin.h"
#include"setdialog.h"
#include<QFile>
#include<QTextStream>
#include<QString>
#include <QLabel>
#include <QPixmap>
#include"mainwindow.h"
#include"allcarsdialog.h"
#include"questiondialog.h"

AfterLogin::AfterLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AfterLogin)
{
    ui->setupUi(this);
    ui->a4button->hide();
    ui->a4line_edit->hide();
    ui->a4price->hide();
    ui->a6button->hide();
    ui->a6line_edit->hide();
    ui->a6price->hide();
    ui->a7button->hide();
    ui->a7line_edit->hide();
    ui->a7price->hide();
    ui->logoutbuton->hide();

    ui->bmw3erlabel->hide();
    ui->bmw5erlabel->hide();
    ui->bmw7erlabel->hide();
    ui->audia4label->hide();
    ui->audia6label->hide();
    ui->audia7label->hide();
    ui->mercedescclass->hide();
    ui->mercedeseclass->hide();
    ui->mercedessclass->hide();
    ui->cayman_label->hide();
    ui->carera_label->hide();
    ui->panamera_label->hide();
    ui->nume->hide();

    QString filename = "output_file.txt";
    QFile file(filename);
    int ok=0;

    if (!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        ok=1;

    QTextStream stream(&file);
    file.seek(0);

    QString line1=stream.readLine();
    ui->namebuton->setText(line1);
}

AfterLogin::~AfterLogin()
{
    delete ui;
}

void clearFileContent(QString &filePath) {
    QFile file(filePath);

    // Open the file in write mode, which will clear its content
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        file.close();  // Close the file after truncating
        qDebug() << "File content cleared successfully.";
    } else {
        qDebug() << "Failed to open the file for clearing content.";
    }
}


void AfterLogin::on_audibutton_clicked()
{
    ui->audibutton->setStyleSheet("background-color:#E5E4E2;border :2px solid #E97451;");
    ui->bmwbutton->setStyleSheet("");
    ui->mercedesbuton->setStyleSheet("");
    ui->porschebuton->setStyleSheet("");
    ui->a4line_edit->setText("Audi A4");
    ui->a4price->setText("41.000,- EUR");
    ui->a4price->show();
    ui->a4button->show();
    ui->a4line_edit->show();
    ui->a6button->show();
    ui->a6line_edit->setText("Audi A6");
    ui->a6line_edit->show();
    ui->a6price->setText("54.100,- EUR");
    ui->a6price->show();
    ui->a7button->show();
    ui->a7line_edit->setText("Audi A7");
    ui->a7line_edit->show();
    ui->a7price->setText("69.100,- EUR");
    ui->a7price->show();
    //label1->hide();

    ui->mercedescclass->hide();
    ui->mercedeseclass->hide();
    ui->mercedessclass->hide();
    ui->bmw3erlabel->hide();
    ui->bmw5erlabel->hide();
    ui->bmw7erlabel->hide();
    ui->cayman_label->hide();
    ui->carera_label->hide();
    ui->panamera_label->hide();
    ui->audia4label->show();
    ui->audia6label->show();
    ui->audia7label->show();
}


void AfterLogin::on_a4button_clicked()
{
    QString names;
    names=ui->a4line_edit->text();
    //masina=names;


    if(names=="Audi A4")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("Audi A4"));
        audi->print();
        Car* x=new Car("Audi A4");
        ui->nume->setText(x->getName());
    }

    if(names=="BMW 3 Series")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("BMW 3 Series"));
        audi->print();
        Car* x=new Car("BMW 3 Series");
        ui->nume->setText(x->getName());
    }

    if(names=="Mercedes C class")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("Mercedes C class"));
        audi->print();
        Car* x=new Car("Mercedes C class");
        ui->nume->setText(x->getName());
    }


    QString filePath = "C:/Qt/Complex_App/build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/car_name.txt";
    clearFileContent(filePath);

    QString filename = "car_name.txt";
    QFile file(filename);
    int ok=0;

    if (!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        ok=1;

    QTextStream stream(&file);
    file.seek(0);

    QString line=ui->nume->text();
    stream<<line;
}


void AfterLogin::on_allcars_clicked()
{
    AllcarsDialog *j=new AllcarsDialog();
    j->show();
    this->hide();
}


void AfterLogin::on_a6button_clicked()
{
    QString names2;
    names2=ui->a6line_edit->text();
   // masina=names2;

    if(names2=="Audi A6")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("Audi A6"));
        audi->print();
        Car* x=new Car("Audi A6");
        ui->nume->setText(x->getName());
    }

    if(names2=="BMW 5 Series")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("BMW 5 Series"));
        audi->print();
        Car* x=new Car("BMW 5 Series");
        ui->nume->setText(x->getName());
    }

    if(names2=="Mercedes E class")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("Mercedes E class"));
        audi->print();
        Car* x=new Car("Mercedes E class");
        ui->nume->setText(x->getName());
    }


    QString filePath = "C:/Qt/Complex_App/build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/car_name.txt";
    clearFileContent(filePath);

    QString filename = "car_name.txt";
    QFile file(filename);
    int ok=0;

    if (!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        ok=1;

    QTextStream stream(&file);
   // file.seek(0);

    QString line=ui->nume->text();
    stream<<line;
}


void AfterLogin::on_a7button_clicked()
{
    QString names2;
    names2=ui->a7line_edit->text();

    if(names2=="Audi A7")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("Audi A7"));
        audi->print();
        Car* x=new Car("Audi A7");
        ui->nume->setText(x->getName());
    }

    if(names2=="BMW 7 Series")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("BMW 7 Series"));
        audi->print();
        Car* x=new Car("BMW 7 Series");
        ui->nume->setText(x->getName());
    }

    if(names2=="Mercedes S class")
    {
        CarShop* audi=new CarShop();
        audi->add_car(new Car("Mercedes S class"));
        audi->print();
        Car* x=new Car("Mercedes S class");
        ui->nume->setText(x->getName());
    }

    QString filePath = "C:/Qt/Complex_App/build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/car_name.txt";
    clearFileContent(filePath);

    QString filename = "car_name.txt";
    QFile file(filename);
    int ok=0;

    if (!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        ok=1;

    QTextStream stream(&file);
    file.seek(0);

    QString line=ui->nume->text();
    stream<<line;
}


void AfterLogin::on_bmwbutton_clicked()
{
    ui->bmwbutton->setStyleSheet("background-color:#E5E4E2;border :2px solid #E97451;");
    ui->mercedesbuton->setStyleSheet("");
    ui->audibutton->setStyleSheet("");
    ui->porschebuton->setStyleSheet("");
    ui->a4button->show();
    ui->a4line_edit->setText("BMW 3 Series");
    ui->a4line_edit->show();
    ui->a4price->setText("41.000,- EUR");
    ui->a4price->show();
    ui->a6button->show();
    ui->a6line_edit->setText("BMW 5 Series");
    ui->a6line_edit->show();
    ui->a6price->setText("58.965,- EUR");
    ui->a6price->show();
    ui->a7button->show();
    ui->a7line_edit->setText("BMW 7 Series");
    ui->a7line_edit->show();
    ui->a7price->setText("105.000,- EUR");
    ui->a7price->show();

    ui->mercedescclass->hide();
    ui->mercedeseclass->hide();
    ui->mercedessclass->hide();
    ui->audia4label->hide();
    ui->audia6label->hide();
    ui->audia7label->hide();
    ui->cayman_label->hide();
    ui->carera_label->hide();
    ui->panamera_label->hide();
    ui->bmw3erlabel->show();
    ui->bmw5erlabel->show();
    ui->bmw7erlabel->show();
}


void AfterLogin::on_namebuton_clicked()
{
    ui->logoutbuton->show();
    nr++;

    if(nr%2==0)
        ui->logoutbuton->hide();
}


void AfterLogin::on_logoutbuton_clicked()
{
    QString filename = "logout_file.txt";
    QFile file(filename);
    int ok=0;

    if (!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        ok=1;

    QTextStream stream(&file);
    stream<<"logout"<<Qt::endl;

    MainWindow *h=new MainWindow();
    h->show();
    this->hide();
}


void AfterLogin::on_mercedesbuton_clicked()
{
    ui->mercedesbuton->setStyleSheet("background-color:#E5E4E2;border :2px solid #E97451;");
    ui->bmwbutton->setStyleSheet("");
    ui->audibutton->setStyleSheet("");
    ui->porschebuton->setStyleSheet("");
    ui->mercedescclass->show();
    ui->bmw3erlabel->hide();
    ui->bmw5erlabel->hide();
    ui->bmw7erlabel->hide();
    ui->audia4label->hide();
    ui->audia6label->hide();
    ui->audia7label->hide();
    ui->cayman_label->hide();
    ui->carera_label->hide();
    ui->panamera_label->hide();

    ui->a4line_edit->setText("Mercedes C class");
    ui->a4price->setText("47.330,- EUR");
    ui->a4price->show();
    ui->a4button->show();
    ui->a4line_edit->show();
    ui->a4button->show();

    ui->mercedeseclass->show();
    ui->a6line_edit->setText("Mercedes E class");
    ui->a6price->setText("62.660,- EUR");
    ui->a6price->show();
    ui->a6button->show();
    ui->a6line_edit->show();
    ui->a6button->show();

    ui->mercedessclass->show();
    ui->a7line_edit->setText("Mercedes S class");
    ui->a7price->setText("112.520,- EUR");
    ui->a7price->show();
    ui->a7button->show();
    ui->a7line_edit->show();
    ui->a7button->show();
}

void AfterLogin::on_pushButton_clicked()
{
    QuestionDialog * v=new QuestionDialog();
    v->show();
    this->hide();
}


void AfterLogin::on_porschebuton_clicked()
{
    ui->audibutton->setStyleSheet("");
    ui->porschebuton->setStyleSheet("background-color:#E5E4E2;border :2px solid #E97451;");
    ui->bmwbutton->setStyleSheet("");
    ui->mercedesbuton->setStyleSheet("");
    ui->a4line_edit->setText("Porsche Cayman");
    ui->a4price->setText("70.000,- EUR");
    ui->a4price->show();
    ui->a4button->show();
    ui->a4line_edit->show();
    ui->a6button->show();
    ui->a6line_edit->setText("Porsche 911");
    ui->a6line_edit->show();
    ui->a6price->setText("135.100,- EUR");
    ui->a6price->show();
    ui->a7button->show();
    ui->a7line_edit->setText("Porsche Panamera");
    ui->a7line_edit->show();
    ui->a7price->setText("116.000,- EUR");
    ui->a7price->show();
    //label1->hide();

    ui->mercedescclass->hide();
    ui->mercedeseclass->hide();
    ui->mercedessclass->hide();
    ui->bmw3erlabel->hide();
    ui->bmw5erlabel->hide();
    ui->bmw7erlabel->hide();
    ui->audia4label->hide();
    ui->audia6label->hide();
    ui->audia7label->hide();
    ui->cayman_label->show();
    ui->carera_label->show();
    ui->panamera_label->show();
}

