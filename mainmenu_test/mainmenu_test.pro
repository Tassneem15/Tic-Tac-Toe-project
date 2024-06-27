QT += testlib gui sql widgets
CONFIG += testlib

TEMPLATE = app

SOURCES += \
    ../ai.cpp \
    ../history.cpp \
    ../main.cpp \
    ../mainmenu.cpp \
    ../mainwindow.cpp \
    ../sec_player_login.cpp \
    ../tic_tac_toe.cpp \
    ../tic_tac_toe_ai.cpp \
    ../tic_tac_toe_rand.cpp \


    tst_mainmenu_test.cpp


HEADERS += \
    ../ai.h \
    ../history.h \
    ../mainmenu.h \
    ../mainwindow.h \
    ../move.h \
    ../sec_player_login.h \
    ../tic_tac_toe.h \
    ../tic_tac_toe_ai.h \
    ../tic_tac_toe_rand.h


FORMS += \
    ../history.ui \
    ../mainmenu.ui \
    ../mainwindow.ui \
    ../sec_player_login.ui \
    ../tic_tac_toe.ui \
    ../tic_tac_toe_ai.ui \
    ../tic_tac_toe_rand.ui


TARGET = mainmenu_test
