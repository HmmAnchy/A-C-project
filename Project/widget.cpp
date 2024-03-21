#include "widget.h"
#include "ui_widget.h"
#include <QTabBar>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide(); // скрывает заголовоки объекта tabWidget(игровое поле)
    ui->tabWidget->setMaximumHeight(320); //перезаписываем высоту объекта tabwidget на 320, значение 340 - для глаза
    ui->tabWidget->setCurrentIndex(0); // по умолчанию запускалось игровое поле
}

Widget::~Widget()
{
    delete ui;
}

