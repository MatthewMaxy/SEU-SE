QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    addregister.cpp \
    book.cpp \
    bookfile.cpp \
    borrowbook.cpp \
    borrowbook2.cpp \
    deletebook.cpp \
    delregister.cpp \
    main.cpp \
    mainwindow.cpp \
    readonlydelegate.cpp \
    return2.cpp \
    returnbook.cpp

HEADERS += \
    addbook.h \
    addregister.h \
    book.h \
    bookfile.h \
    borrowbook.h \
    borrowbook2.h \
    deletebook.h \
    delregister.h \
    mainwindow.h \
    readonlydelegate.h \
    return2.h \
    returnbook.h

FORMS += \
    addbook.ui \
    addregister.ui \
    borrowbook.ui \
    borrowbook2.ui \
    deletebook.ui \
    delregister.ui \
    mainwindow.ui \
    return2.ui \
    returnbook.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
