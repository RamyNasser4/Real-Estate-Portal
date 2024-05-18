#include "RequestDashboard.h"

RequestDashboard::RequestDashboard(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}

void RequestDashboard::setupUi(QWidget* tab_3, System* system) {

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
	line_5 = new QFrame(tab_3);
	line_5->setObjectName("line_5");
	line_5->setGeometry(QRect(30, 90, 731, 16));
	line_5->setFrameShape(QFrame::Shape::HLine);
	line_5->setFrameShadow(QFrame::Shadow::Sunken);
	if (system->unVerified.size() != 0) {
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
		label_2 = new QLabel(frame);
		label_2->setObjectName("label_2");
		label_2->setGeometry(QRect(20, 20, 151, 161));
		label_2->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
		label_2->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
		label_2->setScaledContents(true);
		frame->setFrameShadow(QFrame::Shadow::Raised);
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
		string strCity = "City: " + requestProperty->GetCity();
		label_8->setText(QCoreApplication::translate("Dashboard", strCity.c_str(), nullptr));
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
			Admin* admin = dynamic_cast<Admin*>(system->GetUser(system->currentUserId));
			User* user = system->GetUser(system->unVerified.front()->GetUserId());
			admin->AdminApproveorDeclineProperty(system, true, user);
			updateUi(system);
			});
		QObject::connect(pushButton_2, &QPushButton::clicked, [=]() {
			Admin* admin = dynamic_cast<Admin*>(system->GetUser(system->currentUserId));
			User* user = system->GetUser(system->unVerified.front()->GetUserId());
			admin->AdminApproveorDeclineProperty(system, false, user);
			updateUi(system);
			});

	}
	else {
		label_44 = new QLabel(tab_3);
		label_44->setObjectName("label_44");
		label_44->setGeometry(QRect(210, 250, 501, 51));
		label_44->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"font-size:30px;\n"
			"font-family:sans-serif;\n"
			"font-weight:600;\n"
			"}"));
		label_44->setText(QCoreApplication::translate("Dashboard", "No More Requests To Show", nullptr));
	}
}
void RequestDashboard::updateUi(System* system) {
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
		string strCity = "City: " + requestProperty->GetCity();
		label_8->setText(QCoreApplication::translate("Dashboard", strCity.c_str(), nullptr));
		string strUserID = "User ID : " + requestProperty->GetUserId();
		label_9->setText(QCoreApplication::translate("Dashboard", strUserID.c_str(), nullptr));
		string strUserName = "Username : " + requestProperty->GetUserName();
		label_10->setText(QCoreApplication::translate("Dashboard", strUserName.c_str(), nullptr));
		string strRequest = "Requests : " + to_string(system->unVerified.size());
		label_11->setText(QCoreApplication::translate("Dashboard", strRequest.c_str(), nullptr));
	}
	else {
		if (frame != nullptr) {
			frame->setVisible(false);
		}
		label_44->setVisible(true);
		string strRequest = "Requests : " + to_string(system->unVerified.size());
		label_11->setText(QCoreApplication::translate("Dashboard", strRequest.c_str(), nullptr));
	}
}
RequestDashboard::~RequestDashboard()
{}
