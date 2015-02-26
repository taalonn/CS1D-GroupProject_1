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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QTextEdit *infoedit;
    QTextEdit *detailsedit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *Done;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(915, 535);
        infoedit = new QTextEdit(AdminWindow);
        infoedit->setObjectName(QStringLiteral("infoedit"));
        infoedit->setGeometry(QRect(20, 10, 351, 501));
        detailsedit = new QTextEdit(AdminWindow);
        detailsedit->setObjectName(QStringLiteral("detailsedit"));
        detailsedit->setGeometry(QRect(540, 10, 361, 501));
        pushButton = new QPushButton(AdminWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(390, 350, 131, 23));
        pushButton_2 = new QPushButton(AdminWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 410, 131, 23));
        Done = new QPushButton(AdminWindow);
        Done->setObjectName(QStringLiteral("Done"));
        Done->setGeometry(QRect(390, 470, 131, 23));
        textBrowser = new QTextBrowser(AdminWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(380, 70, 151, 261));

        retranslateUi(AdminWindow);
        QObject::connect(Done, SIGNAL(clicked()), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", 0));
        pushButton->setText(QApplication::translate("AdminWindow", "Apply Changes", 0));
        pushButton_2->setText(QApplication::translate("AdminWindow", "Discard and Exit", 0));
        Done->setText(QApplication::translate("AdminWindow", "Done", 0));
        textBrowser->setHtml(QApplication::translate("AdminWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">When making changes adhere to the format of the data already present.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Clicking Apply Changes, will cause all changes you have made to be saved.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Clicking Done will save all chages and then exit the program.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Clicking Discard and exit will discard all chages since the last time Apply Chages was clicked and then exit the program.</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
