#include "mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QString>
#include <QApplication>
#include "signindialog.h"
#include"afterlogin.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QString filename = "output_file.txt";
    QFile file(filename);
    int ok=0;
    AfterLogin f;

    if (!file.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        ok=1;

    QTextStream stream(&file);
    file.seek(0);
    QString line1=stream.readLine();

    QString filename1 = "logout_file.txt";
    QFile file1(filename1);

    if (!file1.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text))
        ok=1;

    QTextStream citire(&file1);
    file1.seek(0);
    QString line2=citire.readLine();

    if(line2=="logout")
        w.show();
    else
    if(line1.size()>0)
        f.show();
    else
        w.show();

    return a.exec();
}
