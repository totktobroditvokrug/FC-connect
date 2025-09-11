QT       += core gui serialport printsupport

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
    adapter_commands.cpp \
    aliasfromenum.cpp \
    configfile.cpp \
    iface.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    plot/qcustomplot.cpp \
    qpaintwidget.cpp \
    stylehelper.cpp \
    tab_all_data.cpp \
    tab_can_adapter.cpp \
    tab_control.cpp \
    tab_measure.cpp \
    tab_plot.cpp \
    tab_register_list.cpp \
    tab_registers_table.cpp \
    tab_status.cpp \
    tab_uf.cpp \
    tab_vector.cpp

HEADERS += \
    adapter_commands.h \
    aliasfromenum.h \
    configfile.h \
    iface.h \
    invertor.h \
    mainwindow.h \
    plot/qcustomplot.h \
    qpaintwidget.h \
    stylehelper.h \
    tab_plot.h \
    tab_vector.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourse.qrc

DISTFILES += \
    images/start.png \
    images/start_small.png \
    images/stop.png \
    images/stop_small.png \
    images/wait.png \
    images/wait_small.png
