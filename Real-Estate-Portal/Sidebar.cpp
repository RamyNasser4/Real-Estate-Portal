#include "Sidebar.h"

Sidebar::Sidebar(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}
void Sidebar::setupUi(QMainWindow* MainWindow) {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName("MainWindow");
    MainWindow->resize(201, 720);
    QFont font;
    font.setWeight(QFont::Medium);
    MainWindow->setFont(font);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName("centralwidget");
    SideBar = new QWidget(centralwidget);
    SideBar->setObjectName("SideBar");
    SideBar->setGeometry(QRect(0, 0, 200, 720));
    QFont font1;
    font1.setBold(false);
    SideBar->setFont(font1);
    SideBar->setStyleSheet(QString::fromUtf8("\n"
        "background:#ccd0cd;\n"
        "\n"
        ""));
    pushButton_2 = new QPushButton(SideBar);
    pushButton_2->setObjectName("pushButton_2");
    pushButton_2->setGeometry(QRect(40, 280, 121, 31));
    QFont font2;
    font2.setFamilies({ QString::fromUtf8("Segoe MDL2 Assets") });
    font2.setPointSize(14);
    pushButton_2->setFont(font2);
    pushButton_2->setStyleSheet(QString::fromUtf8("\n"
        "border:0px;\n"
        ""));
    pushButton_3 = new QPushButton(SideBar);
    pushButton_3->setObjectName("pushButton_3");
    pushButton_3->setGeometry(QRect(30, 200, 101, 31));
    QFont font3;
    font3.setFamilies({ QString::fromUtf8("Segoe MDL2 Assets") });
    font3.setPointSize(14);
    font3.setWeight(QFont::Medium);
    pushButton_3->setFont(font3);
    pushButton_3->setStyleSheet(QString::fromUtf8("\n"
        "border:0px;"));
    pushButton_4 = new QPushButton(SideBar);
    pushButton_4->setObjectName("pushButton_4");
    pushButton_4->setGeometry(QRect(40, 360, 111, 31));
    pushButton_4->setFont(font3);
    pushButton_4->setStyleSheet(QString::fromUtf8("\n"
        "border:0px;\n"
        ""));
    pushButton_5 = new QPushButton(SideBar);
    pushButton_5->setObjectName("pushButton_5");
    pushButton_5->setGeometry(QRect(40, 440, 131, 31));
    QFont font4;
    font4.setFamilies({ QString::fromUtf8("Segoe MDL2 Assets") });
    font4.setPointSize(14);
    font4.setBold(false);
    pushButton_5->setFont(font4);
    pushButton_5->setStyleSheet(QString::fromUtf8("\n"
        "\n"
        "border:0px;"));
    pushButton_6 = new QPushButton(SideBar);
    pushButton_6->setObjectName("pushButton_6");
    pushButton_6->setGeometry(QRect(40, 520, 141, 31));
    pushButton_6->setFont(font3);
    pushButton_6->setStyleSheet(QString::fromUtf8("\n"
        "\n"
        "border:0px;"));
    pushButton_8 = new QPushButton(SideBar);
    pushButton_8->setObjectName("pushButton_8");
    pushButton_8->setGeometry(QRect(20, 210, 20, 16));
    QFont font5;
    font5.setPointSize(20);
    pushButton_8->setFont(font5);
    pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
    pushButton_8->setStyleSheet(QString::fromUtf8("\n"
        "border:0px;"));
    QIcon icon(QIcon::fromTheme(QString::fromUtf8("go-home")));
    pushButton_8->setIcon(icon);
    pushButton_9 = new QPushButton(SideBar);
    pushButton_9->setObjectName("pushButton_9");
    pushButton_9->setGeometry(QRect(20, 290, 20, 21));
    pushButton_9->setStyleSheet(QString::fromUtf8("\n"
        "border:0px;"));
    QIcon icon1(QIcon::fromTheme(QString::fromUtf8("list-add")));
    pushButton_9->setIcon(icon1);
    pushButton_10 = new QPushButton(SideBar);
    pushButton_10->setObjectName("pushButton_10");
    pushButton_10->setGeometry(QRect(20, 360, 20, 31));
    pushButton_10->setStyleSheet(QString::fromUtf8("\n"
        "border:0px;"));
    QIcon icon2(QIcon::fromTheme(QString::fromUtf8("mail-message-new")));
    pushButton_10->setIcon(icon2);
    pushButton_11 = new QPushButton(SideBar);
    pushButton_11->setObjectName("pushButton_11");
    pushButton_11->setGeometry(QRect(20, 440, 20, 31));
    pushButton_11->setStyleSheet(QString::fromUtf8("\n"
        "border:0px;"));
    QIcon icon3(QIcon::fromTheme(QString::fromUtf8("edit-delete")));
    pushButton_11->setIcon(icon3);
    pushButton_12 = new QPushButton(SideBar);
    pushButton_12->setObjectName("pushButton_12");
    pushButton_12->setGeometry(QRect(20, 520, 20, 31));
    pushButton_12->setStyleSheet(QString::fromUtf8("\n"
        "border:0px;"));
    QIcon icon4(QIcon::fromTheme(QString::fromUtf8("document-properties")));
    pushButton_12->setIcon(icon4);
    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName("menubar");
    menubar->setGeometry(QRect(0, 0, 201, 22));
    MainWindow->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName("statusbar");
    MainWindow->setStatusBar(statusbar);
    QWidget::setTabOrder(pushButton_3, pushButton_8);
    QWidget::setTabOrder(pushButton_8, pushButton_2);
    QWidget::setTabOrder(pushButton_2, pushButton_9);
    QWidget::setTabOrder(pushButton_9, pushButton_4);
    QWidget::setTabOrder(pushButton_4, pushButton_10);
    QWidget::setTabOrder(pushButton_10, pushButton_11);
    QWidget::setTabOrder(pushButton_11, pushButton_5);
    QWidget::setTabOrder(pushButton_5, pushButton_12);
    QWidget::setTabOrder(pushButton_12, pushButton_6);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
}

void Sidebar::retranslateUi(QMainWindow* MainWindow) {
    MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add Property", nullptr));
    pushButton_3->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
    pushButton_4->setText(QCoreApplication::translate("MainWindow", "Edit Property", nullptr));
    pushButton_5->setText(QCoreApplication::translate("MainWindow", "Delete Property", nullptr));
    pushButton_6->setText(QCoreApplication::translate("MainWindow", "Manage Account", nullptr));
    pushButton_9->setText(QString());
    pushButton_10->setText(QString());
    pushButton_11->setText(QString());
    pushButton_12->setText(QString());
}

Sidebar::~Sidebar()
{}
