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
	selectedImage = "";
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
	butList[0]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[0] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[0] - 1];
		selectedButton = ui->pushPicture1;
	}

	else
	{
		if (QString::compare(list[arr[0] - 1],selectedImage)) //Burda compare bana doğruysa 0 yanlışsa 1 gönderiyor
		{
			selectedButton->setStyleSheet("border-image: url(:/images/background.jpg);");
			ui->pushPicture1->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		selectedImage = "";
		selectedButton = NULL;
	}
}

void MainWindow::on_pushPicture2_clicked()
{
	butList[1]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[1] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[1] - 1];
		selectedButton = ui->pushPicture2;
	}

	else
	{
		if (QString::compare(list[arr[1] - 1],selectedImage))
		{
			selectedButton->setStyleSheet("border-image: url(:/images/background.jpg);");
			ui->pushPicture2->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		selectedImage = "";
		selectedButton = NULL;
	}
}

void MainWindow::on_pushPicture3_clicked()
{
	butList[2]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[2] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[2] - 1];
		selectedButton = ui->pushPicture3;
	}

	else
	{

		if (QString::compare(list[arr[2] - 1],selectedImage))
		{
			selectedButton->setStyleSheet("border-image: url(:/images/background.jpg);");
			ui->pushPicture3->setStyleSheet("border-image: url(:/images/background.jpg);");
		}

		selectedImage = "";
		selectedButton = NULL;
	}
}

void MainWindow::on_pushPicture4_clicked()
{
	butList[3]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[3] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[3] - 1];
		selectedButton = ui->pushPicture4;
	}

	else
	{
		if (QString::compare(list[arr[3] - 1],selectedImage))
		{
			selectedButton->setStyleSheet("border-image: url(:/images/background.jpg);");
			ui->pushPicture4->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		selectedImage = "";
		selectedButton = NULL;
	}
}

void MainWindow::on_pushPicture5_clicked()
{
	butList[4]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[4] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[4] - 1];
		selectedButton = ui->pushPicture5;
	}

	else
	{
		if (QString::compare(list[arr[4] - 1],selectedImage))
		{
			selectedButton->setStyleSheet("border-image: url(:/images/background.jpg);");
			ui->pushPicture5->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		selectedImage = "";
		selectedButton = NULL;
	}
}

void MainWindow::on_pushPicture6_clicked()
{
	butList[5]->setStyleSheet(QString("border-image: url(:/images/%1.png);").arg(list[arr[5] - 1]));

	if (selectedImage.isEmpty())
	{
		selectedImage = list[arr[5] - 1];
		selectedButton = ui->pushPicture6;
	}

	else
	{
		if (QString::compare(list[arr[5] - 1],selectedImage))
		{
			selectedButton->setStyleSheet("border-image: url(:/images/background.jpg);");
			ui->pushPicture6->setStyleSheet("border-image: url(:/images/background.jpg);");
		}
		selectedImage = "";
		selectedButton = NULL;
	}
}
