#include "signindialog.h"
#include "ui_signindialog.h"
#include "mainwindow.h"
#include "setdialog.h"

SigninDialog::SigninDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SigninDialog)
{
    ui->setupUi(this);
    QPixmap bkgnd("D:/test/tsla.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

}

SigninDialog::~SigninDialog()
{
    delete ui;
}


void SigninDialog::on_mainmenu_clicked()
{
    MainWindow *a=new MainWindow();
    a->show();
    this->hide();
}


void SigninDialog::on_login_button2_clicked()
{
    SetDialog *b=new SetDialog();
    b->show();
    this->hide();
}

