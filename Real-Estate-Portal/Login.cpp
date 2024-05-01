#include "Login.h"
#include "Dialog.h"
#include "Propertycard.h"
Login::Login(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}
void Login::setupUi(QStackedWidget* Form, System* system, Home* home, Signup* signup) {
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
		"background: rgba(255, 255, 255, 0.1) url(Assets/Login.png);\n"
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
	pushButton->setGeometry(QRect(120, 320, 151, 50));
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
	label_4 = new QLabel(frame_2);
	label_4->setObjectName("label_4");
	label_4->setGeometry(QRect(80, 389, 201, 20));
	label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"		font-weight:700;\n"
		"		color:black;\n"
		"font-size:15px\n"
		"		}"));
	pushButton_2 = new QPushButton(frame_2);
	pushButton_2->setObjectName("pushButton_2");
	pushButton_2->setGeometry(QRect(245, 387, 61, 24));
	pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"text-decoration:underline;\n"
		"background:white;\n"
		"font-size:15px;\n"
		"color:#3F6793;\n"
		"font-weight:700;\n"
		"}\n"
		"QPushButton:hover{\n"
		"color: #1B425E;\n"
		"}"));

	retranslateUi(Form);
	QObject::connect(pushButton_2, &QPushButton::clicked, pushButton_2, [=]() {
		try {
			Form->hide();
			Form->setCurrentWidget(signup);
			signup->setupUi(Form, system);
			Form->show();
		}
		catch (const exception& e) {
			qDebug() << e.what();
		}
		});
	QObject::connect(pushButton, &QPushButton::clicked, pushButton, [=]() {
		try {
			onPushButton1Click(system);
			Form->hide();
			Form->setCurrentWidget(home);
			home->setupUi(Form,system);
			HoverEventFilter* filter0 = new HoverEventFilter(home->widget_2, home->pushButton_4, home, ":/Assets/menu.png", ":/Assets/dashboard.png");
			HoverEventFilter* filter1 = new HoverEventFilter(home->widget_3, home->pushButton_5, home, ":/Assets/homeWhite.png", ":/Assets/home.png");
			HoverEventFilter* filter2 = new HoverEventFilter(home->widget_4, home->pushButton_8, home, ":/Assets/left-and-right-arrowsWhite.png", ":/Assets/left-and-right-arrows.png");
			Form->show();
		}
		catch (const exception& e) {
			QDialog* qdialog = new QDialog();
			Dialog dialog;
			dialog.setupUi(qdialog, e.what());
			qdialog->exec();
		}
		//Form->show();
		});
	QMetaObject::connectSlotsByName(Form);
}
void Login::onPushButton1Click(System* system) {
	QString nationalId = lineEdit->text();
	QString password = lineEdit_2->text();
	if (nationalId.isEmpty()) {
		throw exception("Enter National ID");
	}
	else if (password.isEmpty()) {
		throw exception("Enter Password");
	}
	else {
		system->Login(nationalId.toInt(), password.toLocal8Bit().constData());
	}
}
void Login::retranslateUi(QStackedWidget* Form) {
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
	label_4->setText(QCoreApplication::translate("Form", "<p>Don't have an account? ", nullptr));
	pushButton_2->setText(QCoreApplication::translate("Form", "Sign up", nullptr));
} // retranslateUi

Login::~Login()
{}
