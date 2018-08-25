TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    commissionemployee.cpp \
    basepluscommissionemployee.cpp \
    employee.cpp \
    salariedemployee.cpp

HEADERS += \
    commissionemployee.h \
    basepluscommissionemployee.h \
    employee.h \
    salariedemployee.h
