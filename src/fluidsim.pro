#    CSC 486 Assignment 1
#    Ryan Guy
#    V00484803

HEADERS       = glwidget.h \
                window.h \
    camera3d.h \
    quaternion.h \
    utils.h \
    spatialgrid.h \
    cellhash.h \
    gridcell.h \
    gridpoint.h
SOURCES       = glwidget.cpp \
                main.cpp \
                window.cpp \
    camera3d.cpp \
    quaternion.cpp \
    utils.cpp \
    spatialgrid.cpp \
    cellhash.cpp \
    gridcell.cpp
QT           += opengl widgets

QMAKE_CXXFLAGS += -std=c++0x

contains(QT_CONFIG, opengles.) {
    contains(QT_CONFIG, angle): \
        warning("Qt was built with ANGLE, which provides only OpenGL ES 2.0 on top of DirectX 9.0c")
    error("This example requires Qt to be configured with -opengl desktop")
}