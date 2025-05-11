#include <QApplication>
#include <QLabel>

int main(int argc, char * argv[]){
    QApplication app(argc, argv);
    QLabel * label =new QLabel("Hello World!");
    label->setWindowTitle("My first app");
    label->resize(800, 200);
    label->show();
    return app.exec();
}
