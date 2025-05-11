#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    // macro telling QT to use signals and slots ??
    // whatever widgets used to convert to cpp code
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    int counter = 0;
private slots:

    void on_clickMe_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
