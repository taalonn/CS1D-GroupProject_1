#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "header.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "adminwindow.h"
#include "contact.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void UpdateCurrent();
    Wineries wineryList;
    Contact MeetUs;

private slots:

    void on_AdminLoginButton_clicked();

    void on_EndEarly_clicked();

    void on_FullTour_clicked();

    void on_NextUp_clicked();

    void on_QuickTour_clicked();

    void on_CustomTour_clicked();

    void on_actionContact_Us_triggered();

private:
    Ui::MainWindow *ui;
    int attemptsLeft = 3;
};

#endif // MAINWINDOW_H
