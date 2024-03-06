/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_13;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_12;
    QWidget *tab_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(674, 456);
        MainWindow->setMinimumSize(QSize(674, 456));
        MainWindow->setMaximumSize(QSize(946, 683));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_4->addWidget(pushButton_4);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(100, 100));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        gridLayout_4 = new QGridLayout(tab_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_6, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_9, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_13 = new QPushButton(tab_4);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_13, 1, 2, 1, 1);

        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_10, 0, 1, 1, 1);

        pushButton_11 = new QPushButton(tab_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_11, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_8, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_7, 1, 1, 1, 1);

        pushButton_12 = new QPushButton(tab_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setMinimumSize(QSize(100, 100));

        gridLayout_4->addWidget(pushButton_12, 2, 2, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        horizontalLayout_3->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 674, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "      \320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270    /      \320\235\320\276\320\273\320\270\320\272\320\270", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\270\320\263\321\200\321\213", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\270\320\263\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
