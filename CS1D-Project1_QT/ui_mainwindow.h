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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCommon_Help_Topics;
    QAction *actionContact_Us;
    QAction *actionAdmin_Login;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *WineryTab;
    QTextBrowser *InfoBrowser;
    QLabel *background;
    QLabel *wineryTitle;
    QWidget *TripTab;
    QWidget *CartTab;
    QWidget *AdminTab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *admintitle;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *adminname;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *adminpass;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *AdminLoginButton;
    QSpacerItem *horizontalSpacer_4;
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
        actionAdmin_Login = new QAction(MainWindow);
        actionAdmin_Login->setObjectName(QStringLiteral("actionAdmin_Login"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 851, 541));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        WineryTab = new QWidget();
        WineryTab->setObjectName(QStringLiteral("WineryTab"));
        InfoBrowser = new QTextBrowser(WineryTab);
        InfoBrowser->setObjectName(QStringLiteral("InfoBrowser"));
        InfoBrowser->setGeometry(QRect(120, 160, 591, 331));
        InfoBrowser->setAutoFillBackground(true);
        InfoBrowser->setAcceptRichText(true);
        background = new QLabel(WineryTab);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, -10, 861, 551));
        background->setPixmap(QPixmap(QString::fromUtf8(":/1/vineyard pic 1.jpg")));
        wineryTitle = new QLabel(WineryTab);
        wineryTitle->setObjectName(QStringLiteral("wineryTitle"));
        wineryTitle->setGeometry(QRect(330, 70, 151, 31));
        QFont font;
        font.setPointSize(18);
        font.setUnderline(true);
        wineryTitle->setFont(font);
        tabWidget->addTab(WineryTab, QString());
        background->raise();
        InfoBrowser->raise();
        wineryTitle->raise();
        TripTab = new QWidget();
        TripTab->setObjectName(QStringLiteral("TripTab"));
        tabWidget->addTab(TripTab, QString());
        CartTab = new QWidget();
        CartTab->setObjectName(QStringLiteral("CartTab"));
        tabWidget->addTab(CartTab, QString());
        AdminTab = new QWidget();
        AdminTab->setObjectName(QStringLiteral("AdminTab"));
        verticalLayoutWidget = new QWidget(AdminTab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(290, 150, 251, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        admintitle = new QLabel(verticalLayoutWidget);
        admintitle->setObjectName(QStringLiteral("admintitle"));

        horizontalLayout_3->addWidget(admintitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        adminname = new QLabel(verticalLayoutWidget);
        adminname->setObjectName(QStringLiteral("adminname"));

        horizontalLayout->addWidget(adminname);

        username = new QLineEdit(verticalLayoutWidget);
        username->setObjectName(QStringLiteral("username"));

        horizontalLayout->addWidget(username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        adminpass = new QLabel(verticalLayoutWidget);
        adminpass->setObjectName(QStringLiteral("adminpass"));

        horizontalLayout_2->addWidget(adminpass);

        password = new QLineEdit(verticalLayoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        AdminLoginButton = new QPushButton(verticalLayoutWidget);
        AdminLoginButton->setObjectName(QStringLiteral("AdminLoginButton"));

        horizontalLayout_4->addWidget(AdminLoginButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget->addTab(AdminTab, QString());
        MainWindow->setCentralWidget(centralWidget);
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
        menuHelp->addAction(actionAdmin_Login);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Welcome", 0));
        actionCommon_Help_Topics->setText(QApplication::translate("MainWindow", "Common Help Topics", 0));
        actionContact_Us->setText(QApplication::translate("MainWindow", "Contact Us", 0));
        actionAdmin_Login->setText(QApplication::translate("MainWindow", "Admin Login", 0));
        background->setText(QString());
        wineryTitle->setText(QApplication::translate("MainWindow", "Our Wineries", 0));
        tabWidget->setTabText(tabWidget->indexOf(WineryTab), QApplication::translate("MainWindow", "Wineries", 0));
        tabWidget->setTabText(tabWidget->indexOf(TripTab), QApplication::translate("MainWindow", "Plan a Trip", 0));
        tabWidget->setTabText(tabWidget->indexOf(CartTab), QApplication::translate("MainWindow", "Cart", 0));
        admintitle->setText(QApplication::translate("MainWindow", "Admin Login", 0));
        adminname->setText(QApplication::translate("MainWindow", "username", 0));
        adminpass->setText(QApplication::translate("MainWindow", "password", 0));
        AdminLoginButton->setText(QApplication::translate("MainWindow", "Login", 0));
        tabWidget->setTabText(tabWidget->indexOf(AdminTab), QApplication::translate("MainWindow", "Admin", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
