QT += testlib gui sql widgets
CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

SOURCES += \
    ../history.cpp \
    ../main.cpp \
    ../mainmenu.cpp \
    ../mainwindow.cpp \
    ../sec_player_login.cpp \
    ../tic_tac_toe.cpp \
    ../tic_tac_toe_ai.cpp \
    ../tic_tac_toe_rand.cpp \
    tst_mainmenu2_test.cpp


HEADERS += \
    ../history.h \
    ../mainmenu.h \
    ../mainwindow.h \
    ../move.h \
    ../sec_player_login.h \
    ../tic_tac_toe.h \
    ../tic_tac_toe_ai.h \
    ../tic_tac_toe_rand.h\


FORMS += \
    ../history.ui \
    ../mainmenu.ui \
    ../mainwindow.ui \
    ../sec_player_login.ui \
    ../tic_tac_toe.ui \
    ../tic_tac_toe_ai.ui \
    ../tic_tac_toe_rand.ui\


TARGET = mainmenu2_test
