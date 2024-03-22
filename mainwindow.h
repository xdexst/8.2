#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onStartButtonClicked();
    void onStopButtonClicked();
    void onPauseButtonClicked();
    void on_Road1_clicked();
    void on_Road2_clicked();

private:
    Ui::MainWindow *ui;
    QLineEdit *lineEditWidth;
    QLineEdit *lineEditLength;
};

#endif // MAINWINDOW_H
