/********************************************************************************
** Form generated from reading UI file 'art_tool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ART_TOOL_H
#define UI_ART_TOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QWidget *page;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeView_example_list;
    QLabel *label;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QLabel *label_setting;
    QComboBox *comboBox_pattern;
    QPushButton *pushButton_gen_pattern;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1220, 755);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        stackedWidget->setFont(font);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 60));

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        treeView_example_list = new QTreeView(page);
        treeView_example_list->setObjectName(QString::fromUtf8("treeView_example_list"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeView_example_list->sizePolicy().hasHeightForWidth());
        treeView_example_list->setSizePolicy(sizePolicy);
        treeView_example_list->setMinimumSize(QSize(200, 0));
        treeView_example_list->setMaximumSize(QSize(200, 300));

        verticalLayout_2->addWidget(treeView_example_list);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(page);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMaximumSize(QSize(900, 16777215));

        gridLayout->addWidget(graphicsView, 0, 4, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_setting = new QLabel(page);
        label_setting->setObjectName(QString::fromUtf8("label_setting"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_setting->sizePolicy().hasHeightForWidth());
        label_setting->setSizePolicy(sizePolicy1);
        label_setting->setMinimumSize(QSize(200, 50));
        label_setting->setMaximumSize(QSize(100, 100));
        QFont font1;
        font1.setPointSize(14);
        label_setting->setFont(font1);
        label_setting->setStyleSheet(QString::fromUtf8("background-color: rgb(136, 138, 133);\n"
"border-radius: 3px; \n"
"border: 3px solid black;"));
        label_setting->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_setting);

        comboBox_pattern = new QComboBox(page);
        comboBox_pattern->setObjectName(QString::fromUtf8("comboBox_pattern"));

        verticalLayout->addWidget(comboBox_pattern);

        pushButton_gen_pattern = new QPushButton(page);
        pushButton_gen_pattern->setObjectName(QString::fromUtf8("pushButton_gen_pattern"));

        verticalLayout->addWidget(pushButton_gen_pattern);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 5, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1220, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Design ->", nullptr));
        label->setText(QString());
        label_setting->setText(QApplication::translate("MainWindow", "Setting", nullptr));
        pushButton_gen_pattern->setText(QApplication::translate("MainWindow", "Generate Pattern", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ART_TOOL_H
