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
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
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
    QTextBrowser *Current;
    QToolBox *toolBox;
    QWidget *CustomPage;
    QTextEdit *CustomList;
    QLabel *label_6;
    QPushButton *CustomTour;
    QLabel *label_15;
    QWidget *QuickPage;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *startwinery;
    QLineEdit *numtovisit;
    QPushButton *QuickTour;
    QLabel *label_14;
    QWidget *FullPage;
    QPushButton *FullTour;
    QLabel *label_13;
    QLabel *label_7;
    QTextBrowser *Cart;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *buyname;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *buynum;
    QPushButton *Buy;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *NextUp;
    QSpacerItem *verticalSpacer;
    QPushButton *EndEarly;
    QWidget *AdminTab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
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
    QLabel *label_4;
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
        Current = new QTextBrowser(TripTab);
        Current->setObjectName(QStringLiteral("Current"));
        Current->setGeometry(QRect(500, 60, 261, 161));
        toolBox = new QToolBox(TripTab);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setEnabled(true);
        toolBox->setGeometry(QRect(10, 30, 221, 221));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush2(QColor(170, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        toolBox->setPalette(palette);
        toolBox->setLineWidth(1);
        CustomPage = new QWidget();
        CustomPage->setObjectName(QStringLiteral("CustomPage"));
        CustomPage->setGeometry(QRect(0, 0, 221, 140));
        CustomList = new QTextEdit(CustomPage);
        CustomList->setObjectName(QStringLiteral("CustomList"));
        CustomList->setGeometry(QRect(20, 30, 181, 51));
        label_6 = new QLabel(CustomPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 0, 181, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_6->setPalette(palette1);
        label_6->setAutoFillBackground(true);
        CustomTour = new QPushButton(CustomPage);
        CustomTour->setObjectName(QStringLiteral("CustomTour"));
        CustomTour->setGeometry(QRect(50, 90, 121, 23));
        label_15 = new QLabel(CustomPage);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(-20, -70, 871, 541));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/1/Winery.png")));
        toolBox->addItem(CustomPage, QStringLiteral("Choose Your Tour"));
        label_15->raise();
        CustomList->raise();
        label_6->raise();
        CustomTour->raise();
        QuickPage = new QWidget();
        QuickPage->setObjectName(QStringLiteral("QuickPage"));
        QuickPage->setGeometry(QRect(0, 0, 221, 140));
        label_8 = new QLabel(QuickPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 50, 211, 16));
        label_8->setAutoFillBackground(true);
        label_9 = new QLabel(QuickPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 0, 151, 16));
        label_9->setAutoFillBackground(true);
        layoutWidget = new QWidget(QuickPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 201, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAutoFillBackground(true);

        horizontalLayout_6->addWidget(label_10);

        startwinery = new QLineEdit(layoutWidget);
        startwinery->setObjectName(QStringLiteral("startwinery"));

        horizontalLayout_6->addWidget(startwinery);

        numtovisit = new QLineEdit(QuickPage);
        numtovisit->setObjectName(QStringLiteral("numtovisit"));
        numtovisit->setGeometry(QRect(80, 70, 61, 20));
        QuickTour = new QPushButton(QuickPage);
        QuickTour->setObjectName(QStringLiteral("QuickTour"));
        QuickTour->setGeometry(QRect(50, 100, 121, 23));
        label_14 = new QLabel(QuickPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(-20, -90, 871, 541));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/1/Winery.png")));
        toolBox->addItem(QuickPage, QStringLiteral("Quick Tour"));
        label_14->raise();
        label_8->raise();
        label_9->raise();
        layoutWidget->raise();
        numtovisit->raise();
        QuickTour->raise();
        FullPage = new QWidget();
        FullPage->setObjectName(QStringLiteral("FullPage"));
        FullPage->setGeometry(QRect(0, 0, 221, 140));
        FullTour = new QPushButton(FullPage);
        FullTour->setObjectName(QStringLiteral("FullTour"));
        FullTour->setGeometry(QRect(50, 10, 121, 23));
        label_13 = new QLabel(FullPage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(-20, -120, 871, 541));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/1/Winery.png")));
        toolBox->addItem(FullPage, QStringLiteral("Full Tour"));
        label_13->raise();
        FullTour->raise();
        label_7 = new QLabel(TripTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(560, 30, 131, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_7->setPalette(palette2);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        label_7->setFont(font1);
        label_7->setAutoFillBackground(true);
        Cart = new QTextBrowser(TripTab);
        Cart->setObjectName(QStringLiteral("Cart"));
        Cart->setGeometry(QRect(500, 320, 261, 171));
        label_11 = new QLabel(TripTab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(610, 280, 41, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_11->setPalette(palette3);
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_11->setFont(font2);
        label_11->setAutoFillBackground(true);
        label_12 = new QLabel(TripTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(-10, -10, 871, 541));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/1/Winery.png")));
        widget = new QWidget(TripTab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(260, 360, 212, 55));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush4(QColor(236, 236, 236, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        QBrush brush5(QColor(240, 240, 240, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        label_2->setPalette(palette4);
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setAutoFillBackground(true);

        horizontalLayout_7->addWidget(label_2);

        buyname = new QLineEdit(widget);
        buyname->setObjectName(QStringLiteral("buyname"));

        horizontalLayout_7->addWidget(buyname);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_3->setPalette(palette5);
        label_3->setFont(font3);
        label_3->setAutoFillBackground(true);

        horizontalLayout_8->addWidget(label_3);

        buynum = new QSpinBox(widget);
        buynum->setObjectName(QStringLiteral("buynum"));

        horizontalLayout_8->addWidget(buynum);


        horizontalLayout_5->addLayout(horizontalLayout_8);

        Buy = new QPushButton(widget);
        Buy->setObjectName(QStringLiteral("Buy"));

        horizontalLayout_5->addWidget(Buy);


        verticalLayout_2->addLayout(horizontalLayout_5);

        widget1 = new QWidget(TripTab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(50, 350, 151, 71));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        NextUp = new QPushButton(widget1);
        NextUp->setObjectName(QStringLiteral("NextUp"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        NextUp->setPalette(palette6);

        verticalLayout_3->addWidget(NextUp);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        EndEarly = new QPushButton(widget1);
        EndEarly->setObjectName(QStringLiteral("EndEarly"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        EndEarly->setPalette(palette7);

        verticalLayout_3->addWidget(EndEarly);

        tabWidget->addTab(TripTab, QString());
        label_12->raise();
        layoutWidget->raise();
        Current->raise();
        Buy->raise();
        toolBox->raise();
        label_7->raise();
        NextUp->raise();
        Cart->raise();
        label_11->raise();
        EndEarly->raise();
        layoutWidget->raise();
        AdminTab = new QWidget();
        AdminTab->setObjectName(QStringLiteral("AdminTab"));
        verticalLayoutWidget = new QWidget(AdminTab);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(170, 120, 251, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        admintitle = new QLabel(verticalLayoutWidget);
        admintitle->setObjectName(QStringLiteral("admintitle"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        admintitle->setPalette(palette8);
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        admintitle->setFont(font4);

        horizontalLayout_3->addWidget(admintitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        adminname = new QLabel(verticalLayoutWidget);
        adminname->setObjectName(QStringLiteral("adminname"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        adminname->setPalette(palette9);
        adminname->setFont(font4);
        adminname->setAutoFillBackground(false);

        horizontalLayout->addWidget(adminname);

        username = new QLineEdit(verticalLayoutWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setMaxLength(25);

        horizontalLayout->addWidget(username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        adminpass = new QLabel(verticalLayoutWidget);
        adminpass->setObjectName(QStringLiteral("adminpass"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        adminpass->setPalette(palette10);
        adminpass->setFont(font4);
        adminpass->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(adminpass);

        password = new QLineEdit(verticalLayoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setMaxLength(25);
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

        label_4 = new QLabel(AdminTab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(-20, -10, 881, 561));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/1/jerry.jpg")));
        tabWidget->addTab(AdminTab, QString());
        label_4->raise();
        verticalLayoutWidget->raise();
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

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);
        toolBox->layout()->setSpacing(6);


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
        label_6->setText(QApplication::translate("MainWindow", "What wineries would you like to visit?", 0));
        CustomTour->setText(QApplication::translate("MainWindow", "Start Tour", 0));
        label_15->setText(QString());
        toolBox->setItemText(toolBox->indexOf(CustomPage), QApplication::translate("MainWindow", "Choose Your Tour", 0));
        label_8->setText(QApplication::translate("MainWindow", "How many Wineries would you like to visit?", 0));
        label_9->setText(QApplication::translate("MainWindow", "Where would you like to start?", 0));
        label_10->setText(QApplication::translate("MainWindow", "Winery Number: ", 0));
        QuickTour->setText(QApplication::translate("MainWindow", "Start Tour", 0));
        label_14->setText(QString());
        toolBox->setItemText(toolBox->indexOf(QuickPage), QApplication::translate("MainWindow", "Quick Tour", 0));
        FullTour->setText(QApplication::translate("MainWindow", "Start Tour", 0));
        label_13->setText(QString());
        toolBox->setItemText(toolBox->indexOf(FullPage), QApplication::translate("MainWindow", "Full Tour", 0));
        label_7->setText(QApplication::translate("MainWindow", " Current Winery", 0));
        label_11->setText(QApplication::translate("MainWindow", " Cart", 0));
        label_12->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Wine Name: ", 0));
        label_3->setText(QApplication::translate("MainWindow", "Quantity: ", 0));
        Buy->setText(QApplication::translate("MainWindow", "Buy Wine", 0));
        NextUp->setText(QApplication::translate("MainWindow", "Next Winery", 0));
        EndEarly->setText(QApplication::translate("MainWindow", "End Tour", 0));
        tabWidget->setTabText(tabWidget->indexOf(TripTab), QApplication::translate("MainWindow", "Plan a Trip", 0));
        admintitle->setText(QApplication::translate("MainWindow", "Admin Login", 0));
        adminname->setText(QApplication::translate("MainWindow", "username", 0));
        adminpass->setText(QApplication::translate("MainWindow", "password", 0));
        AdminLoginButton->setText(QApplication::translate("MainWindow", "Login", 0));
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(AdminTab), QApplication::translate("MainWindow", "Admin", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
