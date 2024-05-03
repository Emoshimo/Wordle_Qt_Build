/********************************************************************************
** Form generated from reading UI file 'wordle.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDLE_H
#define UI_WORDLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wordle
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *row1;
    QLineEdit *lineEdit_1_1;
    QLineEdit *lineEdit_1_2;
    QLineEdit *lineEdit_1_3;
    QLineEdit *lineEdit_1_4;
    QLineEdit *lineEdit_1_5;
    QHBoxLayout *row2;
    QLineEdit *lineEdit_2_1;
    QLineEdit *lineEdit_2_2;
    QLineEdit *lineEdit_2_3;
    QLineEdit *lineEdit_2_4;
    QLineEdit *lineEdit_2_5;
    QHBoxLayout *row3;
    QLineEdit *lineEdit_3_1;
    QLineEdit *lineEdit_3_2;
    QLineEdit *lineEdit_3_3;
    QLineEdit *lineEdit_3_4;
    QLineEdit *lineEdit_3_5;
    QHBoxLayout *row4;
    QLineEdit *lineEdit_4_1;
    QLineEdit *lineEdit_4_2;
    QLineEdit *lineEdit_4_3;
    QLineEdit *lineEdit_4_4;
    QLineEdit *lineEdit_4_5;
    QHBoxLayout *row5;
    QLineEdit *lineEdit_5_1;
    QLineEdit *lineEdit_5_2;
    QLineEdit *lineEdit_5_3;
    QLineEdit *lineEdit_5_4;
    QLineEdit *lineEdit_5_5;
    QHBoxLayout *row6;
    QLineEdit *lineEdit_6_1;
    QLineEdit *lineEdit_6_2;
    QLineEdit *lineEdit_6_3;
    QLineEdit *lineEdit_6_4;
    QLineEdit *lineEdit_6_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *widget1;
    QHBoxLayout *buttonContainer_1;
    QPushButton *Button_Q;
    QPushButton *Button_W;
    QPushButton *Button_E;
    QPushButton *Button_R;
    QPushButton *Button_T;
    QPushButton *Button_Y;
    QPushButton *Button_U;
    QPushButton *Button_I;
    QPushButton *Button_O;
    QPushButton *Button_P;
    QWidget *widget2;
    QHBoxLayout *buttonContainer_2;
    QPushButton *Button_A;
    QPushButton *Button_S;
    QPushButton *Button_D;
    QPushButton *Button_F;
    QPushButton *Button_G;
    QPushButton *Button_H;
    QPushButton *Button_J;
    QPushButton *Button_K;
    QPushButton *Button_L;
    QWidget *widget3;
    QHBoxLayout *buttonContainer_3;
    QPushButton *Button_Enter;
    QPushButton *Button_Z;
    QPushButton *Button_X;
    QPushButton *Button_C;
    QPushButton *Button_V;
    QPushButton *Button_B;
    QPushButton *Button_N;
    QPushButton *Button_M;
    QPushButton *Button_DEL;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Wordle)
    {
        if (Wordle->objectName().isEmpty())
            Wordle->setObjectName(QString::fromUtf8("Wordle"));
        Wordle->resize(842, 770);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Wordle->sizePolicy().hasHeightForWidth());
        Wordle->setSizePolicy(sizePolicy);
        Wordle->setCursor(QCursor(Qt::ArrowCursor));
        centralwidget = new QWidget(Wordle);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 60, 468, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        row1 = new QHBoxLayout();
        row1->setObjectName(QString::fromUtf8("row1"));
        row1->setSizeConstraint(QLayout::SetNoConstraint);
        lineEdit_1_1 = new QLineEdit(widget);
        lineEdit_1_1->setObjectName(QString::fromUtf8("lineEdit_1_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_1_1->sizePolicy().hasHeightForWidth());
        lineEdit_1_1->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(18);
        lineEdit_1_1->setFont(font);
        lineEdit_1_1->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_1_1->setInputMethodHints(Qt::ImhNone);
        lineEdit_1_1->setMaxLength(1);
        lineEdit_1_1->setAlignment(Qt::AlignCenter);

        row1->addWidget(lineEdit_1_1);

        lineEdit_1_2 = new QLineEdit(widget);
        lineEdit_1_2->setObjectName(QString::fromUtf8("lineEdit_1_2"));
        lineEdit_1_2->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_1_2->sizePolicy().hasHeightForWidth());
        lineEdit_1_2->setSizePolicy(sizePolicy1);
        lineEdit_1_2->setFont(font);
        lineEdit_1_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_1_2->setMaxLength(1);
        lineEdit_1_2->setAlignment(Qt::AlignCenter);

        row1->addWidget(lineEdit_1_2);

        lineEdit_1_3 = new QLineEdit(widget);
        lineEdit_1_3->setObjectName(QString::fromUtf8("lineEdit_1_3"));
        lineEdit_1_3->setEnabled(true);
        sizePolicy1.setHeightForWidth(lineEdit_1_3->sizePolicy().hasHeightForWidth());
        lineEdit_1_3->setSizePolicy(sizePolicy1);
        lineEdit_1_3->setFont(font);
        lineEdit_1_3->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_1_3->setMaxLength(1);
        lineEdit_1_3->setAlignment(Qt::AlignCenter);

        row1->addWidget(lineEdit_1_3);

        lineEdit_1_4 = new QLineEdit(widget);
        lineEdit_1_4->setObjectName(QString::fromUtf8("lineEdit_1_4"));
        sizePolicy1.setHeightForWidth(lineEdit_1_4->sizePolicy().hasHeightForWidth());
        lineEdit_1_4->setSizePolicy(sizePolicy1);
        lineEdit_1_4->setFont(font);
        lineEdit_1_4->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_1_4->setMaxLength(1);
        lineEdit_1_4->setAlignment(Qt::AlignCenter);

        row1->addWidget(lineEdit_1_4);

        lineEdit_1_5 = new QLineEdit(widget);
        lineEdit_1_5->setObjectName(QString::fromUtf8("lineEdit_1_5"));
        sizePolicy1.setHeightForWidth(lineEdit_1_5->sizePolicy().hasHeightForWidth());
        lineEdit_1_5->setSizePolicy(sizePolicy1);
        lineEdit_1_5->setFont(font);
        lineEdit_1_5->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_1_5->setMaxLength(1);
        lineEdit_1_5->setAlignment(Qt::AlignCenter);

        row1->addWidget(lineEdit_1_5);


        verticalLayout->addLayout(row1);

        row2 = new QHBoxLayout();
        row2->setObjectName(QString::fromUtf8("row2"));
        row2->setSizeConstraint(QLayout::SetNoConstraint);
        lineEdit_2_1 = new QLineEdit(widget);
        lineEdit_2_1->setObjectName(QString::fromUtf8("lineEdit_2_1"));
        sizePolicy1.setHeightForWidth(lineEdit_2_1->sizePolicy().hasHeightForWidth());
        lineEdit_2_1->setSizePolicy(sizePolicy1);
        lineEdit_2_1->setFont(font);
        lineEdit_2_1->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2_1->setMaxLength(1);
        lineEdit_2_1->setAlignment(Qt::AlignCenter);

        row2->addWidget(lineEdit_2_1);

        lineEdit_2_2 = new QLineEdit(widget);
        lineEdit_2_2->setObjectName(QString::fromUtf8("lineEdit_2_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2_2->sizePolicy().hasHeightForWidth());
        lineEdit_2_2->setSizePolicy(sizePolicy1);
        lineEdit_2_2->setFont(font);
        lineEdit_2_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2_2->setMaxLength(1);
        lineEdit_2_2->setAlignment(Qt::AlignCenter);

        row2->addWidget(lineEdit_2_2);

        lineEdit_2_3 = new QLineEdit(widget);
        lineEdit_2_3->setObjectName(QString::fromUtf8("lineEdit_2_3"));
        sizePolicy1.setHeightForWidth(lineEdit_2_3->sizePolicy().hasHeightForWidth());
        lineEdit_2_3->setSizePolicy(sizePolicy1);
        lineEdit_2_3->setFont(font);
        lineEdit_2_3->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2_3->setMaxLength(1);
        lineEdit_2_3->setAlignment(Qt::AlignCenter);

        row2->addWidget(lineEdit_2_3);

        lineEdit_2_4 = new QLineEdit(widget);
        lineEdit_2_4->setObjectName(QString::fromUtf8("lineEdit_2_4"));
        sizePolicy1.setHeightForWidth(lineEdit_2_4->sizePolicy().hasHeightForWidth());
        lineEdit_2_4->setSizePolicy(sizePolicy1);
        lineEdit_2_4->setFont(font);
        lineEdit_2_4->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2_4->setMaxLength(1);
        lineEdit_2_4->setAlignment(Qt::AlignCenter);

        row2->addWidget(lineEdit_2_4);

        lineEdit_2_5 = new QLineEdit(widget);
        lineEdit_2_5->setObjectName(QString::fromUtf8("lineEdit_2_5"));
        sizePolicy1.setHeightForWidth(lineEdit_2_5->sizePolicy().hasHeightForWidth());
        lineEdit_2_5->setSizePolicy(sizePolicy1);
        lineEdit_2_5->setFont(font);
        lineEdit_2_5->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2_5->setMaxLength(1);
        lineEdit_2_5->setAlignment(Qt::AlignCenter);

        row2->addWidget(lineEdit_2_5);


        verticalLayout->addLayout(row2);

        row3 = new QHBoxLayout();
        row3->setObjectName(QString::fromUtf8("row3"));
        row3->setSizeConstraint(QLayout::SetNoConstraint);
        lineEdit_3_1 = new QLineEdit(widget);
        lineEdit_3_1->setObjectName(QString::fromUtf8("lineEdit_3_1"));
        sizePolicy1.setHeightForWidth(lineEdit_3_1->sizePolicy().hasHeightForWidth());
        lineEdit_3_1->setSizePolicy(sizePolicy1);
        lineEdit_3_1->setFont(font);
        lineEdit_3_1->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_3_1->setMaxLength(1);
        lineEdit_3_1->setAlignment(Qt::AlignCenter);

        row3->addWidget(lineEdit_3_1);

        lineEdit_3_2 = new QLineEdit(widget);
        lineEdit_3_2->setObjectName(QString::fromUtf8("lineEdit_3_2"));
        sizePolicy1.setHeightForWidth(lineEdit_3_2->sizePolicy().hasHeightForWidth());
        lineEdit_3_2->setSizePolicy(sizePolicy1);
        lineEdit_3_2->setFont(font);
        lineEdit_3_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_3_2->setMaxLength(1);
        lineEdit_3_2->setAlignment(Qt::AlignCenter);

        row3->addWidget(lineEdit_3_2);

        lineEdit_3_3 = new QLineEdit(widget);
        lineEdit_3_3->setObjectName(QString::fromUtf8("lineEdit_3_3"));
        sizePolicy1.setHeightForWidth(lineEdit_3_3->sizePolicy().hasHeightForWidth());
        lineEdit_3_3->setSizePolicy(sizePolicy1);
        lineEdit_3_3->setFont(font);
        lineEdit_3_3->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_3_3->setMaxLength(1);
        lineEdit_3_3->setAlignment(Qt::AlignCenter);

        row3->addWidget(lineEdit_3_3);

        lineEdit_3_4 = new QLineEdit(widget);
        lineEdit_3_4->setObjectName(QString::fromUtf8("lineEdit_3_4"));
        sizePolicy1.setHeightForWidth(lineEdit_3_4->sizePolicy().hasHeightForWidth());
        lineEdit_3_4->setSizePolicy(sizePolicy1);
        lineEdit_3_4->setFont(font);
        lineEdit_3_4->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_3_4->setMaxLength(1);
        lineEdit_3_4->setAlignment(Qt::AlignCenter);

        row3->addWidget(lineEdit_3_4);

        lineEdit_3_5 = new QLineEdit(widget);
        lineEdit_3_5->setObjectName(QString::fromUtf8("lineEdit_3_5"));
        sizePolicy1.setHeightForWidth(lineEdit_3_5->sizePolicy().hasHeightForWidth());
        lineEdit_3_5->setSizePolicy(sizePolicy1);
        lineEdit_3_5->setFont(font);
        lineEdit_3_5->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_3_5->setMaxLength(1);
        lineEdit_3_5->setAlignment(Qt::AlignCenter);

        row3->addWidget(lineEdit_3_5);


        verticalLayout->addLayout(row3);

        row4 = new QHBoxLayout();
        row4->setObjectName(QString::fromUtf8("row4"));
        row4->setSizeConstraint(QLayout::SetNoConstraint);
        lineEdit_4_1 = new QLineEdit(widget);
        lineEdit_4_1->setObjectName(QString::fromUtf8("lineEdit_4_1"));
        sizePolicy1.setHeightForWidth(lineEdit_4_1->sizePolicy().hasHeightForWidth());
        lineEdit_4_1->setSizePolicy(sizePolicy1);
        lineEdit_4_1->setFont(font);
        lineEdit_4_1->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_4_1->setMaxLength(1);
        lineEdit_4_1->setAlignment(Qt::AlignCenter);

        row4->addWidget(lineEdit_4_1);

        lineEdit_4_2 = new QLineEdit(widget);
        lineEdit_4_2->setObjectName(QString::fromUtf8("lineEdit_4_2"));
        sizePolicy1.setHeightForWidth(lineEdit_4_2->sizePolicy().hasHeightForWidth());
        lineEdit_4_2->setSizePolicy(sizePolicy1);
        lineEdit_4_2->setFont(font);
        lineEdit_4_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_4_2->setMaxLength(1);
        lineEdit_4_2->setAlignment(Qt::AlignCenter);

        row4->addWidget(lineEdit_4_2);

        lineEdit_4_3 = new QLineEdit(widget);
        lineEdit_4_3->setObjectName(QString::fromUtf8("lineEdit_4_3"));
        sizePolicy1.setHeightForWidth(lineEdit_4_3->sizePolicy().hasHeightForWidth());
        lineEdit_4_3->setSizePolicy(sizePolicy1);
        lineEdit_4_3->setFont(font);
        lineEdit_4_3->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_4_3->setMaxLength(1);
        lineEdit_4_3->setAlignment(Qt::AlignCenter);

        row4->addWidget(lineEdit_4_3);

        lineEdit_4_4 = new QLineEdit(widget);
        lineEdit_4_4->setObjectName(QString::fromUtf8("lineEdit_4_4"));
        sizePolicy1.setHeightForWidth(lineEdit_4_4->sizePolicy().hasHeightForWidth());
        lineEdit_4_4->setSizePolicy(sizePolicy1);
        lineEdit_4_4->setFont(font);
        lineEdit_4_4->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_4_4->setMaxLength(1);
        lineEdit_4_4->setAlignment(Qt::AlignCenter);

        row4->addWidget(lineEdit_4_4);

        lineEdit_4_5 = new QLineEdit(widget);
        lineEdit_4_5->setObjectName(QString::fromUtf8("lineEdit_4_5"));
        sizePolicy1.setHeightForWidth(lineEdit_4_5->sizePolicy().hasHeightForWidth());
        lineEdit_4_5->setSizePolicy(sizePolicy1);
        lineEdit_4_5->setFont(font);
        lineEdit_4_5->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_4_5->setMaxLength(1);
        lineEdit_4_5->setAlignment(Qt::AlignCenter);

        row4->addWidget(lineEdit_4_5);


        verticalLayout->addLayout(row4);

        row5 = new QHBoxLayout();
        row5->setObjectName(QString::fromUtf8("row5"));
        row5->setSizeConstraint(QLayout::SetNoConstraint);
        lineEdit_5_1 = new QLineEdit(widget);
        lineEdit_5_1->setObjectName(QString::fromUtf8("lineEdit_5_1"));
        sizePolicy1.setHeightForWidth(lineEdit_5_1->sizePolicy().hasHeightForWidth());
        lineEdit_5_1->setSizePolicy(sizePolicy1);
        lineEdit_5_1->setFont(font);
        lineEdit_5_1->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_5_1->setMaxLength(1);
        lineEdit_5_1->setAlignment(Qt::AlignCenter);

        row5->addWidget(lineEdit_5_1);

        lineEdit_5_2 = new QLineEdit(widget);
        lineEdit_5_2->setObjectName(QString::fromUtf8("lineEdit_5_2"));
        sizePolicy1.setHeightForWidth(lineEdit_5_2->sizePolicy().hasHeightForWidth());
        lineEdit_5_2->setSizePolicy(sizePolicy1);
        lineEdit_5_2->setFont(font);
        lineEdit_5_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_5_2->setMaxLength(1);
        lineEdit_5_2->setAlignment(Qt::AlignCenter);

        row5->addWidget(lineEdit_5_2);

        lineEdit_5_3 = new QLineEdit(widget);
        lineEdit_5_3->setObjectName(QString::fromUtf8("lineEdit_5_3"));
        sizePolicy1.setHeightForWidth(lineEdit_5_3->sizePolicy().hasHeightForWidth());
        lineEdit_5_3->setSizePolicy(sizePolicy1);
        lineEdit_5_3->setFont(font);
        lineEdit_5_3->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_5_3->setMaxLength(1);
        lineEdit_5_3->setAlignment(Qt::AlignCenter);

        row5->addWidget(lineEdit_5_3);

        lineEdit_5_4 = new QLineEdit(widget);
        lineEdit_5_4->setObjectName(QString::fromUtf8("lineEdit_5_4"));
        sizePolicy1.setHeightForWidth(lineEdit_5_4->sizePolicy().hasHeightForWidth());
        lineEdit_5_4->setSizePolicy(sizePolicy1);
        lineEdit_5_4->setFont(font);
        lineEdit_5_4->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_5_4->setMaxLength(1);
        lineEdit_5_4->setAlignment(Qt::AlignCenter);

        row5->addWidget(lineEdit_5_4);

        lineEdit_5_5 = new QLineEdit(widget);
        lineEdit_5_5->setObjectName(QString::fromUtf8("lineEdit_5_5"));
        sizePolicy1.setHeightForWidth(lineEdit_5_5->sizePolicy().hasHeightForWidth());
        lineEdit_5_5->setSizePolicy(sizePolicy1);
        lineEdit_5_5->setFont(font);
        lineEdit_5_5->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_5_5->setMaxLength(1);
        lineEdit_5_5->setAlignment(Qt::AlignCenter);

        row5->addWidget(lineEdit_5_5);


        verticalLayout->addLayout(row5);

        row6 = new QHBoxLayout();
        row6->setObjectName(QString::fromUtf8("row6"));
        row6->setSizeConstraint(QLayout::SetNoConstraint);
        lineEdit_6_1 = new QLineEdit(widget);
        lineEdit_6_1->setObjectName(QString::fromUtf8("lineEdit_6_1"));
        sizePolicy1.setHeightForWidth(lineEdit_6_1->sizePolicy().hasHeightForWidth());
        lineEdit_6_1->setSizePolicy(sizePolicy1);
        lineEdit_6_1->setFont(font);
        lineEdit_6_1->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_6_1->setMaxLength(1);
        lineEdit_6_1->setAlignment(Qt::AlignCenter);

        row6->addWidget(lineEdit_6_1);

        lineEdit_6_2 = new QLineEdit(widget);
        lineEdit_6_2->setObjectName(QString::fromUtf8("lineEdit_6_2"));
        sizePolicy1.setHeightForWidth(lineEdit_6_2->sizePolicy().hasHeightForWidth());
        lineEdit_6_2->setSizePolicy(sizePolicy1);
        lineEdit_6_2->setFont(font);
        lineEdit_6_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_6_2->setMaxLength(1);
        lineEdit_6_2->setAlignment(Qt::AlignCenter);

        row6->addWidget(lineEdit_6_2);

        lineEdit_6_3 = new QLineEdit(widget);
        lineEdit_6_3->setObjectName(QString::fromUtf8("lineEdit_6_3"));
        sizePolicy1.setHeightForWidth(lineEdit_6_3->sizePolicy().hasHeightForWidth());
        lineEdit_6_3->setSizePolicy(sizePolicy1);
        lineEdit_6_3->setFont(font);
        lineEdit_6_3->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_6_3->setMaxLength(1);
        lineEdit_6_3->setAlignment(Qt::AlignCenter);

        row6->addWidget(lineEdit_6_3);

        lineEdit_6_4 = new QLineEdit(widget);
        lineEdit_6_4->setObjectName(QString::fromUtf8("lineEdit_6_4"));
        sizePolicy1.setHeightForWidth(lineEdit_6_4->sizePolicy().hasHeightForWidth());
        lineEdit_6_4->setSizePolicy(sizePolicy1);
        lineEdit_6_4->setFont(font);
        lineEdit_6_4->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_6_4->setMaxLength(1);
        lineEdit_6_4->setAlignment(Qt::AlignCenter);

        row6->addWidget(lineEdit_6_4);

        lineEdit_6_5 = new QLineEdit(widget);
        lineEdit_6_5->setObjectName(QString::fromUtf8("lineEdit_6_5"));
        sizePolicy1.setHeightForWidth(lineEdit_6_5->sizePolicy().hasHeightForWidth());
        lineEdit_6_5->setSizePolicy(sizePolicy1);
        lineEdit_6_5->setFont(font);
        lineEdit_6_5->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_6_5->setMaxLength(1);
        lineEdit_6_5->setAlignment(Qt::AlignCenter);

        row6->addWidget(lineEdit_6_5);


        verticalLayout->addLayout(row6);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(330, -10, 167, 77));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setSizeIncrement(QSize(0, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(28);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 380, 751, 111));
        buttonContainer_1 = new QHBoxLayout(widget1);
        buttonContainer_1->setSpacing(12);
        buttonContainer_1->setObjectName(QString::fromUtf8("buttonContainer_1"));
        buttonContainer_1->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttonContainer_1->setContentsMargins(0, 0, 0, 0);
        Button_Q = new QPushButton(widget1);
        Button_Q->setObjectName(QString::fromUtf8("Button_Q"));
        sizePolicy1.setHeightForWidth(Button_Q->sizePolicy().hasHeightForWidth());
        Button_Q->setSizePolicy(sizePolicy1);
        Button_Q->setMinimumSize(QSize(50, 70));
        Button_Q->setMaximumSize(QSize(100, 120));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        Button_Q->setFont(font2);

        buttonContainer_1->addWidget(Button_Q);

        Button_W = new QPushButton(widget1);
        Button_W->setObjectName(QString::fromUtf8("Button_W"));
        sizePolicy1.setHeightForWidth(Button_W->sizePolicy().hasHeightForWidth());
        Button_W->setSizePolicy(sizePolicy1);
        Button_W->setMinimumSize(QSize(50, 70));
        Button_W->setMaximumSize(QSize(100, 120));
        Button_W->setFont(font2);

        buttonContainer_1->addWidget(Button_W);

        Button_E = new QPushButton(widget1);
        Button_E->setObjectName(QString::fromUtf8("Button_E"));
        sizePolicy1.setHeightForWidth(Button_E->sizePolicy().hasHeightForWidth());
        Button_E->setSizePolicy(sizePolicy1);
        Button_E->setMinimumSize(QSize(50, 70));
        Button_E->setMaximumSize(QSize(100, 120));
        Button_E->setFont(font2);

        buttonContainer_1->addWidget(Button_E);

        Button_R = new QPushButton(widget1);
        Button_R->setObjectName(QString::fromUtf8("Button_R"));
        sizePolicy1.setHeightForWidth(Button_R->sizePolicy().hasHeightForWidth());
        Button_R->setSizePolicy(sizePolicy1);
        Button_R->setMinimumSize(QSize(50, 70));
        Button_R->setMaximumSize(QSize(100, 120));
        Button_R->setFont(font2);

        buttonContainer_1->addWidget(Button_R);

        Button_T = new QPushButton(widget1);
        Button_T->setObjectName(QString::fromUtf8("Button_T"));
        sizePolicy1.setHeightForWidth(Button_T->sizePolicy().hasHeightForWidth());
        Button_T->setSizePolicy(sizePolicy1);
        Button_T->setMinimumSize(QSize(50, 70));
        Button_T->setMaximumSize(QSize(100, 120));
        Button_T->setFont(font2);

        buttonContainer_1->addWidget(Button_T);

        Button_Y = new QPushButton(widget1);
        Button_Y->setObjectName(QString::fromUtf8("Button_Y"));
        sizePolicy1.setHeightForWidth(Button_Y->sizePolicy().hasHeightForWidth());
        Button_Y->setSizePolicy(sizePolicy1);
        Button_Y->setMinimumSize(QSize(50, 70));
        Button_Y->setMaximumSize(QSize(100, 120));
        Button_Y->setFont(font2);

        buttonContainer_1->addWidget(Button_Y);

        Button_U = new QPushButton(widget1);
        Button_U->setObjectName(QString::fromUtf8("Button_U"));
        sizePolicy1.setHeightForWidth(Button_U->sizePolicy().hasHeightForWidth());
        Button_U->setSizePolicy(sizePolicy1);
        Button_U->setMinimumSize(QSize(50, 70));
        Button_U->setMaximumSize(QSize(100, 120));
        Button_U->setFont(font2);

        buttonContainer_1->addWidget(Button_U);

        Button_I = new QPushButton(widget1);
        Button_I->setObjectName(QString::fromUtf8("Button_I"));
        sizePolicy1.setHeightForWidth(Button_I->sizePolicy().hasHeightForWidth());
        Button_I->setSizePolicy(sizePolicy1);
        Button_I->setMinimumSize(QSize(50, 70));
        Button_I->setMaximumSize(QSize(100, 120));
        Button_I->setFont(font2);

        buttonContainer_1->addWidget(Button_I);

        Button_O = new QPushButton(widget1);
        Button_O->setObjectName(QString::fromUtf8("Button_O"));
        sizePolicy1.setHeightForWidth(Button_O->sizePolicy().hasHeightForWidth());
        Button_O->setSizePolicy(sizePolicy1);
        Button_O->setMinimumSize(QSize(50, 70));
        Button_O->setMaximumSize(QSize(100, 120));
        Button_O->setFont(font2);

        buttonContainer_1->addWidget(Button_O);

        Button_P = new QPushButton(widget1);
        Button_P->setObjectName(QString::fromUtf8("Button_P"));
        sizePolicy1.setHeightForWidth(Button_P->sizePolicy().hasHeightForWidth());
        Button_P->setSizePolicy(sizePolicy1);
        Button_P->setMinimumSize(QSize(50, 70));
        Button_P->setMaximumSize(QSize(100, 120));
        Button_P->setFont(font2);

        buttonContainer_1->addWidget(Button_P);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(70, 500, 691, 102));
        buttonContainer_2 = new QHBoxLayout(widget2);
        buttonContainer_2->setSpacing(12);
        buttonContainer_2->setObjectName(QString::fromUtf8("buttonContainer_2"));
        buttonContainer_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttonContainer_2->setContentsMargins(0, 0, 0, 0);
        Button_A = new QPushButton(widget2);
        Button_A->setObjectName(QString::fromUtf8("Button_A"));
        sizePolicy1.setHeightForWidth(Button_A->sizePolicy().hasHeightForWidth());
        Button_A->setSizePolicy(sizePolicy1);
        Button_A->setMinimumSize(QSize(50, 70));
        Button_A->setMaximumSize(QSize(100, 120));
        Button_A->setFont(font2);

        buttonContainer_2->addWidget(Button_A);

        Button_S = new QPushButton(widget2);
        Button_S->setObjectName(QString::fromUtf8("Button_S"));
        sizePolicy1.setHeightForWidth(Button_S->sizePolicy().hasHeightForWidth());
        Button_S->setSizePolicy(sizePolicy1);
        Button_S->setMinimumSize(QSize(50, 70));
        Button_S->setMaximumSize(QSize(100, 120));
        Button_S->setFont(font2);

        buttonContainer_2->addWidget(Button_S);

        Button_D = new QPushButton(widget2);
        Button_D->setObjectName(QString::fromUtf8("Button_D"));
        sizePolicy1.setHeightForWidth(Button_D->sizePolicy().hasHeightForWidth());
        Button_D->setSizePolicy(sizePolicy1);
        Button_D->setMinimumSize(QSize(50, 70));
        Button_D->setMaximumSize(QSize(100, 120));
        Button_D->setFont(font2);

        buttonContainer_2->addWidget(Button_D);

        Button_F = new QPushButton(widget2);
        Button_F->setObjectName(QString::fromUtf8("Button_F"));
        sizePolicy1.setHeightForWidth(Button_F->sizePolicy().hasHeightForWidth());
        Button_F->setSizePolicy(sizePolicy1);
        Button_F->setMinimumSize(QSize(50, 70));
        Button_F->setMaximumSize(QSize(100, 120));
        Button_F->setFont(font2);

        buttonContainer_2->addWidget(Button_F);

        Button_G = new QPushButton(widget2);
        Button_G->setObjectName(QString::fromUtf8("Button_G"));
        sizePolicy1.setHeightForWidth(Button_G->sizePolicy().hasHeightForWidth());
        Button_G->setSizePolicy(sizePolicy1);
        Button_G->setMinimumSize(QSize(50, 70));
        Button_G->setMaximumSize(QSize(100, 120));
        Button_G->setFont(font2);

        buttonContainer_2->addWidget(Button_G);

        Button_H = new QPushButton(widget2);
        Button_H->setObjectName(QString::fromUtf8("Button_H"));
        sizePolicy1.setHeightForWidth(Button_H->sizePolicy().hasHeightForWidth());
        Button_H->setSizePolicy(sizePolicy1);
        Button_H->setMinimumSize(QSize(50, 70));
        Button_H->setMaximumSize(QSize(100, 120));
        Button_H->setFont(font2);

        buttonContainer_2->addWidget(Button_H);

        Button_J = new QPushButton(widget2);
        Button_J->setObjectName(QString::fromUtf8("Button_J"));
        sizePolicy1.setHeightForWidth(Button_J->sizePolicy().hasHeightForWidth());
        Button_J->setSizePolicy(sizePolicy1);
        Button_J->setMinimumSize(QSize(50, 70));
        Button_J->setMaximumSize(QSize(100, 120));
        Button_J->setFont(font2);

        buttonContainer_2->addWidget(Button_J);

        Button_K = new QPushButton(widget2);
        Button_K->setObjectName(QString::fromUtf8("Button_K"));
        sizePolicy1.setHeightForWidth(Button_K->sizePolicy().hasHeightForWidth());
        Button_K->setSizePolicy(sizePolicy1);
        Button_K->setMinimumSize(QSize(50, 70));
        Button_K->setMaximumSize(QSize(100, 120));
        Button_K->setFont(font2);

        buttonContainer_2->addWidget(Button_K);

        Button_L = new QPushButton(widget2);
        Button_L->setObjectName(QString::fromUtf8("Button_L"));
        sizePolicy1.setHeightForWidth(Button_L->sizePolicy().hasHeightForWidth());
        Button_L->setSizePolicy(sizePolicy1);
        Button_L->setMinimumSize(QSize(50, 70));
        Button_L->setMaximumSize(QSize(100, 120));
        Button_L->setFont(font2);

        buttonContainer_2->addWidget(Button_L);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 610, 828, 102));
        buttonContainer_3 = new QHBoxLayout(widget3);
        buttonContainer_3->setSpacing(12);
        buttonContainer_3->setObjectName(QString::fromUtf8("buttonContainer_3"));
        buttonContainer_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttonContainer_3->setContentsMargins(0, 0, 0, 0);
        Button_Enter = new QPushButton(widget3);
        Button_Enter->setObjectName(QString::fromUtf8("Button_Enter"));
        sizePolicy1.setHeightForWidth(Button_Enter->sizePolicy().hasHeightForWidth());
        Button_Enter->setSizePolicy(sizePolicy1);
        Button_Enter->setMinimumSize(QSize(85, 70));
        Button_Enter->setMaximumSize(QSize(140, 140));
        Button_Enter->setFont(font2);

        buttonContainer_3->addWidget(Button_Enter);

        Button_Z = new QPushButton(widget3);
        Button_Z->setObjectName(QString::fromUtf8("Button_Z"));
        sizePolicy1.setHeightForWidth(Button_Z->sizePolicy().hasHeightForWidth());
        Button_Z->setSizePolicy(sizePolicy1);
        Button_Z->setMinimumSize(QSize(50, 70));
        Button_Z->setMaximumSize(QSize(100, 120));
        Button_Z->setFont(font2);

        buttonContainer_3->addWidget(Button_Z);

        Button_X = new QPushButton(widget3);
        Button_X->setObjectName(QString::fromUtf8("Button_X"));
        sizePolicy1.setHeightForWidth(Button_X->sizePolicy().hasHeightForWidth());
        Button_X->setSizePolicy(sizePolicy1);
        Button_X->setMinimumSize(QSize(50, 70));
        Button_X->setMaximumSize(QSize(100, 120));
        Button_X->setFont(font2);

        buttonContainer_3->addWidget(Button_X);

        Button_C = new QPushButton(widget3);
        Button_C->setObjectName(QString::fromUtf8("Button_C"));
        sizePolicy1.setHeightForWidth(Button_C->sizePolicy().hasHeightForWidth());
        Button_C->setSizePolicy(sizePolicy1);
        Button_C->setMinimumSize(QSize(50, 70));
        Button_C->setMaximumSize(QSize(100, 120));
        Button_C->setFont(font2);

        buttonContainer_3->addWidget(Button_C);

        Button_V = new QPushButton(widget3);
        Button_V->setObjectName(QString::fromUtf8("Button_V"));
        sizePolicy1.setHeightForWidth(Button_V->sizePolicy().hasHeightForWidth());
        Button_V->setSizePolicy(sizePolicy1);
        Button_V->setMinimumSize(QSize(50, 70));
        Button_V->setMaximumSize(QSize(100, 120));
        Button_V->setFont(font2);

        buttonContainer_3->addWidget(Button_V);

        Button_B = new QPushButton(widget3);
        Button_B->setObjectName(QString::fromUtf8("Button_B"));
        sizePolicy1.setHeightForWidth(Button_B->sizePolicy().hasHeightForWidth());
        Button_B->setSizePolicy(sizePolicy1);
        Button_B->setMinimumSize(QSize(50, 70));
        Button_B->setMaximumSize(QSize(100, 120));
        Button_B->setFont(font2);

        buttonContainer_3->addWidget(Button_B);

        Button_N = new QPushButton(widget3);
        Button_N->setObjectName(QString::fromUtf8("Button_N"));
        sizePolicy1.setHeightForWidth(Button_N->sizePolicy().hasHeightForWidth());
        Button_N->setSizePolicy(sizePolicy1);
        Button_N->setMinimumSize(QSize(50, 70));
        Button_N->setMaximumSize(QSize(100, 120));
        Button_N->setFont(font2);

        buttonContainer_3->addWidget(Button_N);

        Button_M = new QPushButton(widget3);
        Button_M->setObjectName(QString::fromUtf8("Button_M"));
        sizePolicy1.setHeightForWidth(Button_M->sizePolicy().hasHeightForWidth());
        Button_M->setSizePolicy(sizePolicy1);
        Button_M->setMinimumSize(QSize(50, 70));
        Button_M->setMaximumSize(QSize(100, 120));
        Button_M->setFont(font2);

        buttonContainer_3->addWidget(Button_M);

        Button_DEL = new QPushButton(widget3);
        Button_DEL->setObjectName(QString::fromUtf8("Button_DEL"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Button_DEL->sizePolicy().hasHeightForWidth());
        Button_DEL->setSizePolicy(sizePolicy3);
        Button_DEL->setMinimumSize(QSize(85, 70));
        Button_DEL->setMaximumSize(QSize(140, 140));
        Button_DEL->setFont(font2);

        buttonContainer_3->addWidget(Button_DEL);

        Wordle->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Wordle);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 842, 26));
        Wordle->setMenuBar(menubar);
        statusbar = new QStatusBar(Wordle);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Wordle->setStatusBar(statusbar);

        retranslateUi(Wordle);

        QMetaObject::connectSlotsByName(Wordle);
    } // setupUi

    void retranslateUi(QMainWindow *Wordle)
    {
        Wordle->setWindowTitle(QCoreApplication::translate("Wordle", "Wordle", nullptr));
        label->setText(QCoreApplication::translate("Wordle", "Wordle", nullptr));
        Button_Q->setText(QCoreApplication::translate("Wordle", "Q", nullptr));
        Button_W->setText(QCoreApplication::translate("Wordle", "W", nullptr));
        Button_E->setText(QCoreApplication::translate("Wordle", "E", nullptr));
        Button_R->setText(QCoreApplication::translate("Wordle", "R", nullptr));
        Button_T->setText(QCoreApplication::translate("Wordle", "T", nullptr));
        Button_Y->setText(QCoreApplication::translate("Wordle", "Y", nullptr));
        Button_U->setText(QCoreApplication::translate("Wordle", "U", nullptr));
        Button_I->setText(QCoreApplication::translate("Wordle", "I", nullptr));
        Button_O->setText(QCoreApplication::translate("Wordle", "O", nullptr));
        Button_P->setText(QCoreApplication::translate("Wordle", "P", nullptr));
        Button_A->setText(QCoreApplication::translate("Wordle", "A", nullptr));
        Button_S->setText(QCoreApplication::translate("Wordle", "S", nullptr));
        Button_D->setText(QCoreApplication::translate("Wordle", "D", nullptr));
        Button_F->setText(QCoreApplication::translate("Wordle", "F", nullptr));
        Button_G->setText(QCoreApplication::translate("Wordle", "G", nullptr));
        Button_H->setText(QCoreApplication::translate("Wordle", "H", nullptr));
        Button_J->setText(QCoreApplication::translate("Wordle", "J", nullptr));
        Button_K->setText(QCoreApplication::translate("Wordle", "K", nullptr));
        Button_L->setText(QCoreApplication::translate("Wordle", "L", nullptr));
        Button_Enter->setText(QCoreApplication::translate("Wordle", "Enter", nullptr));
        Button_Z->setText(QCoreApplication::translate("Wordle", "Z", nullptr));
        Button_X->setText(QCoreApplication::translate("Wordle", "X", nullptr));
        Button_C->setText(QCoreApplication::translate("Wordle", "C", nullptr));
        Button_V->setText(QCoreApplication::translate("Wordle", "V", nullptr));
        Button_B->setText(QCoreApplication::translate("Wordle", "B", nullptr));
        Button_N->setText(QCoreApplication::translate("Wordle", "N", nullptr));
        Button_M->setText(QCoreApplication::translate("Wordle", "M", nullptr));
        Button_DEL->setText(QCoreApplication::translate("Wordle", "DEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wordle: public Ui_Wordle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDLE_H
