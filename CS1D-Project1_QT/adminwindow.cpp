#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_Done_released()
{
    this->close();
}

void AdminWindow::on_pushButton_clicked()
{

}

void AdminWindow::on_pushButton_2_clicked()
{
    this->close();
}
