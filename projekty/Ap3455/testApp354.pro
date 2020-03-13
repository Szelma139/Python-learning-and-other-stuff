QT += gui core sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 console
CONFIG += app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    trackerui.cpp \
    createtournamentform.cpp \
    createteam.cpp \
    createprizeform.cpp \
    tournamentdashboard.cpp \
    idataconnection.cpp \
    globalconfig.cpp \
    sqlconnector.cpp \
    textconnection.cpp \
    matchupentrymodel.cpp \
    matchupmodel.cpp \
    personmodel.cpp \
    prizemodel.cpp \
    teammodel.cpp \
    tournamentmodel.cpp \
    createprizeform.cpp \
    createteam.cpp \
    createtournamentform.cpp \
    globalconfig.cpp \
    idataconnection.cpp \
    main.cpp \
    sqlconnector.cpp \
    textconnection.cpp \
    tournamentdashboard.cpp \
    trackerui.cpp

HEADERS += \
    trackerui.h \
    createtournamentform.h \
    createteam.h \
    createprizeform.h \
    tournamentdashboard.h \
    connector.h \
    idataconnection.h \
    globalconfig.h \
    sqlconnector.h \
    textconnection.h \
    matchupentrymodel.h \
    matchupmodel.h \
    personmodel.h \
    prizemodel.h \
    teammodel.h \
    tournamentmodel.h \
    connector.h \
    createprizeform.h \
    createteam.h \
    createtournamentform.h \
    globalconfig.h \
    idataconnection.h \
    sqlconnector.h \
    textconnection.h \
    tournamentdashboard.h \
    trackerui.h

FORMS += \
    trackerui.ui \
    createtournamentform.ui \
    createteam.ui \
    createprizeform.ui \
    tournamentdashboard.ui
