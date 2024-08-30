#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "setdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("D:/test/teslas.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_button_clicked()
{
    this->hide();
    SetDialog dial;
    dial.setModal(true);
    dial.exec();
}


void MainWindow::on_signin_button_clicked()
{
    this->hide();
    Dialog dial;
    dial.setModal(true);
    dial.exec();
}


void MainWindow::on_quit_button_clicked()
{
    this->hide();
}

