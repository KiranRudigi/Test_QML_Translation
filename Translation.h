#ifndef TRANSLATION_H
#define TRANSLATION_H
#include <QQmlApplicationEngine>
#include <QTranslator>
#include <QObject>
#include <QCoreApplication>
#include <QDebug>

class Translation : public QObject
{
    Q_OBJECT
public:
    Translation(QQmlApplicationEngine *engine);
    Q_INVOKABLE void translate(QString str);

    QQmlApplicationEngine *eng;
};

#endif // TRANSLATION_H
