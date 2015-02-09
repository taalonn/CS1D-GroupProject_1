/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCommon_Help_Topics;
    QAction *actionContact_Us;
    QWidget *centralWidget;
    QPushButton *viewWinery;
    QPushButton *planATrip;
    QPushButton *quickTrip;
    QLabel *background;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(848, 582);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(848, 582));
        MainWindow->setMaximumSize(QSize(848, 582));
        MainWindow->setAutoFillBackground(false);
        actionCommon_Help_Topics = new QAction(MainWindow);
        actionCommon_Help_Topics->setObjectName(QStringLiteral("actionCommon_Help_Topics"));
        actionContact_Us = new QAction(MainWindow);
        actionContact_Us->setObjectName(QStringLiteral("actionContact_Us"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        viewWinery = new QPushButton(centralWidget);
        viewWinery->setObjectName(QStringLiteral("viewWinery"));
        viewWinery->setGeometry(QRect(10, 520, 211, 21));
        viewWinery->setAutoFillBackground(false);
        planATrip = new QPushButton(centralWidget);
        planATrip->setObjectName(QStringLiteral("planATrip"));
        planATrip->setGeometry(QRect(330, 520, 211, 21));
        quickTrip = new QPushButton(centralWidget);
        quickTrip->setObjectName(QStringLiteral("quickTrip"));
        quickTrip->setGeometry(QRect(630, 520, 211, 21));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 861, 551));
        background->setPixmap(QPixmap(QString::fromUtf8(":/1/vineyard pic 1.jpg")));
        MainWindow->setCentralWidget(centralWidget);
        background->raise();
        viewWinery->raise();
        planATrip->raise();
        quickTrip->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 848, 21));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionCommon_Help_Topics);
        menuHelp->addAction(actionContact_Us);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Welcome", 0));
        actionCommon_Help_Topics->setText(QApplication::translate("MainWindow", "Common Help Topics", 0));
        actionContact_Us->setText(QApplication::translate("MainWindow", "Contact Us", 0));
        viewWinery->setText(QApplication::translate("MainWindow", "View Wineries", 0));
        planATrip->setText(QApplication::translate("MainWindow", "Plan a Trip", 0));
        quickTrip->setText(QApplication::translate("MainWindow", "Quick Trip", 0));
        background->setText(QString());
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
