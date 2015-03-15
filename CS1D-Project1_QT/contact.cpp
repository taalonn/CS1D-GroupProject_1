#include "contact.h"
#include "ui_contact.h"

Contact::Contact(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Contact)
{
    ui->setupUi(this);
}

Contact::~Contact()
{
    delete ui;
}
