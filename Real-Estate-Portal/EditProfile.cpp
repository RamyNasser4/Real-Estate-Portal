#include "EditProfile.h"
#include "MyProfile.h"
EditProfile::EditProfile(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
void EditProfile::setupUi(QStackedWidget* EditProfileClass, System* system, MyProfile* myprofile)
{
	if (EditProfileClass->objectName().isEmpty())
		EditProfileClass->setObjectName("EditProfileClass");
	EditProfileClass->resize(802, 741);
	widget = new QWidget(EditProfileClass);
	widget->setObjectName("widget");
	widget->setGeometry(QRect(0, 0, 801, 741));
	widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
		"background:#CCD0CD;\n"
		"}\n"
		"#label{\n"
		"color: #CCD0CD;\n"
		"font-weight:700;\n"
		"font-size:30px;\n"
		"}\n"
		"QLabel{\n"
		"font-size:25px;\n"
		"background:#CCD0CD;\n"
		"font-weight:600;\n"
		"color:#2B2A2A;\n"
		"}\n"
		"#frame_2{\n"
		"background:#1B425E;\n"
		"border-radius:5px;\n"
		"}\n"
		"#frame_3{\n"
		"background:#1B425E;\n"
		"border-radius:5px;\n"
		"}\n"
		"QLineEdit{\n"
		"background:#CCD0CD;\n"
		"color:black;\n"
		"font-size:18px;\n"
		"border:none;\n"
		"border-radius:5px;\n"
		"}\n"
		"#pushButton_2{\n"
		"background:#1B425E;\n"
		"color:white;\n"
		"border:none;\n"
		"border-radius:5px;\n"
		"}\n"
		"#pushButton_2:hover{\n"
		"background:white;\n"
		"color:#1B425E;\n"
		"}\n"
		"#pushButton_3{\n"
		"border:none;\n"
		"}\n"
		"#pushButton_4{\n"
		"border:none;\n"
		"}"));
	frame = new QFrame(widget);
	frame->setObjectName("frame");
	frame->setGeometry(QRect(-1, -1, 801, 111));
	frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
		"background:#1B425E;\n"
		"}"));
	frame->setFrameShape(QFrame::Shape::StyledPanel);
	frame->setFrameShadow(QFrame::Shadow::Raised);
	label = new QLabel(frame);
	label->setObjectName("label");
	label->setGeometry(QRect(80, 40, 171, 31));
	pushButton = new QPushButton(frame);
	pushButton->setObjectName("pushButton");
	pushButton->setGeometry(QRect(30, 30, 41, 51));
	pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"border:none;\n"
		"background:#1B425E;\n"
		"}"));
	QIcon icon;
	icon.addFile(QString::fromUtf8(":/Assets/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
	pushButton->setIcon(icon);
	pushButton->setIconSize(QSize(30, 30));
	label_3 = new QLabel(widget);
	label_3->setObjectName("label_3");
	label_3->setGeometry(QRect(70, 120, 51, 41));
	frame_3 = new QFrame(widget);
	frame_3->setObjectName("frame_3");
	frame_3->setGeometry(QRect(40, 170, 361, 221));
	frame_3->setFrameShape(QFrame::Shape::StyledPanel);
	frame_3->setFrameShadow(QFrame::Shadow::Raised);
	lineEdit_4 = new QLineEdit(frame_3);
	lineEdit_4->setObjectName("lineEdit_4");
	lineEdit_4->setGeometry(QRect(32, 150, 291, 41));
	lineEdit_4->setStyleSheet(QString::fromUtf8(""));
	lineEdit_4->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
	lineEdit_5 = new QLineEdit(frame_3);
	lineEdit_5->setObjectName("lineEdit_5");
	lineEdit_5->setGeometry(QRect(30, 30, 291, 41));
	lineEdit_5->setStyleSheet(QString::fromUtf8(""));
	lineEdit_6 = new QLineEdit(frame_3);
	lineEdit_6->setObjectName("lineEdit_6");
	lineEdit_6->setGeometry(QRect(30, 90, 291, 41));
	lineEdit_6->setStyleSheet(QString::fromUtf8(""));
	pushButton_2 = new QPushButton(widget);
	pushButton_2->setObjectName("pushButton_2");
	pushButton_2->setGeometry(QRect(540, 680, 181, 41));
	pushButton_4 = new QPushButton(widget);
	pushButton_4->setObjectName("pushButton_4");
	pushButton_4->setGeometry(QRect(38, 130, 31, 21));
	QIcon icon1;
	icon1.addFile(QString::fromUtf8(":/Assets/editing.png"), QSize(), QIcon::Normal, QIcon::Off);
	pushButton_4->setIcon(icon1);
	pushButton_4->setIconSize(QSize(20, 20));
	QObject::connect(pushButton_2, &QPushButton::clicked, [=]() { {
			try {
				DoneButtonClick(system);
				EditProfileClass->hide();
				EditProfileClass->setCurrentWidget(myprofile);
				myprofile->setupUi(EditProfileClass, system);
				EditProfileClass->show();
			}
			catch (const exception& e) {
				QDialog* qdialog = new QDialog();
				Dialog dialog;
				dialog.setupUi(qdialog, e.what());
				qdialog->exec();
			}
		}
		});
	retranslateUi(EditProfileClass, system);

	QMetaObject::connectSlotsByName(EditProfileClass);
} // setupUi
void EditProfile::DoneButtonClick(System* system) {
	QString firstName = lineEdit_5->text();
	QString lastName = lineEdit_6->text();
	QString number = lineEdit_4->text();
	bool isPhoneNum = true;
	for (int i = 0; i < number.size(); i++) {
		if (number[i].isSymbol() || number[i].isSpace() || number[i].isLetter() || number[i].isMark()) {
			isPhoneNum = false;
		}
	}
	if (firstName.isEmpty()) {
		throw exception("First name can't be empty");
	}
	if (lastName.isEmpty()) {
		throw exception("last name can't be empty");
	}
	if (number.isEmpty()) {
		throw exception("Phone number can't be empty");
	}
	if (number.length() != 11) {
		throw exception("Enter Valid Phone Number");
	}
	if (!isPhoneNum) {
		throw exception("Enter Valid Phone Number");
	}
	system->EditProfile(firstName.toLocal8Bit().constData(), lastName.toLocal8Bit().constData(), number.toLocal8Bit().constData(), system->GetUser(system->currentUserId)->GetPassword(), system->GetUser(system->currentUserId)->GetPassword());

}
void EditProfile::retranslateUi(QStackedWidget* EditProfileClass, System* system)
{
	User* currentUser = system->GetUser(system->currentUserId);
	EditProfileClass->setWindowTitle(QCoreApplication::translate("EditProfileClass", "EditProfile", nullptr));
	label->setText(QCoreApplication::translate("EditProfileClass", "Edit Profile", nullptr));
	pushButton->setText(QString());
	label_3->setText(QCoreApplication::translate("EditProfileClass", "Edit ", nullptr));
	lineEdit_4->setPlaceholderText(QCoreApplication::translate("EditProfileClass", "  Edit Number", nullptr));
	lineEdit_4->setText(currentUser->GetMobileNumber().c_str());
	lineEdit_5->setPlaceholderText(QCoreApplication::translate("EditProfileClass", "  Edit FirstName", nullptr));
	lineEdit_5->setText(currentUser->GetFirstName().c_str());
	lineEdit_6->setPlaceholderText(QCoreApplication::translate("EditProfileClass", "  Edit LastName", nullptr));
	lineEdit_6->setText(currentUser->GetLastName().c_str());
	pushButton_2->setText(QCoreApplication::translate("EditProfileClass", "Done", nullptr));
	pushButton_4->setText(QString());
} // retranslateUi

EditProfile::~EditProfile()
{}
