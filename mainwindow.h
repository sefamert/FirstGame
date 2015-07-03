#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QList>
#include <QWidget>
#include <QElapsedTimer>

class QTimer;
class QPushButton;

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QList<QPushButton *> butList;
    QList<QPushButton *> testResult;
    QList<bool> results;
    int cnt;

private slots:
    void testFinished(bool timeout);
    void buttonClicked(int index);
    void timeout();
    void on_pushPlay_clicked();
    void on_pushExt_clicked();

private:
    void closeButton(int button = -1);
    void closeButton(QPushButton *b);

    Ui::MainWindow *ui;
    QTimer *timer;
    QElapsedTimer gameTimer;
    QList<QPushButton *> opened;
    QStringList pictureList;
};


#endif // MAINWINDOW_H
