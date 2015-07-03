#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "finishtest.h"

#include <QTimer>
#include <QDebug>
#include <QSignalMapper>

#include <unistd.h>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
   // ui->setupUi(this);

    timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(timeout()));
    cnt = 0;
    /* TODO: Do the following with findChildren API */
    butList << ui->pushPicture1;
    butList << ui->pushPicture2;
    butList << ui->pushPicture3;
    butList << ui->pushPicture4;
    butList << ui->pushPicture5;
    butList << ui->pushPicture6;

    /* signal mapper what is this */
    QSignalMapper *mapper = new QSignalMapper(this);
    for (int i = 0; i < butList.size(); i++) {
        mapper->setMapping(butList[i], i);
        connect(butList[i], SIGNAL(clicked()), mapper, SLOT(map()));
    }
    connect(mapper, SIGNAL(mapped(int)), SLOT(buttonClicked(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testFinished(bool timeout)
{
    timer->stop();
    finishTest result;
    result.timeOut = timeout;
    result.resultsTest = results;
    result.cntTest = cnt;
    result.on_lcdNumber_overflow();
    result.show();
    while (result.isVisible())
        QApplication::processEvents();

}

void MainWindow::buttonClicked(int index)
{
    QPushButton *b = butList[index];
    if (opened.contains(b))
        return;

    /* first open selected image */
    b->setStyleSheet(pictureList[index]);
    opened << b;

    if (opened.size() >= 2) {
        QApplication::processEvents();
        sleep(1);
        if (opened[0]->styleSheet() == opened[1]->styleSheet()) {
            opened[0]->setVisible(false);
            opened[1]->setVisible(false);
            results << true;
            cnt = cnt + 1;
            if(cnt == butList.size() / 2){
                testFinished(false);
            }

        } else {
            results << false;
            closeButton(opened[0]);
            closeButton(opened[1]);
        }
        opened.clear();


        return;
    }
}

void MainWindow::timeout()
{
    if( (10 - ((int)gameTimer.elapsed() / 1000) ) > 0 ){
        ui->lcdTimer->display(10 - (int)gameTimer.elapsed() / 1000); //let's hope that no one plays this game more than 1 day!
    }
    else
        ui->lcdTimer->display(0);

    if (gameTimer.elapsed() > 1000 && ui->frameButtons->isEnabled() == false) {
        ui->frameButtons->setEnabled(true);
        closeButton();
    }

    if( (10 - ((int)gameTimer.elapsed() / 1000) ) == 0 ){
        testFinished(true);
    }
}

void MainWindow::on_pushPlay_clicked()
{
    pictureList.clear();
    srand(time(NULL));
    QList<int> arr;
    for (int i = 0; i < butList.size(); i++)
        arr << i;
    int cnt = 0;
    while (arr.size()) {
        int num = arr.takeAt(rand() % arr.size());
        butList[cnt++]->setStyleSheet(QString("border-image: url(:/images/picture%1.png);").arg(num % 3 + 1));
        pictureList << butList[cnt - 1]->styleSheet();
    }

    timer->start(1000);
    gameTimer.start();
}

void MainWindow::closeButton(int button)
{
    if (button >= 0)
        closeButton(butList[button]);
    else {
        for (int i = 0; i < butList.size(); i++)
            closeButton(butList[i]);
    }
}

void MainWindow::closeButton(QPushButton *b)
{
    b->setStyleSheet("border-image: url(:/images/background.jpg);");
}
