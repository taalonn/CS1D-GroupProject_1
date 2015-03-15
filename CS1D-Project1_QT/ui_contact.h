/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_H
#define UI_CONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Contact
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *Contact)
    {
        if (Contact->objectName().isEmpty())
            Contact->setObjectName(QStringLiteral("Contact"));
        Contact->resize(500, 348);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Contact->sizePolicy().hasHeightForWidth());
        Contact->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Contact);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Contact);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);


        retranslateUi(Contact);

        QMetaObject::connectSlotsByName(Contact);
    } // setupUi

    void retranslateUi(QDialog *Contact)
    {
        Contact->setWindowTitle(QApplication::translate("Contact", "Dialog", 0));
        label->setText(QApplication::translate("Contact", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; text-decoration: underline;\">Canyon Villa</span></p><p align=\"center\"><span style=\" font-size:14pt;\">You can reach us in one of several ways:</span></p><p align=\"center\"><span style=\" font-size:14pt;\">email: CVWine@gmail.com</span></p><p align=\"center\"><span style=\" font-size:14pt;\">twitter: @CVWine</span></p><p align=\"center\"><span style=\" font-size:14pt;\">and find us on facebook!</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:14pt;\">If you need to find or mail us:</span></p><p align=\"center\"><span style=\" font-size:14pt;\">69 Canyon Villa Rd</span></p><p align=\"center\"><span style=\" font-size:14pt;\">Wine Country, California 92420</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Contact: public Ui_Contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H
