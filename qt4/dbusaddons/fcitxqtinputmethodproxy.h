/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -p fcitxqtinputmethodproxy -c FcitxQtInputMethodProxy interfaces/org.fcitx.Fcitx.InputMethod1.xml -i fcitxqtdbustypes.h -i fcitx5qt4dbusaddons_export.h
 *
 * qdbusxml2cpp is Copyright (C) 2015 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FCITXQTINPUTMETHODPROXY_H_1637715099
#define FCITXQTINPUTMETHODPROXY_H_1637715099

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "fcitxqtdbustypes.h"
#include "fcitx5qt4dbusaddons_export.h"

namespace fcitx {

/*
 * Proxy class for interface org.fcitx.Fcitx.InputMethod1
 */
class FCITX5QT4DBUSADDONS_EXPORT FcitxQtInputMethodProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fcitx.Fcitx.InputMethod1"; }

public:
    FcitxQtInputMethodProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~FcitxQtInputMethodProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath, QByteArray> CreateInputContext(FcitxQtStringKeyValueList in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("CreateInputContext"), argumentList);
    }
    inline QDBusReply<QDBusObjectPath> CreateInputContext(FcitxQtStringKeyValueList in0, QByteArray &out1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("CreateInputContext"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            out1 = qdbus_cast<QByteArray>(reply.arguments().at(1));
        }
        return reply;
    }

Q_SIGNALS: // SIGNALS
};

}

#endif
