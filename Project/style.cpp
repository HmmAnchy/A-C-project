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
