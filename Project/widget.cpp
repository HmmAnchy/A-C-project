#include "widget.h"
#include "ui_widget.h"
#include <QTabBar>
#include "style.h"
#include <QStyleOption>
#include <QDebug>
#include <QFontDatabase>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide(); // скрывает заголовоки объекта tabWidget(игровое поле)
    ui->tabWidget->setMaximumHeight(320); //перезаписываем высоту объекта tabwidget на 320, значение 340 - для глаза
    ui->tabWidget->setCurrentIndex(0); // по умолчанию запускалось игровое поле
    setInterfaceStyle();
    int id = QFontDatabase::addApplicationFont(":/res/fonts/Roboto Medium.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    qDebug() << family;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}

void Widget::setInterfaceStyle()
{
    this->setStyleSheet(Style::getMainWidgetStyle());
    ui->startButton->setStyleSheet(Style::getStartButtonsStyle());
    ui->aboutButton->setStyleSheet(Style::getStartButtonsStyle());
}
