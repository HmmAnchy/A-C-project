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

QString Style::getLeftButtonStyle()
{
    return "QPushButton{"
            "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.074, y2:0.119318, stop:0.0738636 rgba(63, 63, 63, 255), stop:0.136364 rgba(255, 255, 255, 255));"
            "background-image: url(:/res/images/c_s.png);"
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
            "background-color: qlineargradient(spread:pad, x1:0.233, y1:1, x2:0.244, y2:1, stop:0 rgba(48, 239, 239, 218));"
            "background-image: url(:/res/images/z_s.png);"
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
            "background-color: #30efef;"
            "background-image: url(:/res/images/c_s.png);"
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
            "background-image: url(:/res/images/z_s.png);"
            "background-repeat:no-repeat;"
            "background-position: center center;"
            "border:1px solid #333;"
            "border-left:none;"
            "border-top-left-radius:5px;"
            "border-bottom-left-radius:5px;"
           "}";
}
