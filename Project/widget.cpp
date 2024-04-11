#include "widget.h"
#include "ui_widget.h"
#include <QTabBar>
#include "style.h"
#include <QStyleOption>
#include <QDebug>
#include <QFontDatabase>
#include <QGridLayout>
#include <time.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    configurationTabWidget();
    addFonts();
    setInterfaceStyle();
    configurationGameAreaButons();
    timer = new QTimer(this);
   connect(timer, &QTimer::timeout, this, &Widget::onComputerSlot);
}

Widget::~Widget()
{
    delete ui;
}

// Применяем к Widget правила QSS
void Widget::paintEvent(QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}

// Назначенаем правила QSS для элементов интерфейса
void Widget::setInterfaceStyle()
{
    this->setStyleSheet(Style::getMainWidgetStyle());
    ui->startButton->setStyleSheet(Style::getStartButtonsStyle());
    ui->aboutButton->setStyleSheet(Style::getStartButtonsStyle());
    ui->leftButton->setStyleSheet(Style::getLeftButtonActiveStyle());
    ui->rightButton->setStyleSheet(Style::getRightButtonStyle());
    ui->tabWidget->setStyleSheet(Style::getTabWidgetStyle());
    ui->tab->setStyleSheet(Style::getTabStyle());

    ui->messageLabel->setStyleSheet(Style::getVictoryMessageStyle());
    ui->messageLabel->setText("Ходят крестики");

    setGameAreaButtonsStyle();
    ui->messageLabel->setText("Вы за крестики!");
    ui->messageLabel->setStyleSheet(Style::getNormalMessageStyle());
    ui->aboutTextLabel->setStyleSheet(Style::getAboutTextStyle());
}

// Переключаем выбор крестики-нолики
void Widget::changetButtonStatus(int num)
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

// Если игрок выбрал крестики
void Widget::on_leftButton_clicked()
{
    changetButtonStatus(1);
    player = 'X';
    ui->messageLabel->setText("Вы за крестики!");
    ui->messageLabel->setStyleSheet(Style::getNormalMessageStyle());
}

// Если игрок выбрал нолики
void Widget::on_rightButton_clicked()
{
    changetButtonStatus(2);
    player = '0';
    ui->messageLabel->setText("Вы за нолики!");
    ui->messageLabel->setStyleSheet(Style::getNormalMessageStyle());
}

 // Скрываем заголовок, выставляем высоту и текущую вкладку tabWidge
void Widget::configurationTabWidget()
{
    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setMaximumHeight(320); //перезаписываем высоту объекта tabwidget на 320
    ui->tabWidget->setCurrentIndex(0); // по умолчанию запускалось игровое поле
}

// Добавленяем шрифты из ресурсов в базу шрифтов
void Widget::addFonts()
{
    QFontDatabase::addApplicationFont(":/res/fonts/Roboto Medium.ttf");
    int id=QFontDatabase::addApplicationFont(":/res/fonts/Roboto Medium Italic.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    qDebug() << family;
}

//Изменяем QSS одной кнопки на игровом поле
void Widget::changeButtonStyle(int row, int colum, QString style)
{
    QGridLayout *grid = qobject_cast <QGridLayout*>(ui->tab->layout());
    QPushButton *btn = qobject_cast <QPushButton*>(grid->itemAtPosition(row, colum)->widget());
    btn->setStyleSheet(style);
}


void Widget::configurationGameAreaButons()
{
    QGridLayout *grid = qobject_cast <QGridLayout*>(ui->tab->layout());
    for(int row=0; row<3; row++) {
        for(int column=0; column<3; column++) {
            QPushButton *btn = qobject_cast <QPushButton*>(grid->itemAtPosition(row, column)->widget());
            btn->setProperty("row", row);
            btn->setProperty("column", column);
            connect(btn, &QPushButton::clicked, this, &Widget::onGameAreaButtonClicked);
        }
    }
}

//Нейтральный стиль для всех кнопок  на игровом поле
void Widget::setGameAreaButtonsStyle()
{
    QString style = Style::getBlankButtonStyle();
    for(int row=0; row<3; row++) {
        for(int column=0; column<3; column++) {
            changeButtonStyle(row, column, style);
        }
    }
}

// Начало игры
void Widget::start()
{
    setGameAreaButtonsStyle();
    for (int r=0; r<3; r++) {
        for (int c=0; c<3; c++) {
            gameArea[r][c] = '-';
        }
    }
    progress = 0;
    gameStart = true;
    stop = false;
    if(player!='X')
        computerInGame();
}

void Widget::lockPlayer()
{
    if(player == 'X'){
        playerLocked = false;
    }else{
        playerLocked = true;
    }
}

// Клик по кнопке Играть-Сдаюсь
void Widget::on_startButton_clicked()
{
    ui->tabWidget->setCurrentIndex(0);
    if(gameStart) {
        playerLocked = true;
        ui->startButton->setText("Играть");
        ui->startButton->setStyleSheet(Style::getStartButtonsStyle());
        ui->leftButton->setDisabled(false);
        ui->rightButton->setDisabled(false);
        gameStart = false;
        ui->messageLabel->setText("Проиграл");
        ui->messageLabel->setStyleSheet(Style::getLostMessageStyle());
    }else{
        ui->messageLabel->setText("Поехали!");
        ui->messageLabel->setStyleSheet(Style::getNormalMessageStyle());
        start();
        lockPlayer();
        ui->startButton->setText("Сдаюсь...");
        ui->startButton->setStyleSheet(Style::getStartButtonGameStyle());
        ui->leftButton->setDisabled(true);
        ui->rightButton->setDisabled(true);
    }
}

void Widget::onGameAreaButtonClicked()
{
    if(!playerLocked) {
    QPushButton *btn = qobject_cast<QPushButton*>(sender());
    int row = btn->property("row").toInt();
    int column = btn->property("column").toInt();
    QString style;
    if(player == 'X'){
        style = Style::getCrossNormalStyle();
        gameArea[row][column] = 'X';
    }else{
        style = Style::getZeroNormalStyle();
        gameArea[row][column] = '0';
    }
        changeButtonStyle(row, column, style);
        playerLocked = true;
        progress++;
        chekGameStop();
        endGame();
        computerInGame();

    }
}

void Widget::computerInGame()
{
    if(stop)
        return;
    srand(time(0));
    int index = rand()%4;
    QStringList list = {"Мой ход", "Так так так...", "Хм...Сложно...", "Дайте подумать..."};
    ui->messageLabel->setText(list.at(index));
    timer->start(2000); // 2 сек
}

void Widget::chekGameStop()
{
    QString style;
    winner = '-';
    char symbols[2] {'X','0'};
    for(int i=0;i<2;i++){
        for(int row=0;row<3;row++){
            if((gameArea[row][0]==symbols[i])and(gameArea[row][1]==symbols[i])and(gameArea[row][2]==symbols[i])){
                stop = true;
                winner = symbols[i];
                if(winner==player){
                    if(player == 'X'){
                        style=Style::getCrossVictoryStyle();
                    }else{
                        style=Style::getZeroVictoryStyle();
                    }
               }else{
                    if(player == 'X'){
                        style=Style::getZeroLostStyle();
                    }else{
                        style=Style::getCrossLostStyle();
                    }
                }
                changeButtonStyle(row,0,style);
                changeButtonStyle(row,1,style);
                changeButtonStyle(row,2,style);
                return;
            }
        }
        for(int col=0;col<3;col++){
            if((gameArea[0][col]==symbols[i])and(gameArea[1][col]==symbols[i])and(gameArea[2][col]==symbols[i])){
                stop = true;
                winner = symbols[i];
                if(winner==player){
                    if(player == 'X'){
                        style=Style::getCrossVictoryStyle();
                    }else{
                        style=Style::getZeroVictoryStyle();
                    }
               }else{
                    if(player == 'X'){
                        style=Style::getZeroLostStyle();
                    }else{
                        style=Style::getCrossLostStyle();
                    }
                }
                changeButtonStyle(0,col,style);
                changeButtonStyle(1,col,style);
                changeButtonStyle(2,col,style);
                return;
            }
        }
        if((gameArea[0][0]==symbols[i])and(gameArea[1][1]==symbols[i])and(gameArea[2][2]==symbols[i])){
            stop = true;
            winner = symbols[i];
            if(winner==player){
                if(player == 'X'){
                    style=Style::getCrossVictoryStyle();
                }else{
                    style=Style::getZeroVictoryStyle();
                }
           }else{
                if(player == 'X'){
                    style=Style::getZeroLostStyle();
                }else{
                    style=Style::getCrossLostStyle();
                }
            }
            changeButtonStyle(0,0,style);
            changeButtonStyle(1,1,style);
            changeButtonStyle(2,2,style);
            return;
        }
        if((gameArea[0][2]==symbols[i])and(gameArea[1][1]==symbols[i])and(gameArea[2][0]==symbols[i])){
            stop = true;
            winner = symbols[i];
            if(winner==player){
                if(player == 'X'){
                    style=Style::getCrossVictoryStyle();
                }else{
                    style=Style::getZeroVictoryStyle();
                }
           }else{
                if(player == 'X'){
                    style=Style::getZeroLostStyle();
                }else{
                    style=Style::getCrossLostStyle();
                }
            }
            changeButtonStyle(0,2,style);
            changeButtonStyle(1,1,style);
            changeButtonStyle(2,0,style);
            return;
        }
    }
    if(progress==9){
        stop = true;
    }
}

void Widget::endGame()
{
    //playerLocked = true;
    if(stop){
        if(winner == player){
            ui->messageLabel->setText("Победа!");
            ui->messageLabel->setStyleSheet(Style::getVictoryMessageStyle());
        }else if(winner == '-'){
            ui->messageLabel->setText("Ничья!");
            ui->messageLabel->setStyleSheet(Style::getDrawMessageStyle());
        }else{
            ui->messageLabel->setText("Проиграл");
            ui->messageLabel->setStyleSheet(Style::getLostMessageStyle());
        }
        playerLocked = true;
        ui->startButton->setText("Играть");
        ui->startButton->setStyleSheet(Style::getStartButtonsStyle());
        ui->leftButton->setDisabled(false);
        ui->rightButton->setDisabled(false);
        gameStart = false;
    }
}

void Widget::onComputerSlot()
{
   char comp;
   QString style;
   if(player=='X') {
       comp = '0';
   style = Style::getZeroNormalStyle();
   }else{
       comp = 'X';
       style = Style::getCrossNormalStyle();
   }
    timer->stop();
    while(true){
    int row = rand()%3;
    int column = rand()%3;
           if(gameArea[row][column]=='-'){
               gameArea[row][column] = comp;

               changeButtonStyle(row,column, style);
               ui->messageLabel->setText("Твой ход!");
               progress++;
               chekGameStop();
               endGame();
               playerLocked = false;
               break;
           }
       }
   }


void Widget::on_aboutButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);

}
