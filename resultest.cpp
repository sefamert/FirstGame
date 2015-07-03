#include "resultest.h"
#include "gamecaglar.h"
#include "ui_resultest.h"

resulTest::resulTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::resulTest)
{
    ui->setupUi(this);
}

resulTest::~resulTest()
{
    delete ui;
}


void resulTest::on_lcdTestResult_overflow()
{
    if (timeOut == true)
        ui->label->setVisible(false);
    else
        ui->label_3->setVisible(false);

    if (cntTest == 3)
        ui->lcdTestResult->display(100);

    else if( cntTest == 2 )
        ui->lcdTestResult->display(70);

    else if( cntTest == 1 )
        ui->lcdTestResult->display(40);

    else
        ui->lcdTestResult->display(00);
}



void resulTest::on_pushButton_clicked()
{
    close();
}
