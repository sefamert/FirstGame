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

private:
	Ui::MainWindow *ui;
	QStringList list;
	QList<QPushButton *> butList;
	QTimer *timer;
	int secs;
};

#endif // MAINWINDOW_H
