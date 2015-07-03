#ifndef RESULTEST_H
#define RESULTEST_H

#include <QWidget>

namespace Ui {
class resulTest;
}

class resulTest : public QWidget
{
    Q_OBJECT

public:
    explicit resulTest(QWidget *parent = 0);
    ~resulTest();
     bool timeOut;
     QList<bool> resultsTest;
     int cntTest;

public slots:

    void on_lcdTestResult_overflow();

private slots:


    void on_pushButton_clicked();

private:
    Ui::resulTest *ui;
};

#endif // RESULTEST_H
