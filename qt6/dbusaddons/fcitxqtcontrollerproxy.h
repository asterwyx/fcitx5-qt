/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p fcitxqtcontrollerproxy -c FcitxQtControllerProxy interfaces/org.fcitx.Fcitx.Controller1.xml -i fcitxqtdbustypes.h -i fcitx5qt6dbusaddons_export.h
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FCITXQTCONTROLLERPROXY_H
#define FCITXQTCONTROLLERPROXY_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "fcitxqtdbustypes.h"
#include "fcitx5qt6dbusaddons_export.h"

namespace fcitx {

/*
 * Proxy class for interface org.fcitx.Fcitx.Controller1
 */
class FCITX5QT6DBUSADDONS_EXPORT FcitxQtControllerProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fcitx.Fcitx.Controller1"; }

public:
    FcitxQtControllerProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~FcitxQtControllerProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Activate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Activate"), argumentList);
    }

    inline QDBusPendingReply<> AddInputMethodGroup(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("AddInputMethodGroup"), argumentList);
    }

    inline QDBusPendingReply<QString> AddonForIM(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("AddonForIM"), argumentList);
    }

    inline QDBusPendingReply<FcitxQtInputMethodEntryList> AvailableInputMethods()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("AvailableInputMethods"), argumentList);
    }

    inline QDBusPendingReply<FcitxQtLayoutInfoList> AvailableKeyboardLayouts()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("AvailableKeyboardLayouts"), argumentList);
    }

    inline QDBusPendingReply<bool> CheckUpdate()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("CheckUpdate"), argumentList);
    }

    inline QDBusPendingReply<> Configure()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Configure"), argumentList);
    }

    inline QDBusPendingReply<> ConfigureAddon(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("ConfigureAddon"), argumentList);
    }

    inline QDBusPendingReply<> ConfigureIM(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("ConfigureIM"), argumentList);
    }

    inline QDBusPendingReply<QString> CurrentInputMethod()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("CurrentInputMethod"), argumentList);
    }

    inline QDBusPendingReply<QString> CurrentUI()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("CurrentUI"), argumentList);
    }

    inline QDBusPendingReply<> Exit()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Exit"), argumentList);
    }

    inline QDBusPendingReply<FcitxQtAddonInfoList> GetAddons()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetAddons"), argumentList);
    }

    inline QDBusPendingReply<FcitxQtAddonInfoV2List> GetAddonsV2()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetAddonsV2"), argumentList);
    }

    inline QDBusPendingReply<QDBusVariant, FcitxQtConfigTypeList> GetConfig(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("GetConfig"), argumentList);
    }
    inline QDBusReply<QDBusVariant> GetConfig(const QString &in0, FcitxQtConfigTypeList &out1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("GetConfig"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            out1 = qdbus_cast<FcitxQtConfigTypeList>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<QString, FcitxQtStringKeyValueList> InputMethodGroupInfo(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("InputMethodGroupInfo"), argumentList);
    }
    inline QDBusReply<QString> InputMethodGroupInfo(const QString &in0, FcitxQtStringKeyValueList &items)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QStringLiteral("InputMethodGroupInfo"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            items = qdbus_cast<FcitxQtStringKeyValueList>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<QStringList> InputMethodGroups()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("InputMethodGroups"), argumentList);
    }

    inline QDBusPendingReply<> Refresh()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Refresh"), argumentList);
    }

    inline QDBusPendingReply<> ReloadAddonConfig(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("ReloadAddonConfig"), argumentList);
    }

    inline QDBusPendingReply<> ReloadConfig()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("ReloadConfig"), argumentList);
    }

    inline QDBusPendingReply<> RemoveInputMethodGroup(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("RemoveInputMethodGroup"), argumentList);
    }

    inline QDBusPendingReply<> ResetIMList()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("ResetIMList"), argumentList);
    }

    inline QDBusPendingReply<> Restart()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Restart"), argumentList);
    }

    inline QDBusPendingReply<> SetAddonsState(FcitxQtAddonStateList in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("SetAddonsState"), argumentList);
    }

    inline QDBusPendingReply<> SetConfig(const QString &in0, const QDBusVariant &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("SetConfig"), argumentList);
    }

    inline QDBusPendingReply<> SetCurrentIM(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("SetCurrentIM"), argumentList);
    }

    inline QDBusPendingReply<> SetInputMethodGroupInfo(const QString &name, const QString &layout, FcitxQtStringKeyValueList entries)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(name) << QVariant::fromValue(layout) << QVariant::fromValue(entries);
        return asyncCallWithArgumentList(QStringLiteral("SetInputMethodGroupInfo"), argumentList);
    }

    inline QDBusPendingReply<int> State()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("State"), argumentList);
    }

    inline QDBusPendingReply<> Toggle()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Toggle"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void InputMethodGroupsChanged();
};

}

#endif
