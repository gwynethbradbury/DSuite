#include "dsuitemain.h"
#include "ui_dsuitemain.h"

DSuiteMain::DSuiteMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DSuiteMain)
{
    ui->setupUi(this);

    QImage *tmp = new QImage("../../DSuite/Resources/before.jgp");
    ui->label->setPixmap(QPixmap::fromImage(*tmp));
    ui->label_2->setPixmap(QPixmap::fromImage(*tmp));
}

DSuiteMain::~DSuiteMain()
{
    delete ui;
}
