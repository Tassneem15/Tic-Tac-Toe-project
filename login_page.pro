QT       += core gui sql widgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    history.cpp \
    main.cpp \
    mainmenu.cpp \
    mainwindow.cpp \
    sec_player_login.cpp \
    tic_tac_toe.cpp \
    tic_tac_toe_ai.cpp \
    tic_tac_toe_rand.cpp

HEADERS += \
    history.h \
    mainmenu.h \
    mainwindow.h \
    move.h \
    sec_player_login.h \
    tic_tac_toe.h \
    tic_tac_toe_ai.h \
    tic_tac_toe_rand.h

FORMS += \
    history.ui \
    mainmenu.ui \
    mainwindow.ui \
    sec_player_login.ui \
    tic_tac_toe.ui \
    tic_tac_toe_ai.ui \
    tic_tac_toe_rand.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    images_setting.qrc
