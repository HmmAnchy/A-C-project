#include "style.h"


QString Style::getMainWidgetStyle()
{
    return "QWidget{"
           "background-image: url(:/res/images/bg.png)"
            "}";
}

QString Style::getStartButtonsStyle()
{
    return "QPushButton{"
           "color:#000000;"
           "background: none;"
           "border: none;"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.149171 rgba(217, 217, 217, 255), stop:0.883978 rgba(255, 255, 255, 255));"
           "font-family: 'Roboto Medium';"
           "}"

           "QPushButton#aboutButton{"
           "color:#000000;"
           "background: none;"
           "border: none;"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.149171 rgba(217, 217, 217, 255), stop:0.883978 rgba(255, 255, 255, 255));"
           "font-size:11px;"
           "}"
           "QPushButton#aboutButton::hover{"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.230337 rgba(194, 190, 182, 255), stop:0.883978 rgba(255, 255, 255, 255));"
           "}"

           "QPushButton#aboutButton::pressed{"
           "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.230337 rgba(162, 159, 153, 255), stop:0.883978 rgba(255, 255, 255, 255));"
           "}"

        "QPushButton#startButton{"
           "color:#000000;"
           "background: none;"
           "border: none;"
           "border-radius:19px;"
           "background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(45, 132, 194, 255), stop:0.224719 rgba(255, 255, 255, 255));"
           "font-size:18px;"
           "}"
           "QPushButton#startButton::hover{"
           "background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(60, 143, 199, 254), stop:0.224719 rgba(255, 255, 255, 255));"
           "}"

           "QPushButton#startButton::pressed{"
           "background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(53, 127, 176, 255), stop:0.224719 rgba(255, 255, 255, 255));"
           "}";
}

QString Style::getStartButtonGameStyle()
{
    return  "QPushButton#startButton{"
       "color:#000000;"
       "background: none;"
       "border: none;"
       "border-radius:19px;"
       "background-color: qlineargradient(spread:pad, x1:0.233, y1:1, x2:0.244, y2:1, stop:0 rgba(223, 0, 0, 212));"
       "font-size:18px;"
       "}"
       "QPushButton#startButton::hover{"
       "background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0.672316 rgba(239, 72, 72, 255), stop:0.847458 rgba(239, 18, 18, 255));"
       "}"

       "QPushButton#startButton::pressed{"
       "background-color: qlineargradient(spread:pad, x1:0.233, y1:1, x2:0.244, y2:1, stop:0 rgba(223, 0, 0, 212));"
       "}";
}

QString Style::getLeftButtonStyle()
{
    return "QPushButton{"
            "background-color: qlineargradient(spread:pad, x1:0.233, y1:1, x2:0.244, y2:1, stop:0 rgba(119, 130, 156, 198));"
            "background-image: url(:/res/images/xx _.png);"
            "background-repeat:no-repeat;"
            "background-position: center center;"
            "border:1px solid #333;"
            "border-top-left-radius:5px;"
            "border-bottom-left-radius:5px;"
           "}";
}

QString Style::getRightButtonStyle()
{
    return "QPushButton{"
            "background-color: qlineargradient(spread:pad, x1:0.233, y1:1, x2:0.244, y2:1, stop:0 rgba(119, 130, 156, 198));"
            "background-image: url(:/res/images/00_.png);"
            "background-repeat:no-repeat;"
            "background-position: center center;"
            "border:1px solid #333;"
            "border-left:none;"
            "border-top-left-radius:5px;"
            "border-bottom-left-radius:5px;"
           "}";
}

QString Style::getLeftButtonActiveStyle()
{
    return "QPushButton{"
            "background-color: #2d313b;"
            "background-image: url(:/res/images/xx _.png);"
            "background-repeat:no-repeat;"
            "background-position: center center;"
            "border:1px solid #333;"
            "border-top-left-radius:5px;"
            "border-bottom-left-radius:5px;"
           "}";
}

QString Style::getRightButtonActiveStyle()
{
    return "QPushButton{"
            "background-color: #2d313b;"
            "background-image: url(:/res/images/00_.png);"
            "background-repeat:no-repeat;"
            "background-position: center center;"
            "border:1px solid #333;"
            "border-left:none;"
            "border-top-left-radius:5px;"
            "border-bottom-left-radius:5px;"
           "}";
}

QString Style::getTabWidgetStyle()
{
    return "QTabWidget{"
            "border: none;"
            "}"
           "QTabWidget::pane{"
            "border:1px solid #222;"
            "border-radius:3px;"
            "}";
}

QString Style::getTabStyle()
{
    return "QWidget#tab{"
    "background:rgb(34,34,34);"
           "}";
}

QString Style::getBlankButtonStyle()
{
    return "QPushButton{"
            " border:none;"
            "background:#D9D9D9;"
            "}"
            "QPushButton::hover{"
            "background:#c2c2c2;"
           "}";
}

QString Style::getCrossNormalStyle()
{
    return "QPushButton{"
            " border:none;"
            "background:#D9D9D9 url(:/res/images/xx (1).png) no-repeat center center;"
            "}"
            "QPushButton::hover{"
            "background-color:#c2c2c2;"
           "}";
}

QString Style::getCrossVictoryStyle()
{
    return "QPushButton{"
            " border:none;"
            "background-color:#69cf58;"
            "background-image: url(:/res/images/xx (1).png);"
            "background-repeat: no-repeat;"
            "background-position: center center;"
           "}";
}

QString Style::getCrossLostStyle()
{
    return "QPushButton{"
            " border:none;"
            "background-color:#b62ccb;"
            "background-image: url(:/res/images/xx (1).png);"
            "background-repeat: no-repeat;"
            "background-position: center center;"
           "}";
}

QString Style::getZeroNormalStyle()
{
    return "QPushButton{"
            " border:none;"
            "background:#D9D9D9 url(:/res/images/00.png) no-repeat center center;"
            "}"
            "QPushButton::hover{"
            "background-color:#c2c2c2;"
           "}";
}

QString Style::getZeroVictoryStyle()
{
    return "QPushButton{"
            " border:none;"
            "background-color:#69cf58;"
            "background-image: url(:/res/images/00.png);"
            "background-repeat: no-repeat;"
            "background-position: center center;"
           "}";
}

QString Style::getZeroLostStyle()
{
    return "QPushButton{"
            " border:none;"
            "background-color:#b62ccb;"
            "background-image: url(:/res/images/00.png);"
            "background-repeat: no-repeat;"
            "background-position: center center;"
           "}";
}

QString Style::getNormalMessageStyle()
{
    return "QLabel{"
            "font-Family: 'Roboto Medium';"
            "font-size:14px;"
            "background: none;"
            "border:none;"
            "color: #000000"
            "}";
}

QString Style::getVictoryMessageStyle()
{
    return "QLabel{"
            "font-Family: 'Roboto Medium';"
            "font-size:14px;"
            "background:#69cf58;"
            "border:1px solid #69cf58;"
            "color: #000000"
            "}";
}

QString Style::getLostMessageStyle()
{
    return "QLabel{"
            "font-Family: 'Roboto Medium';"
            "font-size:14px;"
            "background:#b62ccb;"
            "border:1px solid #b62ccb;"
            "color: #000000"
            "}";
}
