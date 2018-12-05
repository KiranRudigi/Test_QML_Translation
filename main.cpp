#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Translation.h"

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    Translation a(&engine);
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("trans",&a);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
