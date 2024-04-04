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
    ui->leftButton->setStyleSheet(Style::getLeftButtonActiveStyle());
    ui->rightButton->setStyleSheet(Style::getRightButtonStyle());
    ui->tabWidget->setStyleSheet(Style::getTabWidgetStyle());
    ui->tab_5->setStyleSheet(Style::getTabStyle());
    ui->pushButton_0_0->setStyleSheet(Style::getBlankButtonStyle());
    ui->pushButton_0_1->setStyleSheet(Style::getCrossNormalStyle());
    ui->pushButton_0_2->setStyleSheet(Style::getCrossVictoryStyle());
    ui->pushButton_1_0->setStyleSheet(Style::getCrossLostStyle());

    ui->pushButton_2_0->setStyleSheet(Style::getZeroNormalStyle());
    ui->pushButton_2_1->setStyleSheet(Style::getZeroVictoryStyle());
    ui->pushButton_2_2->setStyleSheet(Style::getZeroLostStyle());

    ui->messageLabel->setStyleSheet(Style::getVictoryMessageStyle());
    ui->messageLabel->setText("Ходят крестики");
}

void Widget::changetButtonStyle(int num)
{
    if(num==1) {
        ui->leftButton->setStyleSheet(Style::getLeftButtonActiveStyle());
        ui->rightButton->setStyleSheet(Style::getRightButtonStyle());
    }
    else {
        ui->leftButton->setStyleSheet(Style::getLeftButtonStyle());
        ui->rightButton->setStyleSheet(Style::getRightButtonActiveStyle());
    }
}

void Widget::on_leftButton_clicked()
{
    changetButtonStyle(1);
}

void Widget::on_rightButton_clicked()
{
    changetButtonStyle(2);
}
