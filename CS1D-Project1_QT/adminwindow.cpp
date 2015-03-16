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

    QString test;
    test.fromStdString(winery.nameOf(0));
    qDebug() << test;
    ui->name->setText(test);
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
    bool good = false;

    temp.ownNumber = winery.totWineries() + 1;
    temp.numWinesOffered = 0;
    nameQ = ui->name->text();
    temp.name = nameQ.toStdString();
    dist = ui->distances->toPlainText();

    //parse the text edit into distances
    for(int ind = 0;ind < temp.ownNumber; ind++)
    {
        while(!dist.isEmpty() && dist[0] != '\n')
        {
            d.push_back(dist[0]);
            dist.remove(0,1);
        }
        temp.otherWineryDistInfo[ind+1] = d.toFloat(&good);
        dist.remove(0,1);

        if(dist.isEmpty() && ind < temp.ownNumber -1)
            good = false;
    }

    //adds the winery if good or outputs an error
    if(good)
        winery.addWinery(temp);
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
                winery.addWine(num, name, vint, price); //add the wine
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
        }
    }
    //if any of the above checks fail output
    if(!good)
        QMessageBox::warning(0,"Error", "There was a problem with the data you entered."
                                        "\nThe data was not saved.");
}
