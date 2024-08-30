/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *login_button;
    QPushButton *signin_button;
    QLineEdit *lineEdit;
    QPushButton *quit_button;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(685, 361);
        MainWindow->setMinimumSize(QSize(619, 0));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        login_button = new QPushButton(centralwidget);
        login_button->setObjectName("login_button");
        login_button->setGeometry(QRect(50, 100, 91, 41));
        login_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        signin_button = new QPushButton(centralwidget);
        signin_button->setObjectName("signin_button");
        signin_button->setGeometry(QRect(50, 170, 91, 41));
        signin_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(230, 30, 211, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0px;\n"
"	color:white;\n"
"	background-color:transparent;\n"
"	font: 700 italic 16pt \"Segoe UI\";\n"
"}"));
        quit_button = new QPushButton(centralwidget);
        quit_button->setObjectName("quit_button");
        quit_button->setGeometry(QRect(50, 240, 91, 41));
        quit_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login_button->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        signin_button->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Welcome to the app", nullptr));
        quit_button->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
