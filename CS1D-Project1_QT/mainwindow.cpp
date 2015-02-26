#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QFile file(":/textfiles/WineriesInfo.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(0,"Cannot Open", file.errorString());
    }
    else
    {
        QTextStream in(&file);
        ui->InfoBrowser->setText(in.readAll());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AdminLoginButton_clicked()
{
    QString name;
    QString pass;

    name = ui->username->text();
    pass = ui->password->text();

    if(attemptsLeft > 0)
    {
        if(AdminAccess(name,pass))
        {
            AdminWindow adwin;
            adwin.setModal(true);
            adwin.exec();
            this->close();
        }
        else
        {
            attemptsLeft--;
            QMessageBox::warning(this, "Invlaid", "The username or password you have entered is incorrect!");
        }
    }
    else
    {
        QMessageBox::warning(this, "Unauthorized User", "You have entered invalid information too many times!");
    }
}
