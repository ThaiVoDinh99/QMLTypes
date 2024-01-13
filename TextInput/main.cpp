#include <QObject>
#include <QGuiApplication>
#include <QQuickView>
#include <QQmlEngine>
#include <QString>
#include <QDebug>
#include <QDir>

int main(int argc, char* argv[]) {
    QGuiApplication app(argc, argv);
    
    QString appPath = QCoreApplication::applicationDirPath();
    QDir projectDir(appPath);
    projectDir.cdUp();
    QString projectPath = projectDir.absolutePath();

    QString qmlFilePath = projectPath + "/main.qml";
    qWarning() << qmlFilePath;
    QQuickView view;

    view.setSource(QUrl::fromLocalFile(qmlFilePath));
    view.show();
    app.exec();
}