#include "ChangePassword.h"
#include "MyProfile.h"
ChangePassword::ChangePassword(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}

void ChangePassword::setupUi(QStackedWidget* ChangePasswordClass, System* system, MyProfile* myprofile)
{
	if (ChangePasswordClass->objectName().isEmpty())
		ChangePasswordClass->setObjectName("ChangePasswordClass");
	ChangePasswordClass->resize(801, 741);
	widget = new QWidget(ChangePasswordClass);
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
	label->setGeometry(QRect(80, 35, 311, 41));
	pushButton = new QPushButton(frame);
	pushButton->setObjectName("pushButton");
	pushButton->setGeometry(QRect(30, 30, 41, 51));
	pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"border:none;\n"
		"background:#1B425E;\n"
		"}"));
	QIcon icon;
	icon.addFile(QString::fromUtf8(":/Assets/padlockg64.png"), QSize(), QIcon::Normal, QIcon::Off);
	pushButton->setIcon(icon);
	pushButton->setIconSize(QSize(30, 30));
	label_2 = new QLabel(widget);
	label_2->setObjectName("label_2");
	label_2->setGeometry(QRect(70, 120, 201, 41));
	frame_2 = new QFrame(widget);
	frame_2->setObjectName("frame_2");
	frame_2->setGeometry(QRect(40, 170, 361, 161));
	frame_2->setFrameShape(QFrame::Shape::StyledPanel);
	frame_2->setFrameShadow(QFrame::Shadow::Raised);
	lineEdit = new QLineEdit(frame_2);
	lineEdit->setObjectName("lineEdit");
	lineEdit->setGeometry(QRect(32, 30, 291, 41));
	lineEdit->setStyleSheet(QString::fromUtf8(""));
	lineEdit->setEchoMode(QLineEdit::Password);
	lineEdit_2 = new QLineEdit(frame_2);
	lineEdit_2->setObjectName("lineEdit_2");
	lineEdit_2->setGeometry(QRect(30, 90, 291, 41));
	lineEdit_2->setStyleSheet(QString::fromUtf8(""));
	lineEdit_2->setEchoMode(QLineEdit::Password);
	pushButton_2 = new QPushButton(widget);
	pushButton_2->setObjectName("pushButton_2");
	pushButton_2->setGeometry(QRect(540, 680, 181, 41));
	pushButton_3 = new QPushButton(widget);
	pushButton_3->setObjectName("pushButton_3");
	pushButton_3->setGeometry(QRect(40, 131, 21, 20));
	QIcon icon1;
	icon1.addFile(QString::fromUtf8(":/Assets/padlock.png"), QSize(), QIcon::Normal, QIcon::Off);
	pushButton_3->setIcon(icon1);
	pushButton_3->setIconSize(QSize(20, 20));

	retranslateUi(ChangePasswordClass, system);
	QObject::connect(pushButton_2, &QPushButton::clicked, [=]() { {
			try {
				DoneButtonClick(system);
				ChangePasswordClass->hide();
				ChangePasswordClass->setCurrentWidget(myprofile);
				myprofile->setupUi(ChangePasswordClass, system);
				ChangePasswordClass->show();
			}
			catch (const exception& e) {
				QDialog* qdialog = new QDialog();
				Dialog dialog;
				dialog.setupUi(qdialog, e.what());
				qdialog->exec();
			}
		}
		});
	QMetaObject::connectSlotsByName(ChangePasswordClass);
} // setupUi
void ChangePassword::DoneButtonClick(System* system) {
	QString CurrentPassword = lineEdit->text();
	QString NewPassword = lineEdit_2->text();
	if (NewPassword.isEmpty()) {
		throw exception("Enter A Password");
	}
	if (NewPassword.length() < 8) {
		throw exception("Password Must Exceed 8 Characters");
	}
	system->EditProfile(system->GetUser(system->currentUserId)->GetFirstName(), system->GetUser(system->currentUserId)->GetLastName(), system->GetUser(system->currentUserId)->GetMobileNumber(), CurrentPassword.toLocal8Bit().constData(), NewPassword.toLocal8Bit().constData());
}
void ChangePassword::retranslateUi(QStackedWidget* ChangePasswordClass, System* system)
{
	User* currentUser = system->GetUser(system->currentUserId);
	ChangePasswordClass->setWindowTitle(QCoreApplication::translate("ChangePasswordClass", "ChangePassword", nullptr));
	label->setText(QCoreApplication::translate("ChangePasswordClass", "Change Password", nullptr));
	pushButton->setText(QString());
	label_2->setText(QCoreApplication::translate("ChangePasswordClass", "Change Password", nullptr));
	lineEdit->setPlaceholderText(QCoreApplication::translate("ChangePasswordClass", " CurrentPassword", nullptr));
	lineEdit_2->setPlaceholderText(QCoreApplication::translate("ChangePasswordClass", "  NewPassword", nullptr));
	pushButton_2->setText(QCoreApplication::translate("ChangePasswordClass", "Done", nullptr));
	pushButton_3->setText(QString());
} // retranslateUi
ChangePassword::~ChangePassword()
{}
