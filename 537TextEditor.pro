QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    537TextEditor_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../537TextEditor_Logo.ico \
    README.md

RESOURCES += \
    Logo.qrc

#程序图标
RC_ICONS = 537TextEditor_Logo.ico

# 版本信息
VERSION = 3.0.0.0

# 产品名称
QMAKE_TARGET_PRODUCT = "537 Text Editor"

# 文件说明
QMAKE_TARGET_DESCRIPTION = "537 Text Editor - Think Different"

# 版权信息
QMAKE_TARGET_COPYRIGHT = "Copyright (C) 2023-2025 537 Studio. All rights reserved."

# 中文（简体）
RC_LANG = 0x0804

