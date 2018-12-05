#include "Translation.h"

Translation::Translation(QQmlApplicationEngine *engine)
{
    eng = engine;
}

void Translation::translate(QString str)
{
    QTranslator t;
    if(str.compare("kn")==0){
        if(t.load(":/Kannada.qm")){
            qDebug() << Q_FUNC_INFO << " Loaded" << endl;
        }
        else{
            qDebug() << Q_FUNC_INFO << " Not Loaded" << endl;
        }
        QCoreApplication::instance()->installTranslator(&t);
        eng->retranslate();
    }
    else if(str.compare("en")==0){
        t.load("");
        QCoreApplication::instance()->installTranslator(&t);
        eng->retranslate();
    }
}
