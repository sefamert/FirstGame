#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>

class QTimer;
class QPushButton;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
private slots:
	void on_pushPlay_clicked();
	void decreaseTime();

	void on_pushPicture1_clicked();

	void on_pushPicture2_clicked();

	void on_pushPicture3_clicked();

	void on_pushPicture4_clicked();

	void on_pushPicture5_clicked();

	void on_pushPicture6_clicked();

private:
	Ui::MainWindow *ui;
	QStringList list;
	QString selectedImage;
	QPushButton *selectedButton;
	QList<QPushButton *> butList;
	QTimer *timer;
	QList <int> arr;
	int secs;
	bool ifAnyOneShow;
};

#endif // MAINWINDOW_H
