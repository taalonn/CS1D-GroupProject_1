#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
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
        ui->infoedit->setText(in.readAll());
    }
    file.close();
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_Exit_clicked()
{
    winery.updateList();
    this->close();
}

//this is for the wineryinfo update
void AdminWindow::on_pushButton_clicked()
{
    QFile file("WineriesInfo.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(0,"Cannot Write", file.errorString());
    }
    else
    {
        QTextStream out(&file);
        out << ui->infoedit->toPlainText();
        QMessageBox::information(0,"Updated", "The info has been updated.");

    }
    file.flush();
    file.close();
}

void AdminWindow::on_AddWinery_clicked()
{
    QString nameQ;
    QString dist;
    QString d;
    wineryInfo temp;
    int index = 0;
    bool good = false;

    temp.ownNumber = winery.totWineries() + 1;
    temp.numWinesOffered = 0;
    nameQ = ui->name->text();
    temp.name = nameQ.toStdString();
    dist = ui->distances->toPlainText();

    //parse the text edit into distances
    for(int ind = 0;ind < temp.ownNumber; ind++)
    {
        while(index < dist.size() && dist[index] != '\n')
        {
            d.push_back(dist[index]);
            index++;
        }
        temp.otherWineryDistInfo[ind+1] = d.toFloat(&good);
        d.clear();
        index++;

        if(index >= dist.size() && ind < temp.ownNumber -1)
            good = false;
    }

    //adds the winery if good or outputs an error
    if(good)
    {
        winery.addWinery(temp);
        QMessageBox::information(0,"Added", "The winery has been added.");
    }
    else
        QMessageBox::warning(0,"Error", "There was a problem with the data you entered."
                                        "\nThe data was not saved.");

}

//adds a wine to an existing winery
void AdminWindow::on_AddWine_clicked()
{
    QString nameQ;
    QString vintQ;
    QString priceQ;
    QString numQ;
    string name;
    int num;
    int vint;
    float price;
    bool good = false;

    //gets data from line edits
    nameQ = ui->WineName->text();
    vintQ = ui->Vintage->text();
    priceQ = ui->Price->text();
    numQ = ui->addtonum->text();

    num = numQ.toInt(&good);
    name = nameQ.toStdString();

    //checks that an int was given that is an existing winery
    if(good && num > 0 && num <= winery.totWineries())
    {
        price = priceQ.toFloat(&good);   //coverts and checks for valid int
        if(good)
        {
            vint = vintQ.toInt(&good);   //converts and checks for valid float
            if(good)
            {
                winery.addWine(num, name, vint, price); //add the wine
                QMessageBox::information(0,"Added", "The wine has been added.");
            }
        }
    }
    //if any of the above checks fail output
    if(!good)
        QMessageBox::warning(0,"Error", "There was a problem with the data you entered."
                                        "\nThe data was not saved.");
}

//update the price of a bottle of wine
void AdminWindow::on_updateprice_clicked()
{
    QString nameQ;
    QString priceQ;
    QString numQ;
    string name;
    int num;
    float price;
    bool good = false;

    //gets data from line edits
    nameQ = ui->WineName->text();
    priceQ = ui->Price->text();
    numQ = ui->addtonum->text();

    num = numQ.toInt(&good);
    name = nameQ.toStdString();

    //checks that an int was given that is an existing winery
    if(good && num > 0 && num <= winery.totWineries())
    {
        price = priceQ.toFloat(&good);   //coverts and checks for valid int
        if(good)
        {
            winery.changeWinePrice(num, name, price); //updates price
            QMessageBox::information(0,"Updated", "The price has been updated.");

        }
    }
    //if any of the above checks fail output
    if(!good)
        QMessageBox::warning(0,"Error", "There was a problem with the data you entered."
                                        "\nThe data was not saved.");
}
