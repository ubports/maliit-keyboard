﻿#ifndef LATVIANPLUGIN_H
#define LATVIANPLUGIN_H

#include <QObject>
#include "westernlanguagesplugin.h"

class LatvianPlugin : public WesternLanguagesPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.Examples.LatvianPlugin" FILE "latvianplugin.json")

public:
    explicit LatvianPlugin(QObject* parent = nullptr)
        : WesternLanguagesPlugin(parent)
    {
    }

    ~LatvianPlugin() override = default;
};

#endif // LATVIANPLUGIN_H
