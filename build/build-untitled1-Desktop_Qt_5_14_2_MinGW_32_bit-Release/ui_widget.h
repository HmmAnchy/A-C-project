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
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pushButton_25;
    QSpacerItem *verticalSpacer_11;
    QPushButton *pushButton_26;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *horizontalSpacer_4;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_20;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_19;
    QPushButton *pushButton_14;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QWidget *tab_6;
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
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/images/text.png")));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_23 = new QPushButton(Widget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));

        horizontalLayout_3->addWidget(pushButton_23);

        pushButton_24 = new QPushButton(Widget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));

        horizontalLayout_3->addWidget(pushButton_24);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_9);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_10);

        pushButton_25 = new QPushButton(Widget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));

        verticalLayout_5->addWidget(pushButton_25);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_11);

        pushButton_26 = new QPushButton(Widget);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));

        verticalLayout_5->addWidget(pushButton_26);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_14);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(320, 320));
        tabWidget->setMaximumSize(QSize(320, 340));
        tabWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: #f00;\n"
"	background-color: rgb(151, 155, 235);\n"
"	border: 1px solid #555;\n"
"}\n"
"QPushButton::hover {\n"
"\n"
"	border-color: rgb(255, 0, 0);\n"
"}"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setSpacing(5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(5, 5, 5, 5);
        pushButton_17 = new QPushButton(tab_5);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_17, 1, 2, 1, 1);

        pushButton_18 = new QPushButton(tab_5);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_18, 0, 1, 1, 1);

        pushButton_20 = new QPushButton(tab_5);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_20, 1, 0, 1, 1);

        pushButton_15 = new QPushButton(tab_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_15, 2, 0, 1, 1);

        pushButton_16 = new QPushButton(tab_5);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_16, 0, 0, 1, 1);

        pushButton_19 = new QPushButton(tab_5);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_19, 0, 2, 1, 1);

        pushButton_14 = new QPushButton(tab_5);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_14, 2, 1, 1, 1);

        pushButton_21 = new QPushButton(tab_5);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);
        pushButton_21->setMinimumSize(QSize(100, 100));
        pushButton_21->setStyleSheet(QString::fromUtf8(""));

        gridLayout_5->addWidget(pushButton_21, 1, 1, 1, 1);

        pushButton_22 = new QPushButton(tab_5);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);
        pushButton_22->setMinimumSize(QSize(100, 100));

        gridLayout_5->addWidget(pushButton_22, 2, 2, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout = new QVBoxLayout(tab_6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label);

        tabWidget->addTab(tab_6, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\275\320\276\320\273\320\270\320\272\320\270", nullptr));
        label_2->setText(QString());
        pushButton_23->setText(QCoreApplication::translate("Widget", "X", nullptr));
        pushButton_24->setText(QCoreApplication::translate("Widget", "O", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\261\320\265\320\264\320\260", nullptr));
        pushButton_25->setText(QCoreApplication::translate("Widget", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        pushButton_26->setText(QCoreApplication::translate("Widget", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\270\320\263\321\200\321\213", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_20->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_21->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        pushButton_22->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Widget", "\320\230\320\263\321\200\320\260", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("Widget", "\320\237\321\200\320\260\320\262\320\270\320\273\320\260 \320\270\320\263\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
