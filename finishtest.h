#ifndef FINISHTEST_H
#define FINISHTEST_H

#include <QWidget>

namespace Ui {
class finishTest;
}

class finishTest : public QWidget
{
    Q_OBJECT

public:
    explicit finishTest(QWidget *parent = 0);
    ~finishTest();
    bool timeOut;
    QList<bool> resultsTest;
    int cntTest;

public slots:
    void on_lcdNumber_overflow();
private slots:


    void on_pushButton_clicked();

private:
    Ui::finishTest *ui;
};

#endif // FINISHTEST_H
