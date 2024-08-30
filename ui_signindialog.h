/********************************************************************************
** Form generated from reading UI file 'signindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINDIALOG_H
#define UI_SIGNINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SigninDialog
{
public:
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *login_button2;
    QPushButton *mainmenu;

    void setupUi(QDialog *SigninDialog)
    {
        if (SigninDialog->objectName().isEmpty())
            SigninDialog->setObjectName("SigninDialog");
        SigninDialog->resize(676, 341);
        SigninDialog->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(SigninDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 10, 331, 91));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0px;\n"
"	color:red;\n"
"	background-color:transparent;\n"
"	font: 700 italic 13pt \"Segoe UI\";\n"
"}"));
        textEdit = new QTextEdit(SigninDialog);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 80, 331, 81));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"	border:0;\n"
"	background-color:transparent;\n"
"	color:red;\n"
"	font: 18px;\n"
"}"));
        login_button2 = new QPushButton(SigninDialog);
        login_button2->setObjectName("login_button2");
        login_button2->setGeometry(QRect(50, 220, 101, 41));
        login_button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        mainmenu = new QPushButton(SigninDialog);
        mainmenu->setObjectName("mainmenu");
        mainmenu->setGeometry(QRect(470, 250, 131, 41));
        mainmenu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));

        retranslateUi(SigninDialog);

        QMetaObject::connectSlotsByName(SigninDialog);
    } // setupUi

    void retranslateUi(QDialog *SigninDialog)
    {
        SigninDialog->setWindowTitle(QCoreApplication::translate("SigninDialog", "Dialog", nullptr));
        lineEdit->setText(QCoreApplication::translate("SigninDialog", "Thank you for creating an account!", nullptr));
        textEdit->setHtml(QCoreApplication::translate("SigninDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:18px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">To access the app ,you have to be logged in. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Click &quot;to Log In&quot; if you want to connect to </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt"
                        "-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">your account.</span></p></body></html>", nullptr));
        login_button2->setText(QCoreApplication::translate("SigninDialog", "to Log In", nullptr));
        mainmenu->setText(QCoreApplication::translate("SigninDialog", "to Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SigninDialog: public Ui_SigninDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINDIALOG_H
