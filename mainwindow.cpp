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
	timer2 = new QTimer(this);
	button = new QPushButton(this);
	secs = 60;
	wait = 0;
	cntrl = 0;
	num = 0;
	selectedImage = "";
	ui->lcdTimer->display(secs);
	connect(timer, SIGNAL(timeout()), this, SLOT(decreaseTime()));
	connect(timer2, SIGNAL(timeout()),this, SLOT(mySlot()));

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
	srand(time(NULL));
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

	timer->start(1000);

}

void MainWindow::decreaseTime()
{
	--secs;
	if(secs == 59)
	{
		for (int i = 0; i < arr.size(); i++) {
			if (butList.size() >= i) {
				if (list.size() >= i)
					butList[i]->setStyleSheet("border-image: url(:/images/background.jpg);");
			}
		}
	}
	ui->lcdTimer->display(secs);

	if (secs == 0)
		timer->stop();
}

void MainWindow::on_pushPicture1_clicked()
{
	handleSelection(0);
}

void MainWindow::on_pushPicture2_clicked()
{
	handleSelection(1);
}

void MainWindow::on_pushPicture3_clicked()
{
	handleSelection(2);
}

void MainWindow::on_pushPicture4_clicked()
{
	handleSelection(3);
}

void MainWindow::on_pushPicture5_clicked()
{
	handleSelection(4);
}

void MainWindow::on_pushPicture6_clicked()
{
	handleSelection(5);
}

void MainWindow::mySlot()
{
	if(wait == 0)
	{
		timer2 -> start(1000);
		wait = 1;
		qDebug("burda1");
	}
	else
	{
		//bekledik timeouttan girdik
		wait = 0;
		qDebug("burda2");
		selectedButton->setStyleSheet("border-image: url(:/images/background.jpg);");

		if(cntrl == 1)
		{
			for(int i = 0; i < selectedList.size(); i++)
			{
				if(ui->pushPicture1 == selectedList[i])
				{
					timer2->stop();
					selectedImage = "";
					selectedButton = NULL;
					return;
				}
			}
			ui->pushPicture1->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		else if(cntrl == 2)
		{
			for(int i = 0; i < selectedList.size(); i++)
			{
				if(ui->pushPicture2 == selectedList[i])
				{
					timer2->stop();
					selectedImage = "";
					selectedButton = NULL;
					return;
				}
			}
			ui->pushPicture2->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		else if(cntrl == 3)
		{
			for(int i = 0; i < selectedList.size(); i++)
			{
				if(ui->pushPicture3 == selectedList[i])
				{
					timer2->stop();
					selectedImage = "";
					selectedButton = NULL;
					return;
				}
			}
			ui->pushPicture3->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		else if(cntrl == 4)
		{
			for(int i = 0; i < selectedList.size(); i++)
			{
				if(ui->pushPicture4 == selectedList[i])
				{
					timer2->stop();
					selectedImage = "";
					selectedButton = NULL;
					return;
				}
			}
			ui->pushPicture4->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		else if(cntrl == 5)
		{
			for(int i = 0; i < selectedList.size(); i++)
			{
				if(ui->pushPicture5 == selectedList[i])
				{
					timer2->stop();
					selectedImage = "";
					selectedButton = NULL;
					return;
				}
			}
			ui->pushPicture5->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		else if(cntrl == 6)
		{
			for(int i = 0; i < selectedList.size(); i++)
			{
				if(ui->pushPicture6 == selectedList[i])
				{
					timer2->stop();
					selectedImage = "";
					selectedButton = NULL;
					return;
				}
			}
			ui->pushPicture6->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		selectedImage = "";
		selectedButton = NULL;
		timer2->stop();
	}

}

void MainWindow::handleSelection(int index)
{
	if(num >= 2)
	{
		num = 0;
		return;
	}
	butList[index]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[index] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[index] - 1];
		selectedButton = butList[index];
		num = num + 1;
	}

	else
	{
		num = num + 1;
		if (QString::compare(list[arr[index] - 1],selectedImage))
		{
			cntrl = index + 1;
			mySlot();
		}
		else
		{
			selectedList << butList[index];
			selectedList << selectedButton;
			selectedImage = "";
			selectedButton = NULL;
		}
	}
}


