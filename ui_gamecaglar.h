/********************************************************************************
** Form generated from reading UI file 'gamecaglar.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECAGLAR_H
#define UI_GAMECAGLAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameCaglar
{
public:
    QLabel *label;
    QLCDNumber *lcdTimer;
    QPushButton *pushPlay;
    QFrame *frameButtons;
    QPushButton *pushPicture5;
    QPushButton *pushPicture1;
    QPushButton *pushPicture2;
    QPushButton *pushPicture6;
    QPushButton *pushPicture4;
    QPushButton *pushPicture3;
    QPushButton *pushExt;

    void setupUi(QWidget *GameCaglar)
    {
        if (GameCaglar->objectName().isEmpty())
            GameCaglar->setObjectName(QStringLiteral("GameCaglar"));
        GameCaglar->resize(1190, 796);
        label = new QLabel(GameCaglar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 100, 171, 41));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        lcdTimer = new QLCDNumber(GameCaglar);
        lcdTimer->setObjectName(QStringLiteral("lcdTimer"));
        lcdTimer->setGeometry(QRect(110, 150, 121, 61));
        pushPlay = new QPushButton(GameCaglar);
        pushPlay->setObjectName(QStringLiteral("pushPlay"));
        pushPlay->setGeometry(QRect(70, 620, 221, 101));
        pushPlay->setFont(font);
        frameButtons = new QFrame(GameCaglar);
        frameButtons->setObjectName(QStringLiteral("frameButtons"));
        frameButtons->setEnabled(false);
        frameButtons->setGeometry(QRect(260, 70, 641, 311));
        frameButtons->setFrameShape(QFrame::NoFrame);
        frameButtons->setFrameShadow(QFrame::Raised);
        pushPicture5 = new QPushButton(frameButtons);
        pushPicture5->setObjectName(QStringLiteral("pushPicture5"));
        pushPicture5->setGeometry(QRect(230, 170, 181, 121));
        pushPicture1 = new QPushButton(frameButtons);
        pushPicture1->setObjectName(QStringLiteral("pushPicture1"));
        pushPicture1->setGeometry(QRect(20, 20, 181, 121));
        pushPicture1->setStyleSheet(QStringLiteral(""));
        pushPicture2 = new QPushButton(frameButtons);
        pushPicture2->setObjectName(QStringLiteral("pushPicture2"));
        pushPicture2->setGeometry(QRect(230, 20, 181, 121));
        pushPicture6 = new QPushButton(frameButtons);
        pushPicture6->setObjectName(QStringLiteral("pushPicture6"));
        pushPicture6->setGeometry(QRect(440, 170, 181, 121));
        pushPicture4 = new QPushButton(frameButtons);
        pushPicture4->setObjectName(QStringLiteral("pushPicture4"));
        pushPicture4->setGeometry(QRect(20, 170, 181, 121));
        pushPicture3 = new QPushButton(frameButtons);
        pushPicture3->setObjectName(QStringLiteral("pushPicture3"));
        pushPicture3->setGeometry(QRect(440, 20, 181, 121));
        pushExt = new QPushButton(GameCaglar);
        pushExt->setObjectName(QStringLiteral("pushExt"));
        pushExt->setGeometry(QRect(890, 630, 241, 101));
        pushExt->setFont(font);

        retranslateUi(GameCaglar);

        QMetaObject::connectSlotsByName(GameCaglar);
    } // setupUi

    void retranslateUi(QWidget *GameCaglar)
    {
        GameCaglar->setWindowTitle(QApplication::translate("GameCaglar", "Form", 0));
        label->setText(QApplication::translate("GameCaglar", " TIME", 0));
        pushPlay->setText(QApplication::translate("GameCaglar", "PLAY", 0));
        pushPicture5->setText(QString());
        pushPicture1->setText(QString());
        pushPicture2->setText(QString());
        pushPicture6->setText(QString());
        pushPicture4->setText(QString());
        pushPicture3->setText(QString());
        pushExt->setText(QApplication::translate("GameCaglar", "EXIT", 0));
    } // retranslateUi

};

namespace Ui {
    class GameCaglar: public Ui_GameCaglar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECAGLAR_H
