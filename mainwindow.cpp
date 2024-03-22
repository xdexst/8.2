#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Подключаем сигнал clicked() кнопки pushButton к слоту onStartButtonClicked()
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onStartButtonClicked);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::onStopButtonClicked);
    connect(ui->pauseButton, &QPushButton::clicked, this, &MainWindow::onPauseButtonClicked);
    connect(ui->road1Button, &QPushButton::clicked, this, &MainWindow::onRoad1Clicked);
    connect(ui->road2Button, &QPushButton::clicked, this, &MainWindow::onRoad2Clicked);

    lineEditWidth = new QLineEdit(this);
        lineEditWidth->setPlaceholderText("Enter width...");
        ui->verticalLayout->addWidget(lineEditWidth);

        lineEditLength = new QLineEdit(this);
        lineEditLength->setPlaceholderText("Enter length...");
        ui->verticalLayout->addWidget(lineEditLength);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onStartButtonClicked()
{
    qDebug() << "Start button clicked";
    QMessageBox::information(this, "information", "Старт программы!");
}
void MainWindow::onStopButtonClicked()
{
    QMessageBox::information(this, "information", "Программа прекращена!");
}
void MainWindow::onPauseButtonClicked()
{
    QMessageBox::information(this, "Внимание", "Программа приостановлена");
}

void MainWindow::onRoad1Clicked() {
    road.setWidth(10);
    road.setLength(100);
    QMessageBox::information(this, "Road1", QString("Road 1 properties:\nWidth: %1\nLength: %2").arg(road.width()).arg(road.length()));
}

void MainWindow::onRoad2Clicked() {

}
