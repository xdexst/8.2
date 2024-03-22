#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    // Создание дорог
    road1 = TRoad();
    road2 = TRoad();

    // Создание компонентов
    road1Button = new QPushButton("Road 1", this);
    road2Button = new QPushButton("Road 2", this);
    propertiesLineEdit = new QLineEdit(this);
    currentPropertiesLabel = new QLabel("Current Properties: ", this);

    // Подключение сигналов к слотам
    connect(road1Button, &QPushButton::clicked, this, &MainWindow::onRoad1Clicked);
    connect(road2Button, &QPushButton::clicked, this, &MainWindow::onRoad2Clicked);
    connect(propertiesLineEdit, &QLineEdit::editingFinished, this, &MainWindow::updateProperties);

    // Создание вертикального слоя и добавление компонентов в него
    QVBoxLayout *verticalLayout = new QVBoxLayout(this);
    verticalLayout->addWidget(road1Button);
    verticalLayout->addWidget(road2Button);
    verticalLayout->addWidget(propertiesLineEdit);
    verticalLayout->addWidget(currentPropertiesLabel);

    // Установка вертикального слоя для главного окна
    setLayout(verticalLayout);
}

void MainWindow::onRoad1Clicked()
{
    // Присваивание новых свойств для дороги 1
    road1.setWidth(10);
    road1.setLength(50);
    updateProperties();
}

void MainWindow::onRoad2Clicked()
{
    // Присваивание новых свойств для дороги 2
    road2.setWidth(20);
    road2.setLength(100);
    updateProperties();
}

void MainWindow::updateProperties()
{
    // Получение текста из поля ввода
    QString propertiesText = propertiesLineEdit->text();

    // Вывод текста в метку
    currentPropertiesLabel->setText("Current Properties: " + propertiesText);
}
