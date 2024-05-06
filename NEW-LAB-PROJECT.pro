QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminactions.cpp \
    main.cpp \
    loginwindow.cpp \
    objects.cpp \
    registerwindow.cpp \
    useractions.cpp \
    users.cpp

HEADERS += \
    adminactions.h \
    loginwindow.h \
    objects.h \
    registerwindow.h \
    useractions.h \
    users.h

FORMS += \
    adminactions.ui \
    loginwindow.ui \
    registerwindow.ui \
    useractions.ui \
    users.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
