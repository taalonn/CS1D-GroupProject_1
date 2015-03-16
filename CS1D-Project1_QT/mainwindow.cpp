#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFile file("WineriesInfo.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(0,"Cannot Open", file.errorString());
    }
    else
    {
        QTextStream in(&file);
        ui->InfoBrowser->setText(in.readAll());
    }
    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UpdateCurrent()
{
    QString updater;
    string s;
    s = wineryList.print(wineryList.tour.front());
    updater.fromStdString(s);
    ui->Current->setText(updater);
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

            Wineries winery2;
            wineryList = winery2;
            QFile file("WineriesInfo.txt");
            if(!file.open(QFile::ReadOnly | QFile::Text))
            {
                QMessageBox::warning(0,"Cannot Open", file.errorString());
            }
            else
            {
                QTextStream in(&file);
                ui->InfoBrowser->setText(in.readAll());
            }
            file.close();
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

void MainWindow::on_EndEarly_clicked()
{
    if(!wineryList.tour.empty())
    {
        QMessageBox::information(this, "Tour Ended", "You ended your tour.");
        ui->Current->clear();
        while(!wineryList.tour.empty())
        {
            wineryList.tour.pop();
        }
        ui->toolBox->setEnabled(true);
    }

}

void MainWindow::on_NextUp_clicked()
{
    wineryList.tour.pop();
    if(!wineryList.tour.empty())
    {
        UpdateCurrent();
    }
    else
    {
        QMessageBox::information(this, "Finished", "You Finished your tour, see you next time!");
        ui->toolBox->setEnabled(true);
        ui->Current->clear();
    }
}

void MainWindow::on_FullTour_clicked()
{
    wineryList.visitAll();
    UpdateCurrent();
    ui->toolBox->setEnabled(false);
}


void MainWindow::on_QuickTour_clicked()
{
    QString in;
    int start;
    int numtovisit;
    bool good = false;
    in = ui->startwinery->text();
    start = in.toInt(&good);

    if(good && start > 0 && start <= wineryList.totWineries())
    {
        in = ui->numtovisit->text();
        numtovisit = in.toInt(&good);
        if(good && numtovisit < wineryList.totWineries())
        {
            wineryList.findRoute(start, numtovisit);
            UpdateCurrent();
            ui->toolBox->setEnabled(false);
        }
    }
    if(!good)
    {
        QMessageBox::warning(this, "Error", "You have either entered a winery not on the list or to many wineries.");
    }
}

void MainWindow::on_CustomTour_clicked()
{
    QString in;
    QString temp;
    int store;
    vector<int> selections;
    bool good = false;

    in = ui->CustomList->toPlainText();

    while(!in.isEmpty())
    {
        while(in[0] != ' ' && in[0] != ',' && in[0] != '\n')
        {
            temp.push_back(in[0]);
            in.remove(0,1);
        }
        in.remove(0,1);
        store = temp.toInt(&good);
        if(good && store > 0 && store <= wineryList.totWineries())
            selections.push_back(store);
        temp.clear();
    }

    if(!selections.empty())
    {
        wineryList.findSpecificRoute(selections);
        UpdateCurrent();
        ui->toolBox->setEnabled(false);
    }
}

void MainWindow::on_actionContact_Us_triggered()
{
    MeetUs.show();
}
