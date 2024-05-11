#include "Dashboard.h"

Dashboard::Dashboard(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
/********************************************************************************
** Form generated from reading UI file 'DashboardcwMrHx.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/


void Dashboard::setupUi(QStackedWidget* Dashboard, System* system)
{
	if (Dashboard->objectName().isEmpty())
		Dashboard->setObjectName("Dashboard");
	Dashboard->resize(797, 741);
	widget = new QWidget(Dashboard);
	widget->setObjectName("widget");
	widget->setGeometry(QRect(-1, -1, 801, 741));
	widget->setStyleSheet(QString::fromUtf8("QWidget\n"
		"{\n"
		"background-color:#CCD0CD;\n"
		"\n"
		"}"));
	tabWidget = new QTabWidget(widget);
	tabWidget->setObjectName("tabWidget");
	tabWidget->setGeometry(QRect(0, 20, 801, 741));
	tabWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
		"color:black;\n"
		"}\n"
		"QFrame{\n"
		"\n"
		"}"));
	tab = new QWidget();
	tab->setObjectName("tab");
	widget_2 = new QWidget(tab);
	widget_2->setObjectName("widget_2");
	widget_2->setGeometry(QRect(0, -10, 801, 741));
	widget_2->setStyleSheet(QString::fromUtf8("QWidget\n"
		"{\n"
		"background-color:#CCD0CD;\n"
		"\n"
		"}"));
	label = new QLabel(widget_2);
	label->setObjectName("label");
	label->setGeometry(QRect(40, 20, 181, 61));
	label->setStyleSheet(QString::fromUtf8("QLabel\n"
		"{\n"
		"font-size:34px;\n"
		"font-weight:bold;\n"
		"color:#2B2A2A;\n"
		"}"));
	line_8 = new QFrame(widget_2);
	line_8->setObjectName("line_8");
	line_8->setGeometry(QRect(30, 90, 731, 16));
	line_8->setFrameShape(QFrame::Shape::HLine);
	line_8->setFrameShadow(QFrame::Shadow::Sunken);
	scrollArea_2 = new QScrollArea(widget_2);
	scrollArea_2->setObjectName("scrollArea_2");
	scrollArea_2->setGeometry(QRect(10, 120, 781, 621));
	scrollArea_2->setStyleSheet(
		"QScrollBar:vertical {"
		"border: 1px solid #999999;"
		"background: #F0F0F0;"
		"width: 15px;"
		"margin: 22px 0 22px 0;"
		"}"
		"QScrollBar::handle:vertical {"
		"background: #666666;"
		"min-height: 20px;"
		"border-radius: 7px;"
		"}"
		"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
		"background: none;"
		"}"
		"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
		"background: none;"
		"}"
	);
	/*scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
	scrollArea_2->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
	scrollArea_2->setWidgetResizable(true);*/
	scrollAreaWidgetContents_2 = new QWidget();
	scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
	scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 759, 619));
	drawBoxes(scrollAreaWidgetContents_2, system, scrollArea_2, Dashboard);
	line_8->raise();
	scrollArea_2->raise();
	label->raise();
	label_45 = new QLabel(tab);
	label_45->setObjectName("label_45");
	label_45->setGeometry(QRect(640, 93, 131, 20));
	label_45->setStyleSheet(QString::fromUtf8("#label_11{\n"
		"color:black;\n"
		"  border-radius: 25px;\n"
		"\n"
		"\n"
		"font-size:15px;\n"
		"}"));
	tabWidget->addTab(tab, QString());
	tab_3 = new QWidget();
	tab_3->setObjectName("tab_3");

	if (system->unVerified.size() != 0) {
		label_21 = new QLabel(tab_3);
		label_21->setObjectName("label_21");
		label_21->setGeometry(QRect(40, 10, 221, 61));
		label_21->setStyleSheet(QString::fromUtf8("QLabel\n"
			"{\n"
			"font-size:34px;\n"
			"font-weight:bold;\n"
			"color:#2B2A2A;\n"
			"}"));
		label_21->setText(QCoreApplication::translate("Dashboard", "Requests", nullptr));
		line_5 = new QFrame(tab_3);
		line_5->setObjectName("line_5");
		line_5->setGeometry(QRect(30, 90, 731, 16));
		line_5->setFrameShape(QFrame::Shape::HLine);
		line_5->setFrameShadow(QFrame::Shadow::Sunken);
		frame = new QFrame(tab_3);
		frame->setObjectName("frame");
		frame->setGeometry(QRect(30, 150, 741, 211));
		frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
			"  border-radius: 25px;\n"
			"  border: 2px solid white ;\n"
			"background-color:white;\n"
			"\n"
			"}\n"
			"QPushButton{\n"
			"  border-radius: 10px;\n"
			"  background: #699CCC;\n"
			"color:white;\n"
			"\n"
			"\n"
			"\n"
			"}\n"
			"QPushButton:hover{\n"
			"background: #CCD0CD;\n"
			"color:Black;\n"
			"}\n"
			"\n"
			"#pushButton_2{\n"
			"background: #FF7F7F;\n"
			"}\n"
			"#pushButton_2:hover{\n"
			"background: #CCD0CD;\n"
			"color:Black;\n"
			"}\n"
			"QLabel{\n"
			"font-size:15px;\n"
			"}"));
		frame->setFrameShape(QFrame::Shape::StyledPanel);
		frame->setFrameShadow(QFrame::Shadow::Raised);
		label_2 = new QLabel(frame);
		label_2->setObjectName("label_2");
		label_2->setGeometry(QRect(20, 20, 151, 161));
		label_2->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
		label_2->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
		label_2->setScaledContents(true);
		Property* requestProperty = system->unVerified.front();
		label_47 = new QLabel(frame);
		label_47->setObjectName("label_47");
		label_47->setGeometry(QRect(270, 10, 191, 21));
		string strPropertyID = "Property ID : " + requestProperty->GetpropertyId();
		label_47->setText(strPropertyID.c_str());
		label_3 = new QLabel(frame);
		label_3->setObjectName("label_3");
		label_3->setGeometry(QRect(180, 30, 211, 21));
		string strLocation = "Location : " + requestProperty->GetLocation();
		label_3->setText(QCoreApplication::translate("Dashboard", strLocation.c_str(), nullptr));
		label_4 = new QLabel(frame);
		label_4->setObjectName("label_4");
		label_4->setGeometry(QRect(180, 70, 201, 21));
		string strSqFootage = "<p>Space : " + to_string(requestProperty->GetSquareFootage()) + "ft<sup>2";
		label_4->setText(QCoreApplication::translate("Dashboard", strSqFootage.c_str(), nullptr));
		label_5 = new QLabel(frame);
		label_5->setObjectName("label_5");
		label_5->setGeometry(QRect(180, 110, 211, 21));
		string strBedrooms = "Bedrooms : " + to_string(requestProperty->GetNumberOfBedrooms());
		label_5->setText(QCoreApplication::translate("Dashboard", strBedrooms.c_str(), nullptr));
		label_6 = new QLabel(frame);
		label_6->setObjectName("label_6");
		label_6->setGeometry(QRect(400, 30, 231, 21));
		string strPrice = "Price : " + to_string(requestProperty->GetPrice());
		label_6->setText(strPrice.c_str());
		label_7 = new QLabel(frame);
		label_7->setObjectName("label_7");
		label_7->setGeometry(QRect(400, 70, 211, 21));
		string strType = "Type : " + requestProperty->GetPropertyType();
		label_7->setText(QCoreApplication::translate("Dashboard", strType.c_str(), nullptr));
		label_8 = new QLabel(frame);
		label_8->setObjectName("label_8");
		label_8->setGeometry(QRect(400, 110, 191, 21));
		string strBuildingNumber = "Building Number: " + requestProperty->GetBuildingNumber();
		label_8->setText(QCoreApplication::translate("Dashboard", strBuildingNumber.c_str(), nullptr));
		label_9 = new QLabel(frame);
		label_9->setObjectName("label_9");
		label_9->setGeometry(QRect(180, 150, 221, 21));
		string strUserID = "User ID : " + requestProperty->GetUserId();
		label_9->setText(QCoreApplication::translate("Dashboard", strUserID.c_str(), nullptr));
		label_10 = new QLabel(frame);
		label_10->setObjectName("label_10");
		label_10->setGeometry(QRect(400, 150, 211, 21));
		string strUserName = "Username : " + requestProperty->GetUserName();
		label_10->setText(QCoreApplication::translate("Dashboard", strUserName.c_str(), nullptr));
		pushButton = new QPushButton(frame);
		pushButton->setObjectName("pushButton");
		pushButton->setGeometry(QRect(590, 90, 61, 31));
		pushButton_2 = new QPushButton(frame);
		pushButton_2->setObjectName("pushButton_2");
		pushButton_2->setGeometry(QRect(670, 90, 61, 31));
		label_11 = new QLabel(tab_3);
		label_11->setObjectName("label_11");
		label_11->setGeometry(QRect(658, 112, 131, 20));
		label_11->setStyleSheet(QString::fromUtf8("#label_11{\n"
			"color:black;\n"
			"  border-radius: 25px;\n"
			"\n"
			"\n"
			"font-size:15px;\n"
			"}"));
		string strRequest = "Requests : " + to_string(system->unVerified.size());
		label_11->setText(QCoreApplication::translate("Dashboard", strRequest.c_str(), nullptr));
		pushButton->setText(QCoreApplication::translate("Dashboard", "Accept", nullptr));
		pushButton_2->setText(QCoreApplication::translate("Dashboard", "Deny", nullptr));
		label_44 = new QLabel(tab_3);
		label_44->setObjectName("label_44");
		label_44->setGeometry(QRect(210, 250, 381, 51));
		label_44->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"font-size:30px;\n"
			"font-family:sans-serif;\n"
			"font-weight:600;\n"
			"}"));
		label_44->setText(QCoreApplication::translate("Dashboard", "No More Requests To Show", nullptr));
		label_44->setVisible(false);
		QObject::connect(pushButton, &QPushButton::clicked, [=]() {
			Admin* admin = dynamic_cast<Admin*>(system->GetUsers()[system->currentUserId]);
			User* user = system->GetUsers()[requestProperty->GetUserId()];
			admin->AdminApproveorDeclineProperty(system, true, user);
			if (system->unVerified.size() != 0) {
				Property* requestProperty = system->unVerified.front();
				string strPropertyID = "Property ID : " + requestProperty->GetpropertyId();
				label_47->setText(strPropertyID.c_str());
				string strLocation = "Location : " + requestProperty->GetLocation();
				label_3->setText(QCoreApplication::translate("Dashboard", strLocation.c_str(), nullptr));
				string strSqFootage = "<p>Space : " + to_string(requestProperty->GetSquareFootage()) + "ft<sup>2";
				label_4->setText(QCoreApplication::translate("Dashboard", strSqFootage.c_str(), nullptr));
				string strBedrooms = "Bedrooms : " + to_string(requestProperty->GetNumberOfBedrooms());
				label_5->setText(QCoreApplication::translate("Dashboard", strBedrooms.c_str(), nullptr));
				string strPrice = "Price : " + to_string(requestProperty->GetPrice());
				label_6->setText(strPrice.c_str());
				string strType = "Type : " + requestProperty->GetPropertyType();
				label_7->setText(QCoreApplication::translate("Dashboard", strType.c_str(), nullptr));
				string strBuildingNumber = "Building Number: " + requestProperty->GetBuildingNumber();
				label_8->setText(QCoreApplication::translate("Dashboard", strBuildingNumber.c_str(), nullptr));
				string strUserID = "User ID : " + requestProperty->GetUserId();
				label_9->setText(QCoreApplication::translate("Dashboard", strUserID.c_str(), nullptr));
				string strUserName = "Username : " + requestProperty->GetUserName();
				label_10->setText(QCoreApplication::translate("Dashboard", strUserName.c_str(), nullptr));
				string strRequest = "Requests : " + to_string(system->unVerified.size());
				label_11->setText(QCoreApplication::translate("Dashboard", strRequest.c_str(), nullptr));
			}
			else {
				frame->setVisible(false);
				label_44->setVisible(true);
				string strRequest = "Requests : " + to_string(system->unVerified.size());
				label_11->setText(QCoreApplication::translate("Dashboard", strRequest.c_str(), nullptr));
			}
			});
		QObject::connect(pushButton_2, &QPushButton::clicked, [=]() {
			Admin* admin = dynamic_cast<Admin*>(system->GetUsers()[system->currentUserId]);
			User* user = system->GetUsers()[requestProperty->GetUserId()];
			admin->AdminApproveorDeclineProperty(system, false, user);
			if (system->unVerified.size() != 0) {
				Property* requestProperty = system->unVerified.front();
				string strPropertyID = "Property ID : " + requestProperty->GetpropertyId();
				label_47->setText(strPropertyID.c_str());
				string strLocation = "Location : " + requestProperty->GetLocation();
				label_3->setText(QCoreApplication::translate("Dashboard", strLocation.c_str(), nullptr));
				string strSqFootage = "<p>Space : " + to_string(requestProperty->GetSquareFootage()) + "ft<sup>2";
				label_4->setText(QCoreApplication::translate("Dashboard", strSqFootage.c_str(), nullptr));
				string strBedrooms = "Bedrooms : " + to_string(requestProperty->GetNumberOfBedrooms());
				label_5->setText(QCoreApplication::translate("Dashboard", strBedrooms.c_str(), nullptr));
				string strPrice = "Price : " + to_string(requestProperty->GetPrice());
				label_6->setText(strPrice.c_str());
				string strType = "Type : " + requestProperty->GetPropertyType();
				label_7->setText(QCoreApplication::translate("Dashboard", strType.c_str(), nullptr));
				string strBuildingNumber = "Building Number: " + requestProperty->GetBuildingNumber();
				label_8->setText(QCoreApplication::translate("Dashboard", strBuildingNumber.c_str(), nullptr));
				string strUserID = "User ID : " + requestProperty->GetUserId();
				label_9->setText(QCoreApplication::translate("Dashboard", strUserID.c_str(), nullptr));
				string strUserName = "Username : " + requestProperty->GetUserName();
				label_10->setText(QCoreApplication::translate("Dashboard", strUserName.c_str(), nullptr));
				string strRequest = "Requests : " + to_string(system->unVerified.size());
				label_11->setText(QCoreApplication::translate("Dashboard", strRequest.c_str(), nullptr));
			}
			else {
				frame->setVisible(false);
				label_44->setVisible(true);
				string strRequest = "Requests : " + to_string(system->unVerified.size());
				label_11->setText(QCoreApplication::translate("Dashboard", strRequest.c_str(), nullptr));
			}
			});

	}
	else {
		label_44 = new QLabel(tab_3);
		label_44->setObjectName("label_44");
		label_44->setGeometry(QRect(210, 250, 381, 51));
		label_44->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"font-size:30px;\n"
			"font-family:sans-serif;\n"
			"font-weight:600;\n"
			"}"));
		label_44->setText(QCoreApplication::translate("Dashboard", "No More Requests To Show", nullptr));
	}
	tabWidget->addTab(tab_3, QString());
	tab_4 = new QWidget();
	tab_4->setObjectName("tab_4");
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
	tabWidget->addTab(tab_4, QString());

	retranslateUi(Dashboard);
	string count = "All Properties : " + to_string(system->PropertiesCounter());
	label_45->setText(count.c_str());
	tabWidget->setCurrentIndex(0);


	QMetaObject::connectSlotsByName(Dashboard);
} // setupUi
void Dashboard::drawBoxes(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea, QStackedWidget* ListComponents) {
	scrollAreaWidgetContents = new QWidget();
	unordered_map<string, Property*> properties = system->GetProperties();
	int totalHeight = 230 * system->PropertiesCounter();
	qDebug() << totalHeight;
	scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, totalHeight));
	int i = 1;
	int currentCardY = 10;
	if (properties.size() != 0) {

		for (auto it = properties.begin(); it != properties.end(); ++it) {
			if (!it->second->GetVerfied()) {
				continue;
			}
			QFrame* propertyCard = new QFrame(scrollAreaWidgetContents);
			propertyCard->setObjectName("propertyCard" + i);
			propertyCard->setGeometry(QRect(20, currentCardY, 741, 201));
			propertyCard->setStyleSheet(QString::fromUtf8("QFrame{\n"
				"  border-radius: 25px;\n"
				"  border: 2px solid white ;\n"
				"background-color:white;\n"
				"\n"
				"}\n"
				"QPushButton{\n"
				"  border-radius: 10px;\n"
				"  background: #699CCC;\n"
				"color:white;\n"
				"\n"
				"\n"
				"\n"
				"}\n"
				"QPushButton:hover{\n"
				"background: #CCD0CD;\n"
				"color:Black;\n"
				"}\n"
				"\n"
				"#pushButton_2{\n"
				"background: #FF7F7F;\n"
				"}\n"
				"#pushButton_2:hover{\n"
				"background: #CCD0CD;\n"
				"color:Black;\n"
				"}\n"
				"QLabel{\n"
				"font-size:15px;\n"
				"}"));
			propertyCard->setFrameShape(QFrame::Shape::StyledPanel);
			propertyCard->setFrameShadow(QFrame::Shadow::Raised);
			QLabel* ID = new QLabel(propertyCard);
			ID->setObjectName("ID" + i);
			ID->setGeometry(QRect(260, 10, 231, 21));
			string strID = "Property ID : " + it->second->GetpropertyId();
			ID->setText(strID.c_str());
			QLabel* img = new QLabel(propertyCard);
			img->setObjectName("img" + i);
			img->setGeometry(QRect(20, 40, 151, 151));
			img->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
			img->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
			img->setScaledContents(true);
			QLabel* location = new QLabel(propertyCard);
			location->setObjectName("location" + i);
			location->setGeometry(QRect(180, 40, 211, 21));
			string strlocation = "Location : " + it->second->GetLocation();
			location->setText(strlocation.c_str());
			QLabel* sqFootage = new QLabel(propertyCard);
			sqFootage->setObjectName("sqFootage" + i);
			sqFootage->setGeometry(QRect(180, 80, 201, 21));
			string strFootage = "<p>Space : " + to_string(it->second->GetSquareFootage()) + "ft<sup>2";
			sqFootage->setText(strFootage.c_str());
			QLabel* noOfBedrooms = new QLabel(propertyCard);
			noOfBedrooms->setObjectName("noOfBedrooms" + i);
			noOfBedrooms->setGeometry(QRect(180, 120, 211, 21));
			string strBedrooms = "Bedrooms : " + to_string(it->second->GetNumberOfBedrooms());
			noOfBedrooms->setText(strBedrooms.c_str());
			QLabel* price = new QLabel(propertyCard);
			price->setObjectName("price" + i);
			price->setGeometry(QRect(400, 40, 231, 21));
			string strPrice = "Price : $" + to_string(it->second->GetPrice());
			price->setText(strPrice.c_str());
			QLabel* type = new QLabel(propertyCard);
			type->setObjectName("type" + i);
			type->setGeometry(QRect(400, 80, 211, 21));
			string strType = "Type : " + it->second->GetPropertyType();
			type->setText(strType.c_str());
			QLabel* buildingNumber = new QLabel(propertyCard);
			buildingNumber->setObjectName("buildingNo" + i);
			buildingNumber->setGeometry(QRect(400, 120, 191, 21));
			string strBuilding = "Building number : " + it->second->GetBuildingNumber();
			buildingNumber->setText(strBuilding.c_str());
			QLabel* userID = new QLabel(propertyCard);
			userID->setObjectName("userID" + i);
			userID->setGeometry(QRect(180, 160, 221, 21));
			string strUserID = "User ID : " + it->second->GetUserId();
			userID->setText(strUserID.c_str());
			QLabel* userName = new QLabel(propertyCard);
			userName->setObjectName("userName" + i);
			userName->setGeometry(QRect(400, 160, 211, 21));
			string strUserName = "Username : " + it->second->GetUserName();
			userName->setText(strUserName.c_str());
			QToolButton* toolButton = new QToolButton(propertyCard);
			toolButton->setObjectName("toolButton" + i);
			toolButton->setGeometry(QRect(680, 20, 31, 22));
			toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
				"background:white;\n"
				"border:none;\n"
				"padding-right: 0px;\n"
				"}\n"
				"QToolButton::menu-indicator{\n"
				"image: none;\n"
				"}"));
			QIcon icon;
			icon.addFile(QString::fromUtf8(":/Assets/more32.png"), QSize(), QIcon::Normal, QIcon::Off);
			toolButton->setIcon(icon);
			toolButton->setIconSize(QSize(32, 32));
			toolButton->setPopupMode(QToolButton::InstantPopup);
			QPushButton* bookmark = new QPushButton(propertyCard);
			bookmark->setObjectName("bookmark" + i);
			bookmark->setGeometry(QRect(0, -10, 75, 61));
			bookmark->setStyleSheet(QString::fromUtf8("QPushButton{\n"
				"background-color:transparent;\n"
				"border:none;\n"
				"}"));
			QIcon icon1;
			icon1.addFile(QString::fromUtf8(":/Assets/bookmarkv2.png"), QSize(), QIcon::Normal, QIcon::Off);
			bookmark->setIcon(icon1);
			bookmark->setIconSize(QSize(40, 40));
			QMenu* menu = new QMenu(scrollAreaWidgetContents);
			QAction* highlight = new QAction("Highlight");
			QAction* removeHighlight = new QAction("Remove Highlight");
			QAction* edit = new QAction("Edit");
			QAction* del = new QAction("Delete");
			string propertyId = it->second->GetpropertyId();
			if (it->second->GetHighlighted()) {
				menu->addAction(removeHighlight);
			}
			else {
				menu->addAction(highlight);
			}
			menu->addAction(edit);
			menu->addAction(del);
			menu->setStyleSheet("QMenu {\n"
				"background-color: white;\n"       // Background color
				"border: 1px solid #ccc;\n"        // Border style
				"}\n"
				"QMenu::item {\n"
				"font-family:sans-serif;\n"
				"font-weight:700;\n"
				"padding: 5px 20px;\n"             // Padding for menu items
				"}"
				"QMenu::item:selected {\n"
				"color:white;\n"
				"background-color: #407BFF;\n"    // Background color of selected item
				"}");
			toolButton->setMenu(menu);
			if (it->second->GetHighlighted()) {
				bookmark->setVisible(true);
			}
			else {
				bookmark->setVisible(false);
			}
			Admin* admin = dynamic_cast<Admin*>(system->GetUsers()[system->currentUserId]);
			QObject::connect(highlight, &QAction::triggered, [=]() {
				admin->HighlightProperty(propertyId, system);
				bookmark->setVisible(true);
				menu->insertAction(highlight, removeHighlight);
				menu->removeAction(highlight);
				});
			QObject::connect(removeHighlight, &QAction::triggered, [=]() {
				admin->RemoveHighlight(propertyId, system);
				bookmark->setVisible(false);
				menu->insertAction(removeHighlight, highlight);
				menu->removeAction(removeHighlight);
				});
			QObject::connect(del, &QAction::triggered, [=]() {
				try
				{
					system->RemoveProperty(propertyId, system->currentUserId);
					drawBoxes(scrollAreaWidgetContents, system, scrollArea, ListComponents);
				}
				catch (const exception& e)
				{
					qDebug() << e.what();
				}
				});
			QObject::connect(edit, &QAction::triggered, [=]() {
				try
				{
					EditProperty* editProperty = new EditProperty();
					ListComponents->hide();
					ListComponents->addWidget(editProperty);
					ListComponents->setCurrentWidget(editProperty);
					editProperty->setupUi(ListComponents, system, propertyId);
					ListComponents->show();
				}
				catch (const exception& e)
				{
					qDebug() << e.what();
				}
				});
			i++;
			currentCardY += 220;
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
void Dashboard::drawUsers(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea) {
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
void Dashboard::retranslateUi(QWidget* Dashboard)
{
	Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
	label->setText(QCoreApplication::translate("Dashboard", "Properties", nullptr));
	/*label_38->setText(QCoreApplication::translate("Dashboard", "No Properties To Show", nullptr));
	label_39->setText(QCoreApplication::translate("Dashboard", "We couldn't find any properties ", nullptr));
	label_12->setText(QString());
	label_13->setText(QCoreApplication::translate("Dashboard", "Location :", nullptr));
	label_14->setText(QCoreApplication::translate("Dashboard", "Space :", nullptr));
	label_25->setText(QCoreApplication::translate("Dashboard", "Bedrooms :", nullptr));
	label_26->setText(QCoreApplication::translate("Dashboard", "Price : ", nullptr));
	label_27->setText(QCoreApplication::translate("Dashboard", "Type :", nullptr));
	label_28->setText(QCoreApplication::translate("Dashboard", "Building Number:", nullptr));
	label_29->setText(QCoreApplication::translate("Dashboard", "User ID :", nullptr));
	label_30->setText(QCoreApplication::translate("Dashboard", "User Name :", nullptr));
	toolButton->setText(QString());
	label_31->setText(QString());
	label_33->setText(QCoreApplication::translate("Dashboard", "Location :", nullptr));
	label_34->setText(QCoreApplication::translate("Dashboard", "Space :", nullptr));
	label_35->setText(QCoreApplication::translate("Dashboard", "Bedrooms :", nullptr));
	label_36->setText(QCoreApplication::translate("Dashboard", "Price : ", nullptr));
	label_37->setText(QCoreApplication::translate("Dashboard", "Type :", nullptr));
	label_40->setText(QCoreApplication::translate("Dashboard", "Building Number:", nullptr));
	label_41->setText(QCoreApplication::translate("Dashboard", "User ID :", nullptr));
	label_42->setText(QCoreApplication::translate("Dashboard", "User Name :", nullptr));
	toolButton_2->setText(QString());
	pushButton_7->setText(QString());
	label_45->setText(QCoreApplication::translate("Dashboard", "All Properties :", nullptr));

	label_2->setText(QString());
	*/
	tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Dashboard", "Properties", nullptr));



	tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Dashboard", "Requests", nullptr));
	label_22->setText(QCoreApplication::translate("Dashboard", "All Users", nullptr));
	/*label_19->setText(QCoreApplication::translate("Dashboard", "#12345678901234", nullptr));
	label_20->setText(QCoreApplication::translate("Dashboard", "Ahmed", nullptr));
	label_23->setText(QCoreApplication::translate("Dashboard", "Ghazaly", nullptr));
	label_24->setText(QCoreApplication::translate("Dashboard", "012345678900", nullptr));
	pushButton_4->setText(QString());*/
	//label_43->setText(QString());
	label_15->setText(QCoreApplication::translate("Dashboard", "#ID", nullptr));
	label_16->setText(QCoreApplication::translate("Dashboard", "First Name", nullptr));
	label_17->setText(QCoreApplication::translate("Dashboard", "Last Name", nullptr));
	label_18->setText(QCoreApplication::translate("Dashboard", "Phone Number", nullptr));
	label_32->setText(QCoreApplication::translate("Dashboard", "All Users :", nullptr));
	tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Dashboard", "Users", nullptr));
} // retranslateUi



//namespace Ui {
//    class Dashboard : public Dashboard {};
//} // namespace Ui

 // DASHBOARDCWMRHX_H


Dashboard::~Dashboard()
{}
