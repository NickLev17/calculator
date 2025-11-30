/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pb9;
    QPushButton *pb2;
    QPushButton *pb6;
    QPushButton *pb7;
    QPushButton *pb4;
    QPushButton *pb_summ;
    QPushButton *pb1;
    QPushButton *pb8;
    QPushButton *pb5;
    QPushButton *pb0;
    QPushButton *pb3;
    QPushButton *pb_substract;
    QPushButton *pb_result;
    QPushButton *pb_split;
    QPushButton *pb_malti;
    QPushButton *pbAC;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(366, 526);
        MainWindow->setMouseTracking(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #1e1e2e, stop:1 #313244);\n"
"}\n"
"QLineEdit {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #89b4fa, stop:1 #74c7ec);\n"
"    border: 3px solid #45475a;\n"
"    border-radius: 15px;\n"
" /*   font-size: 24px;*/\n"
"    font-weight: bold;\n"
"    color: #1e1e2e;\n"
"    padding: 12px;\n"
"    selection-background-color: #f9e2af;\n"
"}\n"
"\n"
"/* \320\232\320\275\320\276\320\277\320\272\320\270 \321\206\320\270\321\204\321\200 (0-9, '.') */\n"
"QPushButton[role=\"digit\"] {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #f2f2f2, stop:1 #e5e5e5);\n"
"    border: 2px solid #b4b4b4;\n"
"    border-radius: 5px;\n"
"   /* font-size: 20px;*/\n"
"    font-weight: bold;\n"
"    color: #1e1e2e;\n"
"    min-height: 60px;\n"
"    min-width: 60px;\n"
"}\n"
"QPushButton[role=\"digit\"]:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"        st"
                        "op:0 #e5e5e5, stop:1 #d4d4d4);\n"
"    border: 2px solid #89b4fa;\n"
"}\n"
"QPushButton[role=\"digit\"]:pressed {\n"
"    background: #c5c5c5;\n"
"}\n"
"\n"
"/* \320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270 (+ - * /) */\n"
"QPushButton[role=\"operation\"] {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #f9e2af, stop:1 #fab387);\n"
"    border: 2px solid #f4b8e4;\n"
"    border-radius: 5px;\n"
"  /*  font-size: 20px;*/\n"
"    font-weight: bold;\n"
"    color: #1e1e2e;\n"
"    min-height: 60px;\n"
"    min-width: 60px;\n"
"}\n"
"QPushButton[role=\"operation\"]:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #fab387, stop:1 #f9e2af);\n"
"}\n"
"\n"
"/* \320\240\320\260\320\262\320\275\320\276 (=) */\n"
"QPushButton#equalsButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #a6e3a1, stop:1 #94e2d5);\n"
"    border: 3px solid #73daca;\n"
"    border-radius: 5px;\n"
"  /*  font-size: 24px;*/\n"
""
                        "    font-weight: bold;\n"
"    color: #1e1e2e;\n"
"    min-height: 60px;\n"
"    min-width: 60px;\n"
"}\n"
"QPushButton#equalsButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #94e2d5, stop:1 #a6e3a1);\n"
"}\n"
"\n"
"/* \320\241\320\261\321\200\320\276\321\201 (C/CE) */\n"
"QPushButton#clearButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 #f38ba8, stop:1 #eba0ac);\n"
"    border: 2px solid #f5a97f;\n"
"    border-radius: 5px;\n"
"  /*  font-size: 18px;*/\n"
"    font-weight: bold;\n"
"    color: white;\n"
"    min-height: 60px;\n"
"}\n"
"QPushButton#clearButton:hover {\n"
"    background: #f28fad;\n"
"}\n"
""));
        MainWindow->setIconSize(QSize(32, 32));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pb9 = new QPushButton(centralwidget);
        pb9->setObjectName(QString::fromUtf8("pb9"));
        pb9->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb9, 0, 2, 1, 1);

        pb2 = new QPushButton(centralwidget);
        pb2->setObjectName(QString::fromUtf8("pb2"));
        pb2->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb2, 2, 1, 1, 1);

        pb6 = new QPushButton(centralwidget);
        pb6->setObjectName(QString::fromUtf8("pb6"));
        pb6->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb6, 1, 2, 1, 1);

        pb7 = new QPushButton(centralwidget);
        pb7->setObjectName(QString::fromUtf8("pb7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb7->sizePolicy().hasHeightForWidth());
        pb7->setSizePolicy(sizePolicy1);
        pb7->setMinimumSize(QSize(0, 0));
        pb7->setAutoDefault(false);
        pb7->setFlat(false);

        gridLayout->addWidget(pb7, 0, 0, 1, 1);

        pb4 = new QPushButton(centralwidget);
        pb4->setObjectName(QString::fromUtf8("pb4"));
        pb4->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb4, 1, 0, 1, 1);

        pb_summ = new QPushButton(centralwidget);
        pb_summ->setObjectName(QString::fromUtf8("pb_summ"));
        pb_summ->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb_summ, 3, 3, 1, 1);

        pb1 = new QPushButton(centralwidget);
        pb1->setObjectName(QString::fromUtf8("pb1"));
        pb1->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb1, 2, 0, 1, 1);

        pb8 = new QPushButton(centralwidget);
        pb8->setObjectName(QString::fromUtf8("pb8"));
        pb8->setMinimumSize(QSize(0, 0));
        pb8->setBaseSize(QSize(0, 0));
        pb8->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pb8, 0, 1, 1, 1);

        pb5 = new QPushButton(centralwidget);
        pb5->setObjectName(QString::fromUtf8("pb5"));
        pb5->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb5, 1, 1, 1, 1);

        pb0 = new QPushButton(centralwidget);
        pb0->setObjectName(QString::fromUtf8("pb0"));
        pb0->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb0, 3, 0, 1, 1);

        pb3 = new QPushButton(centralwidget);
        pb3->setObjectName(QString::fromUtf8("pb3"));
        pb3->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb3, 2, 2, 1, 1);

        pb_substract = new QPushButton(centralwidget);
        pb_substract->setObjectName(QString::fromUtf8("pb_substract"));
        pb_substract->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb_substract, 2, 3, 1, 1);

        pb_result = new QPushButton(centralwidget);
        pb_result->setObjectName(QString::fromUtf8("pb_result"));
        pb_result->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb_result, 3, 1, 1, 1);

        pb_split = new QPushButton(centralwidget);
        pb_split->setObjectName(QString::fromUtf8("pb_split"));
        pb_split->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb_split, 3, 2, 1, 1);

        pb_malti = new QPushButton(centralwidget);
        pb_malti->setObjectName(QString::fromUtf8("pb_malti"));
        pb_malti->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pb_malti, 1, 3, 1, 1);

        pbAC = new QPushButton(centralwidget);
        pbAC->setObjectName(QString::fromUtf8("pbAC"));
        pbAC->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(pbAC, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 366, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pb7->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pb9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pb2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pb6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pb7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pb4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pb_summ->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pb1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pb8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pb5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pb0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pb3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pb_substract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pb_result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pb_split->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pb_malti->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pbAC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
