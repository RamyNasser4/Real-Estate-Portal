#include "UsersDashboard.h"

UsersDashboard::UsersDashboard(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}

void UsersDashboard::setupUi(QWidget* tab_4, System* system) {
	label_22 = new QLabel(tab_4);
	label_22->setObjectName("label_22");
	label_22->setGeometry(QRect(40, 10, 221, 61));
	label_22->setStyleSheet(QString::fromUtf8("QLabel\n"
		"{\n"
		"font-size:34px;\n"
		"font-weight:bold;\n"
		"color:#2B2A2A;\n"
		"}"));
	line_7 = new QFrame(tab_4);
	line_7->setObjectName("line_7");
	line_7->setGeometry(QRect(30, 80, 731, 16));
	line_7->setFrameShape(QFrame::Shape::HLine);
	line_7->setFrameShadow(QFrame::Shadow::Sunken);
	scrollArea = new QScrollArea(tab_4);
	scrollArea->setObjectName("scrollArea");
	scrollArea->setGeometry(QRect(0, 170, 791, 561));
	drawUsers(scrollAreaWidgetContents, system, scrollArea);
	frame_3 = new QFrame(tab_4);
	frame_3->setObjectName("frame_3");
	frame_3->setGeometry(QRect(10, 120, 761, 41));
	frame_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
		"  border-radius: 15px;\n"
		"  border: 2px solid white ;\n"
		"background-color:white;\n"
		"\n"
		"}\n"
		"QLabel\n"
		"{\n"
		"font-size:15px;\n"
		"font-weight:bold;\n"
		"color:#2B2A2A;\n"
		"}\n"
		"QPushButton{\n"
		"  border-radius: 10px;\n"
		"  background: #FF7F7F;\n"
		"color:white;\n"
		"\n"
		"\n"
		"\n"
		"}\n"
		"\n"
		"QPushButton:hover{\n"
		"background: #CCD0CD;\n"
		"color:Black;\n"
		"}\n"
		"\n"
		""));
	frame_3->setFrameShape(QFrame::Shape::StyledPanel);
	frame_3->setFrameShadow(QFrame::Shadow::Raised);
	label_15 = new QLabel(frame_3);
	label_15->setObjectName("label_15");
	label_15->setGeometry(QRect(50, 3, 141, 31));
	label_16 = new QLabel(frame_3);
	label_16->setObjectName("label_16");
	label_16->setGeometry(QRect(220, 3, 141, 31));
	label_17 = new QLabel(frame_3);
	label_17->setObjectName("label_17");
	label_17->setGeometry(QRect(370, 3, 171, 31));
	label_18 = new QLabel(frame_3);
	label_18->setObjectName("label_18");
	label_18->setGeometry(QRect(560, 3, 131, 31));
	label_32 = new QLabel(tab_4);
	label_32->setObjectName("label_32");
	label_32->setGeometry(QRect(630, 91, 131, 20));
	label_32->setStyleSheet(QString::fromUtf8("#label_11{\n"
		"color:black;\n"
		"  border-radius: 25px;\n"
		"\n"
		"\n"
		"font-size:15px;\n"
		"}"));
	label_22->setText(QCoreApplication::translate("Dashboard", "All Users", nullptr));
	label_15->setText(QCoreApplication::translate("Dashboard", "#ID", nullptr));
	label_16->setText(QCoreApplication::translate("Dashboard", "First Name", nullptr));
	label_17->setText(QCoreApplication::translate("Dashboard", "Last Name", nullptr));
	label_18->setText(QCoreApplication::translate("Dashboard", "Phone Number", nullptr));
	label_32->setText(QCoreApplication::translate("Dashboard", "All Users :", nullptr));
}
void UsersDashboard::drawUsers(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea) {
	scrollAreaWidgetContents = new QWidget();
	unordered_map<string, User*> users = system->GetUsers();
	if (system->UserCounter() != 0) {

		int i = 1;
		int currentCardY = 10;
		int totalHeight = 100 * system->UserCounter();
		scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, totalHeight));
		for (auto it = users.begin(); it != users.end(); ++it) {
			if (it->second->GetNationalId() == system->currentUserId) {
				continue;
			}
			QFrame* userCard = new QFrame(scrollAreaWidgetContents);
			userCard->setObjectName("userCard" + i);
			userCard->setGeometry(QRect(10, currentCardY, 761, 41));
			userCard->setStyleSheet(QString::fromUtf8("QFrame{\n"
				"  border-radius: 15px;\n"
				"  border: 2px solid white ;\n"
				"background-color:white;\n"
				"\n"
				"}\n"
				"QLabel\n"
				"{\n"
				"font-size:15px;\n"
				"font-weight:bold;\n"
				"color:#2B2A2A;\n"
				"}\n"
				"QPushButton{\n"
				"  border-radius: 10px;\n"
				"  background: #FF7F7F;\n"
				"color:white;\n"
				"\n"
				"\n"
				"\n"
				"}\n"
				"\n"
				"QPushButton:hover{\n"
				"background: #CCD0CD;\n"
				"color:Black;\n"
				"}\n"
				"\n"
				""));
			userCard->setFrameShape(QFrame::Shape::StyledPanel);
			userCard->setFrameShadow(QFrame::Shadow::Raised);
			QLabel* nationalID = new QLabel(userCard);
			nationalID->setObjectName("nationalID" + i);
			nationalID->setGeometry(QRect(50, 3, 141, 31));
			string strNationalID = "#" + it->second->GetNationalId();
			nationalID->setText(strNationalID.c_str());
			QLabel* fName = new QLabel(userCard);
			fName->setObjectName("fName" + i);
			fName->setGeometry(QRect(220, 3, 141, 31));
			fName->setText(it->second->GetFirstName().c_str());
			QLabel* lName = new QLabel(userCard);
			lName->setObjectName("lName" + i);
			lName->setGeometry(QRect(370, 3, 171, 31));
			lName->setText(it->second->GetLastName().c_str());
			QLabel* mobNumber = new QLabel(userCard);
			mobNumber->setObjectName("mobNumber" + i);
			mobNumber->setGeometry(QRect(560, 3, 131, 31));
			mobNumber->setText(it->second->GetMobileNumber().c_str());
			QPushButton* deleteButton = new QPushButton(userCard);
			deleteButton->setObjectName("deleteButton" + i);
			deleteButton->setGeometry(QRect(720, 5, 31, 31));
			QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-delete")));
			deleteButton->setIcon(icon2);
			QLabel* profileIcon = new QLabel(userCard);
			profileIcon->setObjectName("profileIcon" + i);
			profileIcon->setGeometry(QRect(7, 5, 31, 31));
			profileIcon->setPixmap(QPixmap(QString::fromUtf8("Assets/profile.png")));
			profileIcon->setScaledContents(true);
			string userID = it->second->GetNationalId();
			QObject::connect(deleteButton, &QPushButton::clicked, [=]() {
				system->RemoveUser(system->currentUserId, userID);
				drawUsers(scrollAreaWidgetContents, system, scrollArea);
				});
			i++;
			currentCardY += 50;
		}
		scrollArea->setWidget(scrollAreaWidgetContents);
		scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
		scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	}
	else {
		scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 791));
		QLabel* placeholder = new QLabel(scrollAreaWidgetContents);
		placeholder->setObjectName("placeholder");
		placeholder->setGeometry(QRect(130, 0, 501, 441));
		placeholder->setPixmap(QPixmap(QString::fromUtf8(":/Assets/9318694-removebg-preview.png")));
		QLabel* label1 = new QLabel(scrollAreaWidgetContents);
		label1->setObjectName("label_38");
		label1->setGeometry(QRect(240, 460, 321, 31));
		label1->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"font-size:30px;\n"
			"font-family:sans-serif;\n"
			"font-weight:600;\n"
			"}"));
		QLabel* label2 = new QLabel(scrollAreaWidgetContents);
		label2->setObjectName("label_39");
		label2->setGeometry(QRect(310, 500, 181, 16));
		label2->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"font-family:sans-serif;\n"
			"color:#808080;\n"
			"font-weight:600;\n"
			"}"));
		label1->setText(QCoreApplication::translate("ListingsClass", "No Properties To Show", nullptr));
		label2->setText(QCoreApplication::translate("ListingsClass", "We couldn't find any properties ", nullptr));
		scrollArea->setWidget(scrollAreaWidgetContents);
		scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
		scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	}
}
UsersDashboard::~UsersDashboard()
{}
