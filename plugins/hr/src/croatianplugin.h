﻿#ifndef CROATIANPLUGIN_H
#define CROATIANPLUGIN_H

#include <QObject>
#include "westernlanguagesplugin.h"

class CroatianPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.Examples.CroatianPlugin" FILE "croatianplugin.json")

public:
    explicit CroatianPlugin(QObject* parent = nullptr)
        : WesternLanguagesPlugin(parent)
    {
    }

    ~CroatianPlugin() override = default;
};

#endif // CROATIANPLUGIN_H
