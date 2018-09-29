/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QPushButton *btn_pause;
    QPushButton *btn_log;
    QTextBrowser *textBrowser;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(550, 400);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setDigitCount(18);
        lcdNumber->setProperty("value", QVariant(0));
        lcdNumber->setProperty("intValue", QVariant(0));

        verticalLayout->addWidget(lcdNumber);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_start = new QPushButton(centralWidget);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setEnabled(true);

        horizontalLayout->addWidget(btn_start);

        btn_stop = new QPushButton(centralWidget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));

        horizontalLayout->addWidget(btn_stop);

        btn_pause = new QPushButton(centralWidget);
        btn_pause->setObjectName(QStringLiteral("btn_pause"));

        horizontalLayout->addWidget(btn_pause);

        btn_log = new QPushButton(centralWidget);
        btn_log->setObjectName(QStringLiteral("btn_log"));

        horizontalLayout->addWidget(btn_log);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 7);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\247\222\350\241\250", nullptr));
        btn_start->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        btn_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        btn_pause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        btn_log->setText(QApplication::translate("MainWindow", "\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
