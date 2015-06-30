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
	if(num >= 2)
	{
		num = 0;
		return;
	}
	butList[0]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[0] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[0] - 1];
		selectedButton = ui->pushPicture1;
		num = num + 1;
	}

	else
	{
		num = num + 1;
		if (QString::compare(list[arr[0] - 1],selectedImage)) //Burda compare bana doğruysa 0 yanlışsa 1 gönderiyor
		{
			cntrl = 1;
			mySlot();
		}
		else
		{
			selectedList << ui->pushPicture1;
			selectedList << selectedButton;
			selectedImage = "";
			selectedButton = NULL;
		}
	}
}

void MainWindow::on_pushPicture2_clicked()
{
	if(num >= 2)
	{
		num = 0;
		return;
	}
	butList[1]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[1] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[1] - 1];
		selectedButton = ui->pushPicture2;
		num = num + 1;
	}

	else
	{
		num = num + 1;
		if (QString::compare(list[arr[1] - 1],selectedImage))
		{
			cntrl = 2;
			mySlot();
		}
		else
		{
			selectedList << ui->pushPicture2;
			selectedList << selectedButton;
			selectedImage = "";
			selectedButton = NULL;
		}
	}
}

void MainWindow::on_pushPicture3_clicked()
{
	if(num >= 2)
	{
		num = 0;
		return;
	}
	butList[2]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[2] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[2] - 1];
		selectedButton = ui->pushPicture3;
		num = num + 1;
	}

	else
	{
		num = num + 1;
		if (QString::compare(list[arr[2] - 1],selectedImage))
		{
			cntrl = 3;
			mySlot();
		}
		else
		{
			selectedList << ui->pushPicture3;
			selectedList << selectedButton;
			selectedImage = "";
			selectedButton = NULL;
		}
	}
}

void MainWindow::on_pushPicture4_clicked()
{
	if(num >= 2)
	{
		num = 0;
		return;
	}
	butList[3]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[3] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[3] - 1];
		selectedButton = ui->pushPicture4;
		num = num + 1;
	}

	else
	{
		num = num + 1;
		if (QString::compare(list[arr[3] - 1],selectedImage))
		{
			cntrl = 4;
			mySlot();
		}
		else
		{
			selectedList << ui->pushPicture4;
			selectedList << selectedButton;
			selectedImage = "";
			selectedButton = NULL;
		}
	}
}

void MainWindow::on_pushPicture5_clicked()
{
	if(num >= 2)
	{
		num = 0;
		return;
	}
	butList[4]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[4] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[4] - 1];
		selectedButton = ui->pushPicture5;
		num = num + 1;
	}

	else
	{
		num = num + 1;
		if (QString::compare(list[arr[4] - 1],selectedImage))
		{
			cntrl = 5;
			mySlot();
		}
		else
		{
			selectedList << ui->pushPicture5;
			selectedList << selectedButton;
			selectedImage = "";
			selectedButton = NULL;
		}
	}
}

void MainWindow::on_pushPicture6_clicked()
{
	if(num >= 2)
	{
		num = 0;
		return;
	}
	butList[5]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[5] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[5] - 1];
		selectedButton = ui->pushPicture6;
		num = num + 1;
	}

	else
	{
		num = num + 1;
		if (QString::compare(list[arr[5] - 1],selectedImage))
		{
			cntrl = 6;
			mySlot();
		}
		else
		{
			selectedList << ui->pushPicture6;
			selectedList << selectedButton;
			selectedImage = "";
			selectedButton = NULL;
		}
	}
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


