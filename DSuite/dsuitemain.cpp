#include "dsuitemain.h"
#include "ui_dsuitemain.h"

DSuiteMain::DSuiteMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DSuiteMain)
{
    ui->setupUi(this);

    QImage *BEFORE = new QImage("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/before.jpg");
    QImage *AFTER = new QImage("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/after.jpg");
    ui->label_2->setPixmap(QPixmap::fromImage(*BEFORE));
    ui->label->setPixmap(QPixmap::fromImage(*AFTER));

    QTableWidgetItem *image18 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/1-8.jpg"),"");
    QTableWidgetItem *image17 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/1-7.jpg"),"");
    QTableWidgetItem *image16 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/1-6.jpg"),"");
    QTableWidgetItem *image15 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/1-5.jpg"),"");
    QTableWidgetItem *image14 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/1-4.jpg"),"");
    QTableWidgetItem *image13 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/1-3.jpg"),"");
    QTableWidgetItem *image12 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/1-2.jpg"),"");
    QTableWidgetItem *image11 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/1-1.jpg"),"");
    QTableWidgetItem *image28 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/2-8.jpg"),"");
    QTableWidgetItem *image27 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/2-7.jpg"),"");
    QTableWidgetItem *image26 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/2-6.jpg"),"");
    QTableWidgetItem *image25 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/2-5.jpg"),"");
    QTableWidgetItem *image24 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/2-4.jpg"),"");
    QTableWidgetItem *image23 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/2-3.jpg"),"");
    QTableWidgetItem *image22 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/2-2.jpg"),"");
    QTableWidgetItem *image21 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/2-1.jpg"),"");
    QTableWidgetItem *image38 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/3-8.jpg"),"");
    QTableWidgetItem *image37 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/3-7.jpg"),"");
    QTableWidgetItem *image36 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/3-6.jpg"),"");
    QTableWidgetItem *image35 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/3-5.jpg"),"");
    QTableWidgetItem *image34 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/3-4.jpg"),"");
    QTableWidgetItem *image33 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/3-3.jpg"),"");
    QTableWidgetItem *image32 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/3-2.jpg"),"");
    QTableWidgetItem *image31 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/3-1.jpg"),"");
    QTableWidgetItem *image48 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/4-8.jpg"),"");
    QTableWidgetItem *image47 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/4-7.jpg"),"");
    QTableWidgetItem *image46 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/4-6.jpg"),"");
    QTableWidgetItem *image45 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/4-5.jpg"),"");
    QTableWidgetItem *image44 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/4-4.jpg"),"");
    QTableWidgetItem *image43 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/4-3.jpg"),"");
    QTableWidgetItem *image42 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/4-2.jpg"),"");
    QTableWidgetItem *image41 = new QTableWidgetItem(QIcon("/Users/gwynethbradbury/Documents/repositories/DSuite/trunk/DSuite/Resources/teeth/4-1.jpg"),"");

    ui->teethTableWidget_RU->setItem(0, 0, image18);
    ui->teethTableWidget_RU->setItem(0, 1, image17);
    ui->teethTableWidget_RU->setItem(0, 2, image16);
    ui->teethTableWidget_RU->setItem(0, 3, image15);
    ui->teethTableWidget_RU->setItem(0, 4, image14);
    ui->teethTableWidget_RU->setItem(0, 5, image13);
    ui->teethTableWidget_RU->setItem(0, 6, image12);
    ui->teethTableWidget_RU->setItem(0, 7, image11);
    ui->teethTableWidget_LU->setItem(0, 7, image28);
    ui->teethTableWidget_LU->setItem(0, 6, image27);
    ui->teethTableWidget_LU->setItem(0, 5, image26);
    ui->teethTableWidget_LU->setItem(0, 4, image25);
    ui->teethTableWidget_LU->setItem(0, 3, image24);
    ui->teethTableWidget_LU->setItem(0, 2, image23);
    ui->teethTableWidget_LU->setItem(0, 1, image22);
    ui->teethTableWidget_LU->setItem(0, 0, image21);
    ui->teethTableWidget_RL->setItem(1, 7, image41);
    ui->teethTableWidget_RL->setItem(1, 6, image42);
    ui->teethTableWidget_RL->setItem(1, 5, image43);
    ui->teethTableWidget_RL->setItem(1, 4, image44);
    ui->teethTableWidget_RL->setItem(1, 3, image45);
    ui->teethTableWidget_RL->setItem(1, 2, image46);
    ui->teethTableWidget_RL->setItem(1, 1, image47);
    ui->teethTableWidget_RL->setItem(1, 0, image48);
    ui->teethTableWidget_LL->setItem(1, 0, image31);
    ui->teethTableWidget_LL->setItem(1, 1, image32);
    ui->teethTableWidget_LL->setItem(1, 2, image33);
    ui->teethTableWidget_LL->setItem(1, 3, image34);
    ui->teethTableWidget_LL->setItem(1, 4, image35);
    ui->teethTableWidget_LL->setItem(1, 5, image36);
    ui->teethTableWidget_LL->setItem(1, 6, image37);
    ui->teethTableWidget_LL->setItem(1, 7, image38);

    QTableWidgetItem *nameItem1 = new QTableWidgetItem("1-8");
    ui->teethTableWidget_RU->setItem(1, 0, nameItem1);
    QTableWidgetItem *nameItem2 = new QTableWidgetItem("1-7");
    ui->teethTableWidget_RU->setItem(1, 1, nameItem2);
    QTableWidgetItem *nameItem3 = new QTableWidgetItem("1-6");
    ui->teethTableWidget_RU->setItem(1, 2, nameItem3);
    QTableWidgetItem *nameItem4 = new QTableWidgetItem("1-5");
    ui->teethTableWidget_RU->setItem(1, 3, nameItem4);
    QTableWidgetItem *nameItem5 = new QTableWidgetItem("1-4");
    ui->teethTableWidget_RU->setItem(1, 4, nameItem5);
    QTableWidgetItem *nameItem6 = new QTableWidgetItem("1-3");
    ui->teethTableWidget_RU->setItem(1, 5, nameItem6);
    QTableWidgetItem *nameItem7 = new QTableWidgetItem("1-2");
    ui->teethTableWidget_RU->setItem(1, 6, nameItem7);
    QTableWidgetItem *nameItem8 = new QTableWidgetItem("1-1");
    ui->teethTableWidget_RU->setItem(1, 7, nameItem8);

    QTableWidgetItem *nameItem21 = new QTableWidgetItem("2-8");
    ui->teethTableWidget_LU->setItem(1, 7, nameItem21);
    QTableWidgetItem *nameItem22 = new QTableWidgetItem("2-7");
    ui->teethTableWidget_LU->setItem(1, 6, nameItem22);
    QTableWidgetItem *nameItem23 = new QTableWidgetItem("2-6");
    ui->teethTableWidget_LU->setItem(1, 5, nameItem23);
    QTableWidgetItem *nameItem24 = new QTableWidgetItem("2-5");
    ui->teethTableWidget_LU->setItem(1, 4, nameItem24);
    QTableWidgetItem *nameItem25 = new QTableWidgetItem("2-4");
    ui->teethTableWidget_LU->setItem(1, 3, nameItem25);
    QTableWidgetItem *nameItem26 = new QTableWidgetItem("2-3");
    ui->teethTableWidget_LU->setItem(1, 2, nameItem26);
    QTableWidgetItem *nameItem27 = new QTableWidgetItem("2-2");
    ui->teethTableWidget_LU->setItem(1, 1, nameItem27);
    QTableWidgetItem *nameItem28 = new QTableWidgetItem("2-1");
    ui->teethTableWidget_LU->setItem(1, 0, nameItem28);

    QTableWidgetItem *nameItem41 = new QTableWidgetItem("4-8");
    ui->teethTableWidget_RL->setItem(0, 0, nameItem41);
    QTableWidgetItem *nameItem42 = new QTableWidgetItem("4-7");
    ui->teethTableWidget_RL->setItem(0, 1, nameItem42);
    QTableWidgetItem *nameItem43 = new QTableWidgetItem("4-6");
    ui->teethTableWidget_RL->setItem(0, 2, nameItem43);
    QTableWidgetItem *nameItem44 = new QTableWidgetItem("4-5");
    ui->teethTableWidget_RL->setItem(0, 3, nameItem44);
    QTableWidgetItem *nameItem45 = new QTableWidgetItem("4-4");
    ui->teethTableWidget_RL->setItem(0, 4, nameItem45);
    QTableWidgetItem *nameItem46 = new QTableWidgetItem("4-3");
    ui->teethTableWidget_RL->setItem(0, 5, nameItem46);
    QTableWidgetItem *nameItem47 = new QTableWidgetItem("4-2");
    ui->teethTableWidget_RL->setItem(0, 6, nameItem47);
    QTableWidgetItem *nameItem48 = new QTableWidgetItem("4-1");
    ui->teethTableWidget_RL->setItem(0, 7, nameItem48);

    QTableWidgetItem *nameItem31 = new QTableWidgetItem("3-8");
    ui->teethTableWidget_LL->setItem(0, 7, nameItem31);
    QTableWidgetItem *nameItem32 = new QTableWidgetItem("3-7");
    ui->teethTableWidget_LL->setItem(0, 6, nameItem32);
    QTableWidgetItem *nameItem33 = new QTableWidgetItem("3-6");
    ui->teethTableWidget_LL->setItem(0, 5, nameItem33);
    QTableWidgetItem *nameItem34 = new QTableWidgetItem("3-5");
    ui->teethTableWidget_LL->setItem(0, 4, nameItem34);
    QTableWidgetItem *nameItem35 = new QTableWidgetItem("3-4");
    ui->teethTableWidget_LL->setItem(0, 3, nameItem35);
    QTableWidgetItem *nameItem36 = new QTableWidgetItem("3-3");
    ui->teethTableWidget_LL->setItem(0, 2, nameItem36);
    QTableWidgetItem *nameItem37 = new QTableWidgetItem("3-2");
    ui->teethTableWidget_LL->setItem(0, 1, nameItem37);
    QTableWidgetItem *nameItem38 = new QTableWidgetItem("3-1");
    ui->teethTableWidget_LL->setItem(0, 0, nameItem38);

}

DSuiteMain::~DSuiteMain()
{
    delete ui;
}
