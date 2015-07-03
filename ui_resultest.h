/********************************************************************************
** Form generated from reading UI file 'resultest.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTEST_H
#define UI_RESULTEST_H

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

class Ui_resulTest
{
public:
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdTestResult;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QWidget *resulTest)
    {
        if (resulTest->objectName().isEmpty())
            resulTest->setObjectName(QStringLiteral("resulTest"));
        resulTest->resize(911, 578);
        label = new QLabel(resulTest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 80, 411, 61));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(resulTest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 230, 231, 121));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        lcdTestResult = new QLCDNumber(resulTest);
        lcdTestResult->setObjectName(QStringLiteral("lcdTestResult"));
        lcdTestResult->setGeometry(QRect(530, 250, 121, 71));
        pushButton = new QPushButton(resulTest);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 390, 231, 91));
        label_3 = new QLabel(resulTest);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 140, 221, 71));
        label_3->setFont(font);

        retranslateUi(resulTest);

        QMetaObject::connectSlotsByName(resulTest);
    } // setupUi

    void retranslateUi(QWidget *resulTest)
    {
        resulTest->setWindowTitle(QApplication::translate("resulTest", "Form", 0));
        label->setText(QApplication::translate("resulTest", " 	CONGRATULAT\304\260ONS!!!", 0));
        label_2->setText(QApplication::translate("resulTest", "You Receive Points:", 0));
        pushButton->setText(QApplication::translate("resulTest", "Exit", 0));
        label_3->setText(QApplication::translate("resulTest", "TIME OUT!!!", 0));
    } // retranslateUi

};

namespace Ui {
    class resulTest: public Ui_resulTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTEST_H
