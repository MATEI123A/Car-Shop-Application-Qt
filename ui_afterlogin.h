/********************************************************************************
** Form generated from reading UI file 'afterlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFTERLOGIN_H
#define UI_AFTERLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AfterLogin
{
public:
    QLineEdit *lineEdit_2;
    QPushButton *bmwbutton;
    QPushButton *mercedesbuton;
    QPushButton *audibutton;
    QLineEdit *a4line_edit;
    QPushButton *a4button;
    QLineEdit *a6line_edit;
    QPushButton *a6button;
    QLineEdit *a4price;
    QLineEdit *a6price;
    QPushButton *allcars;
    QLineEdit *a7line_edit;
    QLineEdit *a7price;
    QPushButton *a7button;
    QFrame *line;
    QPushButton *namebuton;
    QPushButton *logoutbuton;
    QLabel *audia4label;
    QLabel *audia6label;
    QLabel *audia7label;
    QLabel *bmw3erlabel;
    QLabel *bmw5erlabel;
    QLabel *bmw7erlabel;
    QLabel *mercedescclass;
    QLabel *mercedeseclass;
    QLabel *mercedessclass;
    QLineEdit *nume;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *porschebuton;
    QLabel *cayman_label;
    QLabel *carera_label;
    QLabel *panamera_label;

    void setupUi(QDialog *AfterLogin)
    {
        if (AfterLogin->objectName().isEmpty())
            AfterLogin->setObjectName("AfterLogin");
        AfterLogin->resize(675, 348);
        AfterLogin->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color:#353935;\n"
"}"));
        lineEdit_2 = new QLineEdit(AfterLogin);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(160, 30, 141, 22));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	background-color:transparent;\n"
"	color:white;\n"
"	font: 700 12pt \"Segoe UI\";\n"
"}"));
        bmwbutton = new QPushButton(AfterLogin);
        bmwbutton->setObjectName("bmwbutton");
        bmwbutton->setGeometry(QRect(60, 120, 75, 24));
        mercedesbuton = new QPushButton(AfterLogin);
        mercedesbuton->setObjectName("mercedesbuton");
        mercedesbuton->setGeometry(QRect(60, 160, 75, 24));
        audibutton = new QPushButton(AfterLogin);
        audibutton->setObjectName("audibutton");
        audibutton->setGeometry(QRect(60, 80, 75, 24));
        audibutton->setStyleSheet(QString::fromUtf8(""));
        a4line_edit = new QLineEdit(AfterLogin);
        a4line_edit->setObjectName("a4line_edit");
        a4line_edit->setGeometry(QRect(160, 160, 113, 22));
        a4line_edit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	background-color:transparent;\n"
"	color:white;\n"
"}"));
        a4button = new QPushButton(AfterLogin);
        a4button->setObjectName("a4button");
        a4button->setGeometry(QRect(160, 210, 75, 24));
        a6line_edit = new QLineEdit(AfterLogin);
        a6line_edit->setObjectName("a6line_edit");
        a6line_edit->setGeometry(QRect(300, 160, 113, 22));
        a6line_edit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	background-color:transparent;\n"
"	color:white;\n"
"}"));
        a6button = new QPushButton(AfterLogin);
        a6button->setObjectName("a6button");
        a6button->setGeometry(QRect(300, 210, 75, 24));
        a4price = new QLineEdit(AfterLogin);
        a4price->setObjectName("a4price");
        a4price->setGeometry(QRect(160, 180, 113, 22));
        a4price->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	color:white;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color:transparent;\n"
"}"));
        a6price = new QLineEdit(AfterLogin);
        a6price->setObjectName("a6price");
        a6price->setGeometry(QRect(300, 180, 113, 22));
        a6price->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	color:white;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color:transparent;\n"
"}"));
        allcars = new QPushButton(AfterLogin);
        allcars->setObjectName("allcars");
        allcars->setGeometry(QRect(420, 20, 101, 41));
        allcars->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("D:/test/shop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        allcars->setIcon(icon);
        allcars->setIconSize(QSize(19, 20));
        a7line_edit = new QLineEdit(AfterLogin);
        a7line_edit->setObjectName("a7line_edit");
        a7line_edit->setGeometry(QRect(440, 160, 113, 22));
        a7line_edit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	background-color:transparent;\n"
"	color:white;\n"
"}"));
        a7price = new QLineEdit(AfterLogin);
        a7price->setObjectName("a7price");
        a7price->setGeometry(QRect(440, 180, 113, 22));
        a7price->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	color:white;\n"
"	font: 700 11pt \"Segoe UI\";\n"
"	background-color:transparent;\n"
"}"));
        a7button = new QPushButton(AfterLogin);
        a7button->setObjectName("a7button");
        a7button->setGeometry(QRect(440, 210, 75, 24));
        line = new QFrame(AfterLogin);
        line->setObjectName("line");
        line->setGeometry(QRect(160, 50, 131, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        namebuton = new QPushButton(AfterLogin);
        namebuton->setObjectName("namebuton");
        namebuton->setGeometry(QRect(540, 20, 131, 24));
        namebuton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 8pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        logoutbuton = new QPushButton(AfterLogin);
        logoutbuton->setObjectName("logoutbuton");
        logoutbuton->setGeometry(QRect(580, 60, 75, 24));
        logoutbuton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 8pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        audia4label = new QLabel(AfterLogin);
        audia4label->setObjectName("audia4label");
        audia4label->setGeometry(QRect(160, 80, 121, 71));
        audia4label->setPixmap(QPixmap(QString::fromUtf8("D:/test/audia4.jpg")));
        audia4label->setScaledContents(true);
        audia6label = new QLabel(AfterLogin);
        audia6label->setObjectName("audia6label");
        audia6label->setGeometry(QRect(300, 80, 121, 71));
        audia6label->setPixmap(QPixmap(QString::fromUtf8("D:/test/audia6.jpg")));
        audia6label->setScaledContents(true);
        audia7label = new QLabel(AfterLogin);
        audia7label->setObjectName("audia7label");
        audia7label->setGeometry(QRect(440, 80, 131, 71));
        audia7label->setPixmap(QPixmap(QString::fromUtf8("D:/test/audia7.jpg")));
        audia7label->setScaledContents(true);
        bmw3erlabel = new QLabel(AfterLogin);
        bmw3erlabel->setObjectName("bmw3erlabel");
        bmw3erlabel->setGeometry(QRect(160, 80, 121, 71));
        bmw3erlabel->setPixmap(QPixmap(QString::fromUtf8("D:/test/bmw3er.jpg")));
        bmw3erlabel->setScaledContents(true);
        bmw3erlabel->setWordWrap(false);
        bmw5erlabel = new QLabel(AfterLogin);
        bmw5erlabel->setObjectName("bmw5erlabel");
        bmw5erlabel->setGeometry(QRect(300, 80, 121, 71));
        bmw5erlabel->setPixmap(QPixmap(QString::fromUtf8("D:/test/bmw5er.jpg")));
        bmw5erlabel->setScaledContents(true);
        bmw7erlabel = new QLabel(AfterLogin);
        bmw7erlabel->setObjectName("bmw7erlabel");
        bmw7erlabel->setGeometry(QRect(440, 80, 131, 71));
        bmw7erlabel->setPixmap(QPixmap(QString::fromUtf8("D:/test/bmw7er.jpg")));
        bmw7erlabel->setScaledContents(true);
        mercedescclass = new QLabel(AfterLogin);
        mercedescclass->setObjectName("mercedescclass");
        mercedescclass->setGeometry(QRect(160, 80, 121, 71));
        mercedescclass->setPixmap(QPixmap(QString::fromUtf8("D:/test/mercedescclass.jpg")));
        mercedescclass->setScaledContents(true);
        mercedeseclass = new QLabel(AfterLogin);
        mercedeseclass->setObjectName("mercedeseclass");
        mercedeseclass->setGeometry(QRect(300, 80, 121, 71));
        mercedeseclass->setPixmap(QPixmap(QString::fromUtf8("D:/test/mercedeseclass.jpg")));
        mercedeseclass->setScaledContents(true);
        mercedessclass = new QLabel(AfterLogin);
        mercedessclass->setObjectName("mercedessclass");
        mercedessclass->setGeometry(QRect(440, 80, 131, 71));
        mercedessclass->setPixmap(QPixmap(QString::fromUtf8("D:/test/mercedessclass.jpg")));
        mercedessclass->setScaledContents(true);
        nume = new QLineEdit(AfterLogin);
        nume->setObjectName("nume");
        nume->setGeometry(QRect(20, 20, 113, 22));
        lineEdit = new QLineEdit(AfterLogin);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 280, 421, 22));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"	border:0;\n"
"	color:white;\n"
"	background-color:transparent;\n"
"	font: 10pt \"Segoe UI\";\n"
"	font: 700 10pt \"Segoe UI\";\n"
"}"));
        lineEdit_3 = new QLineEdit(AfterLogin);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(130, 300, 411, 22));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"	border:0;\n"
"	color:white;\n"
"	background-color:transparent;\n"
"	font: 10pt \"Segoe UI\";\n"
"	font: 700 10pt \"Segoe UI\";\n"
"}"));
        pushButton = new QPushButton(AfterLogin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 280, 51, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font: 700 10pt \"Segoe UI\";\n"
"    background-color: #4CAF50; /* Verde deschis */\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    font-size: 16px;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45a049; /* Verde un pic mai \303\256nchis la hover */\n"
"}\n"
""));
        porschebuton = new QPushButton(AfterLogin);
        porschebuton->setObjectName("porschebuton");
        porschebuton->setGeometry(QRect(60, 200, 75, 24));
        cayman_label = new QLabel(AfterLogin);
        cayman_label->setObjectName("cayman_label");
        cayman_label->setGeometry(QRect(160, 80, 121, 71));
        cayman_label->setPixmap(QPixmap(QString::fromUtf8("D:/test/cayman.jpg")));
        cayman_label->setScaledContents(true);
        carera_label = new QLabel(AfterLogin);
        carera_label->setObjectName("carera_label");
        carera_label->setGeometry(QRect(300, 80, 121, 71));
        carera_label->setPixmap(QPixmap(QString::fromUtf8("D:/test/911.jpg")));
        carera_label->setScaledContents(true);
        panamera_label = new QLabel(AfterLogin);
        panamera_label->setObjectName("panamera_label");
        panamera_label->setGeometry(QRect(440, 80, 131, 71));
        panamera_label->setPixmap(QPixmap(QString::fromUtf8("D:/test/panamera.jpg")));
        panamera_label->setScaledContents(true);

        retranslateUi(AfterLogin);

        QMetaObject::connectSlotsByName(AfterLogin);
    } // setupUi

    void retranslateUi(QDialog *AfterLogin)
    {
        AfterLogin->setWindowTitle(QCoreApplication::translate("AfterLogin", "Dialog", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("AfterLogin", "VEHICLE SELECT", nullptr));
        bmwbutton->setText(QCoreApplication::translate("AfterLogin", "BMW", nullptr));
        mercedesbuton->setText(QCoreApplication::translate("AfterLogin", "Mercedes", nullptr));
        audibutton->setText(QCoreApplication::translate("AfterLogin", "Audi", nullptr));
        a4line_edit->setText(QCoreApplication::translate("AfterLogin", "Audi A4", nullptr));
        a4button->setText(QCoreApplication::translate("AfterLogin", "Select", nullptr));
        a6line_edit->setText(QCoreApplication::translate("AfterLogin", "Audi A6", nullptr));
        a6button->setText(QCoreApplication::translate("AfterLogin", "Select", nullptr));
        a4price->setText(QCoreApplication::translate("AfterLogin", "41.000,- EUR", nullptr));
        a6price->setText(QCoreApplication::translate("AfterLogin", "54.100,- EUR", nullptr));
        allcars->setText(QString());
        a7line_edit->setText(QCoreApplication::translate("AfterLogin", "Audi A7", nullptr));
        a7price->setText(QCoreApplication::translate("AfterLogin", "69.100,- EUR", nullptr));
        a7button->setText(QCoreApplication::translate("AfterLogin", "Select", nullptr));
        namebuton->setText(QCoreApplication::translate("AfterLogin", ".", nullptr));
        logoutbuton->setText(QCoreApplication::translate("AfterLogin", "Log out", nullptr));
        audia4label->setText(QString());
        audia6label->setText(QString());
        audia7label->setText(QString());
        bmw3erlabel->setText(QString());
        bmw5erlabel->setText(QString());
        bmw7erlabel->setText(QString());
        mercedescclass->setText(QString());
        mercedeseclass->setText(QString());
        mercedessclass->setText(QString());
        lineEdit->setText(QCoreApplication::translate("AfterLogin", "Not sure what car you want to get? Press the button in the corner, ", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("AfterLogin", " answer the questions and we will help you.", nullptr));
        pushButton->setText(QCoreApplication::translate("AfterLogin", "?", nullptr));
        porschebuton->setText(QCoreApplication::translate("AfterLogin", "Porsche", nullptr));
        cayman_label->setText(QString());
        carera_label->setText(QString());
        panamera_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AfterLogin: public Ui_AfterLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFTERLOGIN_H
