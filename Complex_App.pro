QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    afterlogin.cpp \
    allcarsdialog.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    questiondialog.cpp \
    setdialog.cpp \
    signindialog.cpp

HEADERS += \
    afterlogin.h \
    allcarsdialog.h \
    dialog.h \
    mainwindow.h \
    questiondialog.h \
    setdialog.h \
    signindialog.h

FORMS += \
    afterlogin.ui \
    allcarsdialog.ui \
    dialog.ui \
    mainwindow.ui \
    questiondialog.ui \
    setdialog.ui \
    signindialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Complex_App.pro.user
