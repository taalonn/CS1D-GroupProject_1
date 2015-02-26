#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "header.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "adminwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Wineries wineryList;

private slots:

    void on_AdminLoginButton_clicked();

private:
    Ui::MainWindow *ui;
    int attemptsLeft = 3;
};

#endif // MAINWINDOW_H
