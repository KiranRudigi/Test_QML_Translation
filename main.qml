import QtQuick 2.9
import QtQuick.Window 2.2
import QtQml 2.2
import QtQuick.Controls 2.3

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    property string txt: "kn"

    Common{id: com}

    Column{
        anchors.fill: parent

        Text{
            id: t1
            text: com.str1
            font.pixelSize: 20
        }
        Text{
            id: t2
            text: com.str2
            font.pixelSize: 20
        }
        Text{
            id: t3
            text: com.str3
            font.pixelSize: 20
        }
    }

    Button{
        height: 20
        text: "Change"
        anchors.centerIn: parent

        onClicked:{
            t1.text = com.str4
            t2.text = com.str5
            t3.text = com.str6
        }
    }

    Timer{
        interval: 2000; running: true; repeat: true

        onTriggered: {
            if(txt === "kn"){
                trans.translate("kn")
                txt = "en"
            }
            else{
                trans.translate("en")
                txt = "kn"
            }
        }
    }
}
