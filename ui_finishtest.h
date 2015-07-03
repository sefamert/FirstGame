/********************************************************************************
** Form generated from reading UI file 'finishtest.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINISHTEST_H
#define UI_FINISHTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finishTest
{
public:
    QLabel *labelWinTest;
    QLabel *labelTimeOut;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *finishTest)
    {
        if (finishTest->objectName().isEmpty())
            finishTest->setObjectName(QStringLiteral("finishTest"));
        finishTest->resize(1242, 670);
        labelWinTest = new QLabel(finishTest);
        labelWinTest->setObjectName(QStringLiteral("labelWinTest"));
        labelWinTest->setGeometry(QRect(380, 20, 451, 121));
        QFont font;
        font.setPointSize(25);
        labelWinTest->setFont(font);
        labelWinTest->setAlignment(Qt::AlignCenter);
        labelTimeOut = new QLabel(finishTest);
        labelTimeOut->setObjectName(QStringLiteral("labelTimeOut"));
        labelTimeOut->setGeometry(QRect(420, 110, 361, 121));
        labelTimeOut->setFont(font);
        labelTimeOut->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(finishTest);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(740, 290, 151, 71));
        label = new QLabel(finishTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(480, 300, 241, 61));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        pushButton = new QPushButton(finishTest);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 470, 281, 111));
        pushButton->setFont(font);

        retranslateUi(finishTest);

        QMetaObject::connectSlotsByName(finishTest);
    } // setupUi

    void retranslateUi(QWidget *finishTest)
    {
        finishTest->setWindowTitle(QApplication::translate("finishTest", "Form", 0));
        labelWinTest->setText(QApplication::translate("finishTest", " 	CONGRATULAT\304\260ONS!!!", 0));
        labelTimeOut->setText(QApplication::translate("finishTest", "TIME OUT!!!", 0));
        label->setText(QApplication::translate("finishTest", "You Receive Points:", 0));
        pushButton->setText(QApplication::translate("finishTest", "EXIT", 0));
    } // retranslateUi

};

namespace Ui {
    class finishTest: public Ui_finishTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINISHTEST_H
