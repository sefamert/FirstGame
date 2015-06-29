#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	timer = new QTimer(this);
	secs = 60;
	ui->lcdTimer->display(secs);
	connect(timer, SIGNAL(timeout()), this, SLOT(decreaseTime()));
	list << "picture1";
	list << "picture2";
	list << "picture3";
	list << "picture1";
	list << "picture2";
	list << "picture3";

	butList << ui->pushPicture1;
	butList << ui->pushPicture2;
	butList << ui->pushPicture3;
	butList << ui->pushPicture4;
	butList << ui->pushPicture5;
	butList << ui->pushPicture6;
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_pushPlay_clicked()
{
	QList <int> arr;

	int num = qrand() % 6 + 1;
	arr.append(num);
	while(arr.size() != 6)
	{
		num = qrand() % 6 + 1;
		if (!arr.contains(num))
			arr.append(num);
	}

	for (int i = 0; i < arr.size(); i++) {
		if (butList.size() >= i) {
			if (list.size() >= i)
				butList[i]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[i] - 1]));
		}
	}

#if 0

	for(int k=0; k < 2; k++)
	{
		if(arr[k] == 1)
		{
			ui->pushPicture1->setStyleSheet("border-image: url(:/images/picture1.png);");
		}
		else if(arr[k] == 2)
		{
			ui->pushPicture2->setStyleSheet("border-image: url(:/images/picture1.png);");
		}
		else if(arr[k] == 3)
		{
			ui->pushPicture3->setStyleSheet("border-image: url(:/images/picture1.png);");
		}
		else if(arr[k] == 4)
		{
			ui->pushPicture4->setStyleSheet("border-image: url(:/images/picture1.png);");
		}
		else if(arr[k] == 5)
		{
			ui->pushPicture5->setStyleSheet("border-image: url(:/images/picture1.png);");
		}
		else
		{
			ui->pushPicture6->setStyleSheet("border-image: url(:/images/picture1.png);");
		}
	}

	for(int k=2; k < 4; k++)
	{
		if(arr[k] == 1)
		{
			ui->pushPicture1->setStyleSheet("border-image: url(:/images/picture2.png);");
		}
		else if(arr[k] == 2)
		{
			ui->pushPicture2->setStyleSheet("border-image: url(:/images/picture2.png);");
		}
		else if(arr[k] == 3)
		{
			ui->pushPicture3->setStyleSheet("border-image: url(:/images/picture2.png);");
		}
		else if(arr[k] == 4)
		{
			ui->pushPicture4->setStyleSheet("border-image: url(:/images/picture2.png);");
		}
		else if(arr[k] == 5)
		{
			ui->pushPicture5->setStyleSheet("border-image: url(:/images/picture2.png);");
		}
		else
		{
			ui->pushPicture6->setStyleSheet("border-image: url(:/images/picture2.png);");
		}
	}

	for(int k=4; k < 6; k++)
	{
		if(arr[k] == 1)
		{
			ui->pushPicture1->setStyleSheet("border-image: url(:/images/picture3.png);");
		}
		else if(arr[k] == 2)
		{
			ui->pushPicture2->setStyleSheet("border-image: url(:/images/picture3.png);");
		}
		else if(arr[k] == 3)
		{
			ui->pushPicture3->setStyleSheet("border-image: url(:/images/picture3.png);");
		}
		else if(arr[k] == 4)
		{
			ui->pushPicture4->setStyleSheet("border-image: url(:/images/picture3.png);");
		}
		else if(arr[k] == 5)
		{
			ui->pushPicture5->setStyleSheet("border-image: url(:/images/picture3.png);");
		}
		else
		{
			ui->pushPicture6->setStyleSheet("border-image: url(:/images/picture3.png);");
		}
	}

#endif
	timer->start(1000);

}

void MainWindow::decreaseTime()
{
	--secs;
	ui->lcdTimer->display(secs);
	if (secs == 0)
		timer->stop();
}