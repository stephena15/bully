QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Weapon.cpp \
    actor.cpp \
    baseballbat.cpp \
    custombutton.cpp \
    dialog.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    room.cpp \
    school.cpp

HEADERS += \
    Weapon.h \
    actor.h \
    baseballbat.h \
    custombutton.h \
    dialog.h \
    item.h \
    mainwindow.h \
    player.h \
    room.h \
    school.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
