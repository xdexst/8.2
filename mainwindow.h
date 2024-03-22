#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>

#include "troad.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onRoad1ButtonClicked();
    void onRoad2ButtonClicked();
    void onUpdateRoad1Properties();
    void onUpdateRoad2Properties();

private:
    QPushButton *road1Button;
    QPushButton *road2Button;
    QLineEdit *road1PropertiesEdit;
    QLineEdit *road2PropertiesEdit;

    TRoad *road1;
    TRoad *road2;
};

#endif // MAINWINDOW_H
