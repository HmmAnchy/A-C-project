/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *messageLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *leftButton;
    QPushButton *rightButton;
    QSpacerItem *verticalSpacer_10;
    QPushButton *startButton;
    QSpacerItem *verticalSpacer_11;
    QPushButton *aboutButton;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *horizontalSpacer_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_1_2;
    QPushButton *pushButton_0_1;
    QPushButton *pushButton_1_0;
    QPushButton *pushButton_2_0;
    QPushButton *pushButton_0_0;
    QPushButton *pushButton_0_2;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_1_1;
    QPushButton *pushButton_2_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(710, 456);
        Widget->setMinimumSize(QSize(710, 456));
        Widget->setMaximumSize(QSize(800, 586));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("QLabel#label_2{\n"
"background:none;\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/images/name.png")));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_2);

        messageLabel = new QLabel(Widget);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy);
        messageLabel->setMinimumSize(QSize(0, 30));
        messageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(messageLabel);

        verticalSpacer = new QSpacerItem(0, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        leftButton = new QPushButton(Widget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setMinimumSize(QSize(0, 26));

        horizontalLayout_3->addWidget(leftButton);

        rightButton = new QPushButton(Widget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setMinimumSize(QSize(0, 26));

        horizontalLayout_3->addWidget(rightButton);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_10);

        startButton = new QPushButton(Widget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setMinimumSize(QSize(0, 60));
        startButton->setSizeIncrement(QSize(0, 0));
        startButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(startButton);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_11);

        aboutButton = new QPushButton(Widget);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setMinimumSize(QSize(0, 40));
        aboutButton->setMaximumSize(QSize(80, 16777215));
        aboutButton->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_5->addWidget(aboutButton);

        verticalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_14);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(320, 320));
        tabWidget->setMaximumSize(QSize(320, 340));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        pushButton_1_2 = new QPushButton(tab);
        pushButton_1_2->setObjectName(QString::fromUtf8("pushButton_1_2"));
        sizePolicy1.setHeightForWidth(pushButton_1_2->sizePolicy().hasHeightForWidth());
        pushButton_1_2->setSizePolicy(sizePolicy1);
        pushButton_1_2->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_1_2, 1, 2, 1, 1);

        pushButton_0_1 = new QPushButton(tab);
        pushButton_0_1->setObjectName(QString::fromUtf8("pushButton_0_1"));
        sizePolicy1.setHeightForWidth(pushButton_0_1->sizePolicy().hasHeightForWidth());
        pushButton_0_1->setSizePolicy(sizePolicy1);
        pushButton_0_1->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_0_1, 0, 1, 1, 1);

        pushButton_1_0 = new QPushButton(tab);
        pushButton_1_0->setObjectName(QString::fromUtf8("pushButton_1_0"));
        sizePolicy1.setHeightForWidth(pushButton_1_0->sizePolicy().hasHeightForWidth());
        pushButton_1_0->setSizePolicy(sizePolicy1);
        pushButton_1_0->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_1_0, 1, 0, 1, 1);

        pushButton_2_0 = new QPushButton(tab);
        pushButton_2_0->setObjectName(QString::fromUtf8("pushButton_2_0"));
        sizePolicy1.setHeightForWidth(pushButton_2_0->sizePolicy().hasHeightForWidth());
        pushButton_2_0->setSizePolicy(sizePolicy1);
        pushButton_2_0->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_2_0, 2, 0, 1, 1);

        pushButton_0_0 = new QPushButton(tab);
        pushButton_0_0->setObjectName(QString::fromUtf8("pushButton_0_0"));
        sizePolicy1.setHeightForWidth(pushButton_0_0->sizePolicy().hasHeightForWidth());
        pushButton_0_0->setSizePolicy(sizePolicy1);
        pushButton_0_0->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_0_0, 0, 0, 1, 1);

        pushButton_0_2 = new QPushButton(tab);
        pushButton_0_2->setObjectName(QString::fromUtf8("pushButton_0_2"));
        sizePolicy1.setHeightForWidth(pushButton_0_2->sizePolicy().hasHeightForWidth());
        pushButton_0_2->setSizePolicy(sizePolicy1);
        pushButton_0_2->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_0_2, 0, 2, 1, 1);

        pushButton_2_1 = new QPushButton(tab);
        pushButton_2_1->setObjectName(QString::fromUtf8("pushButton_2_1"));
        sizePolicy1.setHeightForWidth(pushButton_2_1->sizePolicy().hasHeightForWidth());
        pushButton_2_1->setSizePolicy(sizePolicy1);
        pushButton_2_1->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_2_1, 2, 1, 1, 1);

        pushButton_1_1 = new QPushButton(tab);
        pushButton_1_1->setObjectName(QString::fromUtf8("pushButton_1_1"));
        sizePolicy1.setHeightForWidth(pushButton_1_1->sizePolicy().hasHeightForWidth());
        pushButton_1_1->setSizePolicy(sizePolicy1);
        pushButton_1_1->setMinimumSize(QSize(100, 100));
        pushButton_1_1->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(pushButton_1_1, 1, 1, 1, 1);

        pushButton_2_2 = new QPushButton(tab);
        pushButton_2_2->setObjectName(QString::fromUtf8("pushButton_2_2"));
        sizePolicy1.setHeightForWidth(pushButton_2_2->sizePolicy().hasHeightForWidth());
        pushButton_2_2->setSizePolicy(sizePolicy1);
        pushButton_2_2->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_2_2, 2, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalSpacer_2 = new QSpacerItem(55, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\275\320\276\320\273\320\270\320\272\320\270", nullptr));
        label_2->setText(QString());
        messageLabel->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\261\320\265\320\264\320\260!", nullptr));
        leftButton->setText(QString());
        rightButton->setText(QString());
        startButton->setText(QCoreApplication::translate("Widget", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        aboutButton->setText(QCoreApplication::translate("Widget", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\270\320\263\321\200\321\213", nullptr));
        pushButton_1_2->setText(QString());
        pushButton_0_1->setText(QString());
        pushButton_1_0->setText(QString());
        pushButton_2_0->setText(QString());
        pushButton_0_0->setText(QString());
        pushButton_0_2->setText(QString());
        pushButton_2_1->setText(QString());
        pushButton_1_1->setText(QString());
        pushButton_2_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\320\230\320\263\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\270\320\263\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
