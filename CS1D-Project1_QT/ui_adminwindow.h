/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QTextEdit *infoedit;
    QPushButton *pushButton;
    QPushButton *Exit;
    QPushButton *AddWinery;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextEdit *distances;
    QPushButton *AddWine;
    QPushButton *updateprice;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QLineEdit *addtonum;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *WineName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *Price;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *Vintage;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(798, 535);
        infoedit = new QTextEdit(AdminWindow);
        infoedit->setObjectName(QStringLiteral("infoedit"));
        infoedit->setGeometry(QRect(20, 10, 351, 471));
        pushButton = new QPushButton(AdminWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 490, 131, 23));
        Exit = new QPushButton(AdminWindow);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(570, 480, 131, 23));
        AddWinery = new QPushButton(AdminWindow);
        AddWinery->setObjectName(QStringLiteral("AddWinery"));
        AddWinery->setGeometry(QRect(570, 270, 131, 23));
        layoutWidget = new QWidget(AdminWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 40, 229, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        name = new QLineEdit(layoutWidget);
        name->setObjectName(QStringLiteral("name"));

        horizontalLayout->addWidget(name);

        layoutWidget1 = new QWidget(AdminWindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(510, 70, 231, 194));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        distances = new QTextEdit(layoutWidget1);
        distances->setObjectName(QStringLiteral("distances"));

        horizontalLayout_3->addWidget(distances);

        AddWine = new QPushButton(AdminWindow);
        AddWine->setObjectName(QStringLiteral("AddWine"));
        AddWine->setGeometry(QRect(640, 430, 121, 23));
        updateprice = new QPushButton(AdminWindow);
        updateprice->setObjectName(QStringLiteral("updateprice"));
        updateprice->setGeometry(QRect(510, 430, 111, 23));
        widget = new QWidget(AdminWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(510, 310, 253, 108));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        addtonum = new QLineEdit(widget);
        addtonum->setObjectName(QStringLiteral("addtonum"));

        horizontalLayout_8->addWidget(addtonum);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        WineName = new QLineEdit(widget);
        WineName->setObjectName(QStringLiteral("WineName"));

        horizontalLayout_6->addWidget(WineName);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        Price = new QLineEdit(widget);
        Price->setObjectName(QStringLiteral("Price"));

        horizontalLayout_7->addWidget(Price);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        Vintage = new QLineEdit(widget);
        Vintage->setObjectName(QStringLiteral("Vintage"));

        horizontalLayout_4->addWidget(Vintage);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(AdminWindow);
        QObject::connect(AddWinery, SIGNAL(clicked()), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", 0));
        pushButton->setText(QApplication::translate("AdminWindow", "Change Info", 0));
        Exit->setText(QApplication::translate("AdminWindow", "Exit", 0));
        AddWinery->setText(QApplication::translate("AdminWindow", "Add Winery", 0));
        label->setText(QApplication::translate("AdminWindow", "New Winery Name", 0));
        label_3->setText(QApplication::translate("AdminWindow", "<html><head/><body><p>distance 1</p><p>distance 2</p><p>...</p><p>distance #</p></body></html>", 0));
        AddWine->setText(QApplication::translate("AdminWindow", "Add Wine", 0));
        updateprice->setText(QApplication::translate("AdminWindow", "Update Price", 0));
        label_6->setText(QApplication::translate("AdminWindow", "Add wine to winery #: ", 0));
        label_7->setText(QApplication::translate("AdminWindow", "Wine name: ", 0));
        label_8->setText(QApplication::translate("AdminWindow", "Price: ", 0));
        label_4->setText(QApplication::translate("AdminWindow", "Vintage: ", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
