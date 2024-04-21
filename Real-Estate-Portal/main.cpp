#include <iostream>
#include "System.h"
#include "Admin.h"
#include "User.h"
#include <fstream>
#include <sstream>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
using namespace std;

/********************************************************************************
** Form generated from reading UI file 'WidgetjvXlYo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/
/********************************************************************************
** Form generated from reading UI file 'WidgetzQcLgp.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WIDGETZQCLGP_H
#define WIDGETZQCLGP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QFontDatabase>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QFrame* frame;
    QFrame* frame_2;
    QPushButton* pushButton;
    QLabel* label;
    QLineEdit* lineEdit;
    QLineEdit* lineEdit_2;
    QLabel* label_2;
    QLabel* label_3;

    void setupUi(QWidget* Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(1024, 720);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setMaximumSize(QSize(1024, 720));
        Form->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-2, -1, 1421, 1321));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(1400, 720));
        QFont font;
        font.setFamilies({ QString::fromUtf8("sans-serif") });
        frame->setFont(font);
        //QFontDatabase::addApplicationFont("Century Gothic.ttf");
        frame->setStyleSheet(QString::fromUtf8("/*@font-face{\n"
            "font-family: Century Gothic;\n"
            "}*/\n"
            "*{\n"
            //"font-family:Century Gothic;\n"
            "}\n"
            "QWidget{\n"
            "background-image: url(Login.png);\n"
            "background: rgba(255, 255, 255, 0.1) url(Login.png);\n"
            "}\n"
            "QPushButton{\n"
            "border-radius: 5px;\n"
            "font-size:20px;\n"
            "color: black ;\n"
            "background: #CCD0CD ;\n"
            "}\n"
            "QPushButton:hover {\n"
            "        background:#5287FE;\n"
            "        color: white;\n"
            "}\n"
            "QLabel{\n"
            "border-style:solid;\n"
            "border-color:black;\n"
            "border-bottom:2px;\n"
            "color:black;\n"
            "}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(590, 170, 381, 431));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "background : white;\n"
            "border-radius:20px;\n"
            "}\n"
            "QLineEdit{\n"
            "padding-left: 15px;\n"
            "color:black;\n"
            "background: #FAFAFA;\n"
            "border: none;\n"
            "border-radius:15px;\n"
            "font-size:15px;\n"
            "}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(120, 340, 151, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(150, 50));
        pushButton->setMaximumSize(QSize(601, 16777215));
        QFont font1;
        font1.setFamilies({ QString::fromUtf8("Century Gothic") });
        font1.setBold(true);
        pushButton->setFont(font1);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 60, 81, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "border-radius:0px;\n"
            "border-bottom:2px solid black;\n"
            "font-weight:bold;\n"
            "color:black;\n"
            "}"));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 160, 231, 41));
        lineEdit->setStyleSheet(QString::fromUtf8(""));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(50, 250, 231, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 130, 121, 16));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-size:18px;\n"
            "font-weight:700px;\n"
            "color:black;\n"
            "}"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 220, 91, 16));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-size:18px;\n"
            "font-weight:700px;\n"
            "color:black;\n"
            "}"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget* Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        pushButton->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("Form", "Login", nullptr));
        label->setText(QCoreApplication::translate("Form", "<html><head/><body><p><span style=\" font-size:18pt;\" border=1>Login</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Form", "Enter National ID", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Form", "Enter Password", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "National ID", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Password", nullptr));  
    } // retranslateUi

};

namespace Ui {
    class Form : public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WIDGETZQCLGP_H


void readFile(System* system) {
	fstream readFile;
	readFile.open("../users.txt", ios::out | ios::in);
	if (readFile.is_open()) {
		string data;
		while (getline(readFile, data)) {
			stringstream ss(data);
			// Declare variables for fields
			string firstName, lastName, stringId, password;
			// Split the line using '*' as the delimiter
			getline(ss, firstName, '*');
			getline(ss, lastName, '*');
			getline(ss, stringId, '*');
			getline(ss, password, '*');
			int ID = stoi(stringId);
			//system->SignUp(firstName, lastName, ID, password);
		}
	}
	else {
		cout << "error" << endl;
	}
	readFile.close();
}
void writeFile(System* system) {
	fstream writefile("../users.txt", ios::out );
	if (!writefile.is_open()) {
		cout << "Failed to open the file" << endl;
		return;
	}
	const auto& users = system->GetUsers();  // Store reference to the map
	auto begin = users.begin();              // Use the same map instance for both iterators
	auto end = users.end();
	for (; begin != end; ++begin) {
		
		writefile <<begin->second->GetFirstName() << "*" << begin->second->GetLastName() << "*" << begin->second->GetNationalId() << "*" << begin->second->GetPassword() << endl;
	}
	writefile.close();
}
int main(int argc, char* argv[]) {
	//test sign up and login
	//System* system = new System();
	//system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");
	//system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");
	//system->SignUp("khalifa", "Alawe", 23, "Ghazaly00");
	//system->Login(12, "Koty");
	//system->Login(23, "Ghazaly123");
	//system->Login(23, "abdo");
	//system->Login(15, "Ghazaly123");

	//test user
	//User* user = new User("Sebaay", "Ashraf", 65, "koty");
	//system->SignUp("Sebaay", "Ashraf", 65, "koty");
	//cout << user->GetFirstName() << endl;
	//cout << user->GetLastName() << endl;
	//cout << user->GetName() << endl;
	//cout << user->GetNationalId() << endl;
	//cout << user->GetPassword() << endl;
	//user->SetFirstName("sebaayNew");
	//user->SetLastName("AshrafNew");
	//user->SetNationalId(0);
	//user->SetPassword("kotyNew");
	//cout << user->GetFirstName() << endl;
	//cout << user->GetLastName() << endl;
	//cout << user->GetName() << endl;
	//cout << user->GetNationalId() << endl;
	//cout << user->GetPassword() << endl;
	//cout << "---------------------------------------------------------" << endl;
	/*User* admin = new Admin("Ramy", "Ramy", 1, "123");
	system->users[1] = admin;
	system->RemoveUser(1,23);
	system->Login(23, "Ghazaly123");
	system->SignUp("Ramy", "Khalifa", 23, "Ghazaly123");*/
	//readFile(system);
	//writeFile(system);
	QApplication a(argc, argv);
	QWidget* widget = new QWidget();
    Ui_Form login;
    login.setupUi(widget);
	widget->show();
	return a.exec();
}

//Side Bar Gui
/*#ifndef DESIGNERZPPFKX_H
#define DESIGNERZPPFKX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *SideBar;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
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
        font2.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
        font2.setPointSize(14);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"border:0px;\n"
""));
        pushButton_3 = new QPushButton(SideBar);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 200, 101, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
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
        font4.setFamilies({QString::fromUtf8("Segoe MDL2 Assets")});
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
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DESIGNERZPPFKX_H
message.txt
8 KB
*/