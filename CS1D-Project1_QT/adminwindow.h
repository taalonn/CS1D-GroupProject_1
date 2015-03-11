#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>

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
    void on_Done_released();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::AdminWindow *ui;
};

#endif // ADMINWINDOW_H
