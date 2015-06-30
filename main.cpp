#include "mainwindow.h"
#include "gamecaglar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GameCaglar w;
	w.show();

	return a.exec();
}
