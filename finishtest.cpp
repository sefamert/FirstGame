#include "finishtest.h"
#include "ui_finishtest.h"

finishTest::finishTest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::finishTest)
{
    ui->setupUi(this);
}

finishTest::~finishTest()
{
    delete ui;
}

void finishTest::on_lcdNumber_overflow()
{
    if (timeOut == true)
        ui->labelWinTest->setVisible(false);
    else
        ui->labelTimeOut->setVisible(false);

    if (cntTest == 3)
        ui->lcdNumber->display(100);

    else if( cntTest == 2 )
        ui->lcdNumber->display(70);

    else if( cntTest == 1 )
        ui->lcdNumber->display(40);

    else
        ui->lcdNumber->display(00);
}

void finishTest::on_pushButton_clicked()
{
    close();
}
