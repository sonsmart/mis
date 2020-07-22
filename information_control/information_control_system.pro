QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chat.cpp \
    classmate.cpp \
    collaege.cpp \
    cout_person.cpp \
    delete_person.cpp \
    main.cpp \
    modify.cpp \
    person.cpp \
    relative.cpp \
    sta_person_number.cpp \
    the_friend.cpp \
    who_birthday.cpp \
    widget.cpp

HEADERS += \
    chat.h \
    classmate.h \
    collaege.h \
    cout_person.h \
    delete_person.h \
    modify.h \
    person.h \
    relative.h \
    sta_person_number.h \
    the_friend.h \
    who_birthday.h \
    widget.h

FORMS += \
    chat.ui \
    classmate.ui \
    collaege.ui \
    cout_person.ui \
    delete_person.ui \
    modify.ui \
    person.ui \
    relative.ui \
    sta_person_number.ui \
    the_friend.ui \
    who_birthday.ui \
    widget.ui

TRANSLATIONS += \
    information_control_system_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
