#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "header.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = 0);
    ~AdminWindow();

private slots:
    void on_pushButton_clicked();

    void on_Exit_clicked();

    void on_AddWinery_clicked();

    void on_AddWine_clicked();

    void on_updateprice_clicked();

private:
    Ui::AdminWindow *ui;
    Wineries winery;
};

#endif // ADMINWINDOW_H
