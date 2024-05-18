#include "UsersDashboard.h"

UsersDashboard::UsersDashboard(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}

void UsersDashboard::setupUi(QWidget* tab_4, System* system) {
	tab_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"font-size:18px;\n"
		"}\n"
		"QLineEdit{\n"
		"padding - left: 15px;\n"
		"color:black;\n"
		"background: #FAFAFA;\n"
		"border: none;\n"
		"border-radius:15px;\n"
		"font-size:15px;\n"
		"}\n"
	));
	label_22 = new QLabel(tab_4);
	label_22->setObjectName("label_22");
	label_22->setGeometry(QRect(40, 10, 221, 61));
	label_22->setStyleSheet(QString::fromUtf8("QLabel\n"
		"{\n"
		"font-size:34px;\n"
		"font-weight:bold;\n"
		"color:#2B2A2A;\n"
		"}"));
	label_32 = new QLabel(tab_4);
	label_32->setObjectName("label_32");
	label_32->setGeometry(QRect(30, 92, 131, 20));
	label_32->setStyleSheet(QString::fromUtf8("#label_11{\n"
		"color:black;\n"
		"  border-radius: 25px;\n"
		"\n"
		"\n"
		"font-size:15px;\n"
		"}"));
	line_7 = new QFrame(tab_4);
	line_7->setObjectName("line_7");
	line_7->setGeometry(QRect(30, 80, 731, 16));
	line_7->setFrameShape(QFrame::Shape::HLine);
	line_7->setFrameShadow(QFrame::Shadow::Sunken);
	scrollArea = new QScrollArea(tab_4);
	scrollArea->setObjectName("scrollArea");
	scrollArea->setGeometry(QRect(0, 170, 791, 201));
	scrollArea->setStyleSheet(
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
	label_48 = new QLabel(tab_4);
	label_48->setObjectName("label_48");
	label_48->setGeometry(QRect(40, 390, 221, 61));
	label_48->setStyleSheet(QString::fromUtf8("QLabel\n"
		"{\n"
		"font-size:34px;\n"
		"font-weight:bold;\n"
		"color:#2B2A2A;\n"
		"}"));
	line_9 = new QFrame(tab_4);
	line_9->setObjectName("line_9");
	line_9->setGeometry(QRect(30, 370, 731, 16));
	line_9->setFrameShape(QFrame::Shape::HLine);
	line_9->setFrameShadow(QFrame::Shadow::Sunken);
	line_10 = new QFrame(tab_4);
	line_10->setObjectName("line_10");
	line_10->setGeometry(QRect(30, 460, 731, 16));
	line_10->setFrameShape(QFrame::Shape::HLine);
	line_10->setFrameShadow(QFrame::Shadow::Sunken);
	lineEdit = new QLineEdit(tab_4);
	lineEdit->setObjectName("lineEdit");
	lineEdit->setGeometry(QRect(40, 500, 201, 31));
	label_49 = new QLabel(tab_4);
	label_49->setObjectName("label_49");
	label_49->setGeometry(QRect(48, 470, 131, 31));
	label_50 = new QLabel(tab_4);
	label_50->setObjectName("label_50");
	label_50->setGeometry(QRect(50, 540, 131, 31));
	lineEdit_2 = new QLineEdit(tab_4);
	lineEdit_2->setObjectName("lineEdit_2");
	lineEdit_2->setGeometry(QRect(40, 570, 201, 31));
	label_51 = new QLabel(tab_4);
	label_51->setObjectName("label_51");
	label_51->setGeometry(QRect(50, 610, 131, 31));
	lineEdit_3 = new QLineEdit(tab_4);
	lineEdit_3->setObjectName("lineEdit_3");
	lineEdit_3->setGeometry(QRect(40, 640, 201, 31));
	label_52 = new QLabel(tab_4);
	label_52->setObjectName("label_52");
	label_52->setGeometry(QRect(440, 470, 131, 31));
	lineEdit_4 = new QLineEdit(tab_4);
	lineEdit_4->setObjectName("lineEdit_4");
	lineEdit_4->setGeometry(QRect(430, 500, 201, 31));
	lineEdit_4->setEchoMode(QLineEdit::EchoMode::Password);
	label_53 = new QLabel(tab_4);
	label_53->setObjectName("label_53");
	label_53->setGeometry(QRect(440, 540, 131, 31));
	lineEdit_5 = new QLineEdit(tab_4);
	lineEdit_5->setObjectName("lineEdit_5");
	lineEdit_5->setGeometry(QRect(430, 570, 201, 31));
	pushButton_3 = new QPushButton(tab_4);
	pushButton_3->setObjectName("pushButton_3");
	pushButton_3->setGeometry(QRect(660, 640, 111, 31));
	pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"font-size:18px;\n"
		"  border-radius: 10px;\n"
		"  background: #699CCC;\n"
		"  color:white;\n"
		"\n"
		"\n"
		"\n"
		"}\n"
		"QPushButton:hover{\n"
		"background: white;\n"
		"color:Black;\n"
		"}\n"
		""));
	QObject::connect(pushButton_3, &QPushButton::clicked, [=]() {
		try {
			QString firstName = lineEdit->text();
			QString lastName = lineEdit_2->text();
			QString nationalId = lineEdit_3->text();
			QString password = lineEdit_4->text();
			QString phoneNumber = lineEdit_5->text();
			bool isNationalIdNumm = true;
			bool isPhoneNumm = true;
			for (int i = 0; i < nationalId.size(); i++) {
				if (nationalId[i].isSymbol() || nationalId[i].isSpace() || nationalId[i].isLetter() || nationalId[i].isMark()) {
					isNationalIdNumm = false;
				}
			}
			for (int i = 0; i < phoneNumber.size(); i++) {


				if (phoneNumber[i].isSymbol() || phoneNumber[i].isSpace() || phoneNumber[i].isLetter() || phoneNumber[i].isMark()) {
					isPhoneNumm = false;
				}
			}
			if (firstName.isEmpty()) {
				throw exception("Enter Your First Name");
			}
			else if (lastName.isEmpty()) {
				throw exception("Enter Your Last Name");
			}
			else if (nationalId.isEmpty()) {
				throw exception("Enter Your National id");
			}
			else if (nationalId.length() != 14) {
				throw exception("Enter Valid National id");
			}
			else if (isNationalIdNumm == false) {
				throw exception("Enter Valid National id");
			}
			else if (password.isEmpty()) {
				throw exception("Enter A Password");
			}
			else if (password.length() < 8) {
				throw exception("Password Must Exceed 8 Characters");
			}
			else if (phoneNumber.isEmpty()) {
				throw exception("Enter Your Phone Number");
			}
			else if (phoneNumber.length() != 11) {
				throw exception("Enter Valid Phone Number");
			}
			else if (isPhoneNumm == false) {
				throw exception("Enter Valid Phone Number");
			}
			else if (system->FindUser(nationalId.toLocal8Bit().constData())) {

				throw exception("National Id already Exists");

			}
			system->AddAdmin(firstName.toLocal8Bit().constData(), lastName.toLocal8Bit().constData(), nationalId.toLocal8Bit().constData(), password.toLocal8Bit().constData(), phoneNumber.toLocal8Bit().constData());
			lineEdit->setText("");
			lineEdit_2->setText("");
			lineEdit_3->setText("");
			lineEdit_4->setText("");
			lineEdit_5->setText("");
			drawUsers(scrollAreaWidgetContents, system, scrollArea);
		}
		catch (const exception& e) {
			QDialog* qdialog = new QDialog();
			Dialog dialog;
			dialog.setupUi(qdialog, e.what());
			qdialog->exec();
		}
		});
	label_22->setText(QCoreApplication::translate("Dashboard", "All Users", nullptr));
	label_15->setText(QCoreApplication::translate("Dashboard", "#ID", nullptr));
	label_16->setText(QCoreApplication::translate("Dashboard", "First Name", nullptr));
	label_17->setText(QCoreApplication::translate("Dashboard", "Last Name", nullptr));
	label_18->setText(QCoreApplication::translate("Dashboard", "Phone Number", nullptr));
	label_48->setText(QCoreApplication::translate("Dashboard", "Add Admin", nullptr));
	lineEdit->setText(QString());
	lineEdit->setPlaceholderText(QCoreApplication::translate("Dashboard", "Enter First Name", nullptr));
	label_49->setText(QCoreApplication::translate("Dashboard", "First Name :", nullptr));
	label_50->setText(QCoreApplication::translate("Dashboard", "Last Name :", nullptr));
	lineEdit_2->setText(QString());
	lineEdit_2->setPlaceholderText(QCoreApplication::translate("Dashboard", "Enter Last Name", nullptr));
	label_51->setText(QCoreApplication::translate("Dashboard", "National ID :", nullptr));
	lineEdit_3->setText(QString());
	lineEdit_3->setPlaceholderText(QCoreApplication::translate("Dashboard", "Enter National ID", nullptr));
	label_52->setText(QCoreApplication::translate("Dashboard", "Password :", nullptr));
	lineEdit_4->setText(QString());
	lineEdit_4->setPlaceholderText(QCoreApplication::translate("Dashboard", "Enter Password", nullptr));
	label_53->setText(QCoreApplication::translate("Dashboard", "Phone Number :", nullptr));
	lineEdit_5->setText(QString());
	lineEdit_5->setPlaceholderText(QCoreApplication::translate("Dashboard", "Enter Phone Number", nullptr));
	pushButton_3->setText(QCoreApplication::translate("Dashboard", "Add", nullptr));
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
			nationalID->setGeometry(QRect(50, 3, 241, 31));
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
			if (it->second->GetNationalId() == system->currentUserId) {
				deleteButton->setVisible(false);
			}
			QLabel* profileIcon = new QLabel(userCard);
			profileIcon->setObjectName("profileIcon" + i);
			profileIcon->setGeometry(QRect(7, 5, 31, 31));
			Admin* admin = dynamic_cast<Admin*>(it->second);
			if (admin) {
				profileIcon->setPixmap(QPixmap(QString::fromUtf8(":/Assets/admin.png")));
			}
			else {
				profileIcon->setPixmap(QPixmap(QString::fromUtf8("Assets/profile.png")));
			}
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
	string userCount = "All Users : " + to_string(system->UserCounter());
	label_32->setText(QCoreApplication::translate("Dashboard", userCount.c_str(), nullptr));
}
UsersDashboard::~UsersDashboard()
{}
