/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *signinbutton;
    QLineEdit *lineEdit;
    QPushButton *back_button;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_2;
    QLineEdit *erorsignin;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(612, 306);
        Dialog->setStyleSheet(QString::fromUtf8(""));
        signinbutton = new QPushButton(Dialog);
        signinbutton->setObjectName("signinbutton");
        signinbutton->setGeometry(QRect(30, 200, 81, 31));
        signinbutton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 30, 61, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    font: 700 11pt \"Segoe UI\";\n"
"	border:0px;\n"
"	background-color:transparent;\n"
"	color:white;\n"
"}"));
        back_button = new QPushButton(Dialog);
        back_button->setObjectName("back_button");
        back_button->setGeometry(QRect(450, 240, 101, 41));
        back_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        lineEdit_name = new QLineEdit(Dialog);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(30, 70, 113, 22));
        lineEdit_password = new QLineEdit(Dialog);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(30, 140, 113, 22));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 110, 113, 22));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"\n"
"font: 700 11pt \"Segoe UI\";\n"
"	border:0px;\n"
"	background-color:transparent;\n"
"	color:white;\n"
"}"));
        erorsignin = new QLineEdit(Dialog);
        erorsignin->setObjectName("erorsignin");
        erorsignin->setGeometry(QRect(30, 170, 181, 21));
        erorsignin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	color:red;\n"
"	border:0px;\n"
"	background-color:transparent;\n"
"}"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        signinbutton->setText(QCoreApplication::translate("Dialog", "Sign In", nullptr));
        lineEdit->setText(QCoreApplication::translate("Dialog", "   Name", nullptr));
        back_button->setText(QCoreApplication::translate("Dialog", "Back", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Dialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
