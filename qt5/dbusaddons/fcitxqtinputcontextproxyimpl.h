/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p fcitxqtinputcontextproxyimpl -c FcitxQtInputContextProxyImpl interfaces/org.fcitx.Fcitx.InputContext1.xml -i fcitxqtdbustypes.h -i fcitx5qt5dbusaddons_export.h
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef FCITXQTINPUTCONTEXTPROXYIMPL_H
#define FCITXQTINPUTCONTEXTPROXYIMPL_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "fcitxqtdbustypes.h"
#include "fcitx5qt5dbusaddons_export.h"

namespace fcitx {

/*
 * Proxy class for interface org.fcitx.Fcitx.InputContext1
 */
class FCITX5QT5DBUSADDONS_EXPORT FcitxQtInputContextProxyImpl: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fcitx.Fcitx.InputContext1"; }

public:
    FcitxQtInputContextProxyImpl(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~FcitxQtInputContextProxyImpl();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> DestroyIC()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("DestroyIC"), argumentList);
    }

    inline QDBusPendingReply<> FocusIn()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("FocusIn"), argumentList);
    }

    inline QDBusPendingReply<> FocusOut()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("FocusOut"), argumentList);
    }

    inline QDBusPendingReply<> InvokeAction(unsigned int action, int cursor) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(action)
                     << QVariant::fromValue(cursor);
        return asyncCallWithArgumentList(QStringLiteral("InvokeAction"),
                                         argumentList);
    }

    inline QDBusPendingReply<> NextPage()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("NextPage"), argumentList);
    }

    inline QDBusPendingReply<> PrevPage()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("PrevPage"), argumentList);
    }

    inline QDBusPendingReply<bool>
    ProcessKeyEvent(unsigned int keyval, unsigned int keycode,
                    unsigned int state, bool type, unsigned int time) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(keyval) << QVariant::fromValue(keycode) << QVariant::fromValue(state) << QVariant::fromValue(type) << QVariant::fromValue(time);
        return asyncCallWithArgumentList(QStringLiteral("ProcessKeyEvent"), argumentList);
    }

    inline QDBusPendingReply<> Reset()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Reset"), argumentList);
    }

    inline QDBusPendingReply<> SelectCandidate(int index)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(index);
        return asyncCallWithArgumentList(QStringLiteral("SelectCandidate"), argumentList);
    }

    inline QDBusPendingReply<> SetCapability(qulonglong caps)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(caps);
        return asyncCallWithArgumentList(QStringLiteral("SetCapability"), argumentList);
    }

    inline QDBusPendingReply<> SetCursorRect(int x, int y, int w, int h)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(x) << QVariant::fromValue(y) << QVariant::fromValue(w) << QVariant::fromValue(h);
        return asyncCallWithArgumentList(QStringLiteral("SetCursorRect"), argumentList);
    }

    inline QDBusPendingReply<> SetCursorRectV2(int x, int y, int w, int h, double scale)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(x) << QVariant::fromValue(y) << QVariant::fromValue(w) << QVariant::fromValue(h) << QVariant::fromValue(scale);
        return asyncCallWithArgumentList(QStringLiteral("SetCursorRectV2"), argumentList);
    }

    inline QDBusPendingReply<> SetSurroundingText(const QString &text,
                                                  unsigned int cursor,
                                                  unsigned int anchor) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(text) << QVariant::fromValue(cursor) << QVariant::fromValue(anchor);
        return asyncCallWithArgumentList(QStringLiteral("SetSurroundingText"), argumentList);
    }

    inline QDBusPendingReply<> SetSurroundingTextPosition(unsigned int cursor,
                                                          unsigned int anchor) {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(cursor) << QVariant::fromValue(anchor);
        return asyncCallWithArgumentList(QStringLiteral("SetSurroundingTextPosition"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void CommitString(const QString &str);
    void CurrentIM(const QString &name, const QString &uniqueName, const QString &langCode);
    void DeleteSurroundingText(int offset, unsigned int nchar);
    void ForwardKey(unsigned int keyval, unsigned int state, bool type);
    void UpdateClientSideUI(FcitxQtFormattedPreeditList preedit, int cursorpos, FcitxQtFormattedPreeditList auxUp, FcitxQtFormattedPreeditList auxDown, FcitxQtStringKeyValueList candidates, int candidateIndex, int layoutHint, bool hasPrev, bool hasNext);
    void UpdateFormattedPreedit(FcitxQtFormattedPreeditList str, int cursorpos);
};

}

#endif
