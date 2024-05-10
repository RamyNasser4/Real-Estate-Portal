#include "Home.h"

Home::Home(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
void Home::setupUi(QStackedWidget* HomeClass, System* system, Login* login, Signup* signup)
{
	if (HomeClass->objectName().isEmpty())
		HomeClass->setObjectName("HomeClass");
	HomeClass->resize(1019, 720);
	widget = new QWidget(HomeClass);
	widget->setObjectName("widget");
	widget->setGeometry(QRect(-10, 0, 231, 721));
	widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
		"background:#F5F6FA;\n"
		"\n"
		"}\n"
		"QPushButton{\n"
		"font-family : sans-serif;\n"
		"font-weight:700;\n"
		"font-size:18px;\n"
		"border:none;\n"
		"color : #636363;\n"
		"}\n"
		"/*QPushButton:hover\n"
		"{\n"
		"background-color: #407BFF;\n"
		"color:white;\n"
		"}*/"));
	pushButton = new QPushButton(widget);
	pushButton->setObjectName("pushButton");
	pushButton->setGeometry(QRect(-60, 30, 291, 51));
	pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"font-family : sans-serif;\n"
		"font-weight:700;\n"
		"}"));
	QIcon icon;
	icon.addFile(QString::fromUtf8("Assets/Screenshot_2024-04-24_021204-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
	pushButton->setIcon(icon);
	pushButton->setIconSize(QSize(36, 36));
	stackedWidget = new QStackedWidget(HomeClass);
	stackedWidget->setObjectName("stackedWidget");
	stackedWidget->setGeometry(QRect(220, -20, 811, 721));
	stackedWidget->setStyleSheet(QString::fromUtf8("QWidget\n"
		"{\n"
		"background-color:#CCD0CD;\n"
		"\n"
		"}\n"
		"QComboBox {\n"
		"    color: #546E7A;\n"
		"    background-color: transparent;\n"
		"    selection-background-color: transparent;\n"
		"    outline: 0;\n"
		"}\n"
		"\n"
		"QComboBox QAbstractItemView\n"
		"{\n"
		"    selection-background-color: transparent;\n"
		"    outline: 0;\n"
		"}\n"
		"QComboBox:on {\n"
		"  background-color:#3f3f46;\n"
		"}\n"
		"\n"
		"QComboBox:down-arrow {\n"
		"  border-style:none;\n"
		"  border-left: 1px solid #007acc;\n"
		"}\n"
		"\n"
		"QComboBox::drop-down {\n"
		"    subcontrol-origin: padding;\n"
		"    subcontrol-position: top right;\n"
		"    width: 15px;\n"
		"    border-left-width: 0px;\n"
		"    border-left-color: darkgray;\n"
		"    border-left-style: solid;\n"
		"    border-top-right-radius: 3px;\n"
		"    border-bottom-right-radius: 3px;\n"
		"}QComboBox:drop-down {\n"
		"  border-style:none;\n"
		"}\n"
		"QComboBox:hover{\n"
		"border: 1px solid #3daee9;\n"
		"    color: #eff0f1;\n"
		"}\n"
		"QComboBox:item {\n"
		"    padding-left: 20px; \n"
		"}\n"
		"QComboBox:item:selected {\n"
		""
		"    padding-left: 20px;  \n"
		"    border: 2px solid black;\n"
		"}\n"
		"QComboBox:item:checked {\n"
		"    padding-left: 20px;  \n"
		"    font-weight: bold;\n"
		"}"));
	page = new Listings();
	Admin* admin = dynamic_cast<Admin*>(system->users[system->currentUserId]);
	if (admin) {
		QString dashboard = "Dashboard";
		widget_2 = new ClickableWidget(stackedWidget, system, dashboard, widget);
		widget_2->setObjectName("widget_2");
		widget_2->setGeometry(QRect(10, 150, 219, 50));
		widget_2->setStyleSheet(QString::fromUtf8("QWidget:hover{\n"
			"background-color:#407BFF;\n"
			"}\n"
			"QPushButton:hover{\n"
			"background-color:#407BFF;\n"
			"background-image: url(:/Assets/menu.png);\n"
			"color:white;\n"
			"}"));
		pushButton_4 = new QPushButton(widget_2);
		pushButton_4->setObjectName("pushButton_4");
		pushButton_4->setGeometry(QRect(18, 0, 201, 50));
		pushButton_4->setMinimumSize(QSize(0, 50));
		pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
			"	background-image: url(:/Assets/dashboard.png);\n"
			"background-repeat:no-repeat;\n"
			"background-position:left center;\n"
			"}\n"
			"QPushButton:hover{\n"
			"	background-image: url(:/Assets/menu.png);\n"
			"}"));
		pushButton_4->setIconSize(QSize(36, 36));
		pushButton_4->setFlat(false);
		pushButton_4->setText(QCoreApplication::translate("HomeClass", "     Dashboard", nullptr));
		pushButton_4->setShortcut(QString());
	}
	QString listings = "Listings";
	widget_3 = new ClickableWidget(stackedWidget, system, listings, widget);
	widget_3->setObjectName("widget_3");
	widget_3->setGeometry(QRect(10, 0, 219, 50));
	widget_3->setStyleSheet(QString::fromUtf8("QWidget:hover{\n"
		"background-color:#407BFF;\n"
		"}\n"
		"/*QPushButton:hover{\n"
		"background-color:#407BFF;\n"
		"background-image: url(:/Assets/menu.png);\n"
		"color:white;\n"
		"}*/"));
	pushButton_5 = new QPushButton(widget_3);
	pushButton_5->setObjectName("pushButton_5");
	pushButton_5->setGeometry(QRect(17, 0, 204, 51));
	pushButton_5->setMaximumSize(QSize(700, 16777215));
	pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"	background-image: url(:/Assets/home.png);\n"
		"background-repeat:no-repeat;\n"
		"background-position:left center;\n"
		"}"));
	pushButton_5->setIconSize(QSize(36, 36));
	QString compare = "Compare";
	widget_4 = new ClickableWidget(stackedWidget, system, compare, widget);
	widget_4->setObjectName("widget_4");
	widget_4->setGeometry(QRect(10, 50, 219, 50));
	widget_4->setStyleSheet(QString::fromUtf8("QWidget:hover{\n"
		"background-color:#407BFF;\n"
		"}\n"
		"/*QPushButton:hover{\n"
		"background-color:#407BFF;\n"
		"background-image: url(:/Assets/menu.png);\n"
		"color:white;\n"
		"}*/"));
	pushButton_8 = new QPushButton(widget_4);
	pushButton_8->setObjectName("pushButton_8");
	pushButton_8->setGeometry(QRect(18, 0, 201, 50));
	pushButton_8->setMinimumSize(QSize(0, 50));
	pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"	background-image: url(:/Assets/left-and-right-arrows.png);\n"
		"background-repeat:no-repeat;\n"
		"background-position:left center;\n"
		"}\n"
		"/*QPushButton:hover{\n"
		"	background-image: url(:/Assets/menu.png);\n"
		"}*/"));
	pushButton_8->setIconSize(QSize(36, 36));
	pushButton_8->setFlat(false);
	QString profile = "Profile";
	widget_7 = new ClickableWidget(stackedWidget,system,profile,widget);
	widget_7->setObjectName("widget_7");
	widget_7->setGeometry(QRect(10, 100, 219, 50));
	widget_7->setStyleSheet(QString::fromUtf8("QWidget:hover{\n"
		"background-color:#407BFF;\n"
		"}\n"
		"/*QPushButton:hover{\n"
		"background-color:#407BFF;\n"
		"background-image: url(:/Assets/menu.png);\n"
		"color:white;\n"
		"}*/"));
	pushButton_11 = new QPushButton(widget_7);
	pushButton_11->setObjectName("pushButton_11");
	pushButton_11->setGeometry(QRect(18, 0, 201, 50));
	pushButton_11->setMinimumSize(QSize(0, 50));
	pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"	background-image: url(:/Assets/profileg32.png);\n"
		"background-repeat:no-repeat;\n"
		"background-position:left center;\n"
		"}\n"
		"/*QPushButton:hover{\n"
		"	background-image: url(:/Assets/menu.png);\n"
		"}*/"));
	pushButton_11->setIconSize(QSize(36, 36));
	pushButton_11->setFlat(false);
	QString logout = "Login";
	widget_6 = new ClickableWidget(HomeClass, system, logout, widget,login,this,signup);
	widget_6->setObjectName("widget_6");
	widget_6->setGeometry(QRect(10, 670, 219, 50));
	widget_6->setStyleSheet(QString::fromUtf8("QWidget:hover{\n"
		"background-color:#407BFF;\n"
		"}\n"
		"/*QPushButton:hover{\n"
		"background-color:#407BFF;\n"
		"background-image: url(:/Assets/menu.png);\n"
		"color:white;\n"
		"}*/"));
	pushButton_6 = new QPushButton(widget_6);
	pushButton_6->setObjectName("pushButton_6");
	pushButton_6->setGeometry(QRect(18, 0, 201, 50));
	pushButton_6->setMinimumSize(QSize(0, 50));
	pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"	background-image: url(:/Assets/logoutGrey32.png);\n"
		"background-repeat:no-repeat;\n"
		"background-position:left center;\n"
		"}\n"
		"/*QPushButton:hover{\n"
		"	background-image: url(:/Assets/menu.png);\n"
		"}*/"));
	pushButton_6->setIconSize(QSize(36, 36));
	pushButton_6->setFlat(false);
	page->setObjectName("Listings");
	label = new QLabel(page);
	label->setObjectName("label");
	label->setGeometry(QRect(-20, 40, 251, 61));
	label->setStyleSheet(QString::fromUtf8("QLabel\n"
		"{\n"
		"font-size:34px;\n"
		"}"));
	pushButton_3 = new QPushButton(page);
	pushButton_3->setObjectName("pushButton_3");
	pushButton_3->setGeometry(QRect(370, 60, 75, 24));
	comboBox = new QComboBox(page);
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->addItem(QString());
	comboBox->setObjectName("comboBox");
	comboBox->setGeometry(QRect(530, 60, 171, 21));
	stackedWidget->addWidget(page);
	page->setupUi(stackedWidget, system);
	page_2 = new QWidget();
	page_2->setObjectName("page_2");
	stackedWidget->addWidget(page_2);
	QObject::connect(pushButton_5, &QPushButton::clicked, [=]() {
		if (stackedWidget->currentWidget()->objectName() != "Listings") {
			for (int i = 0; i < stackedWidget->count(); ++i) {
				QWidget* currentWidget = stackedWidget->widget(i);
				if (currentWidget->objectName() == "Listings") {
					currentWidget = new Listings();
					stackedWidget->hide();
					stackedWidget->setCurrentIndex(i);
					qDebug() << stackedWidget->currentWidget()->objectName();
					Listings* listings = dynamic_cast<Listings*>(currentWidget);
					listings->setupUi(stackedWidget, system);
					stackedWidget->show();
					break;
				}
			}
		}
		});
	QObject::connect(pushButton_8, &QPushButton::clicked, [=]() {
		qDebug() << system->propertyComparison.size();
		if (system->propertyComparison.size() == 2) {
			if (stackedWidget->currentWidget()->objectName() != "Compare") {
				bool addedBefore = false;
				for (int i = 0; i < stackedWidget->count(); ++i) {
					QWidget* currentWidget = stackedWidget->widget(i);
					if (currentWidget->objectName() == "Compare") {
						currentWidget = new Compare();
						Compare* compare = dynamic_cast<Compare*>(currentWidget);
						stackedWidget->hide();
						stackedWidget->setCurrentIndex(i);
						qDebug() << stackedWidget->currentWidget()->objectName();
						compare->setupUi(stackedWidget, system);
						stackedWidget->show();
						addedBefore = true;
						break;
					}
				}
				if (!addedBefore) {
					Compare* compare = new Compare();
					compare->setObjectName("Compare");
					stackedWidget->hide();
					stackedWidget->addWidget(compare);
					stackedWidget->setCurrentWidget(compare);
					compare->setupUi(stackedWidget, system);
					stackedWidget->show();
				}
			}
		}
		else if (system->propertyComparison.size() == 3) {
			if (stackedWidget->currentWidget()->objectName() != "Compare") {
				bool addedBefore = false;
				for (int i = 0; i < stackedWidget->count(); ++i) {
					QWidget* currentWidget = stackedWidget->widget(i);
					if (currentWidget->objectName() == "Compare") {
						currentWidget = new Compare_3();
						Compare_3* compare = dynamic_cast<Compare_3*>(currentWidget);
						stackedWidget->hide();
						stackedWidget->setCurrentIndex(i);
						qDebug() << stackedWidget->currentWidget()->objectName();
						compare->setupUi(stackedWidget, system);
						stackedWidget->show();
						addedBefore = true;
						break;
					}
				}
				if (!addedBefore) {
					Compare_3* compare = new Compare_3();
					compare->setObjectName("Compare");
					stackedWidget->hide();
					stackedWidget->addWidget(compare);
					stackedWidget->setCurrentWidget(compare);
					compare->setupUi(stackedWidget, system);
					stackedWidget->show();
				}
			}
		}
		else if (system->propertyComparison.size() == 4) {
			if (stackedWidget->currentWidget()->objectName() != "Compare") {
				bool addedBefore = false;
				for (int i = 0; i < stackedWidget->count(); ++i) {
					QWidget* currentWidget = stackedWidget->widget(i);
					if (currentWidget->objectName() == "Compare") {
						currentWidget = new Compare_4();
						Compare_4* compare = dynamic_cast<Compare_4*>(currentWidget);
						stackedWidget->hide();
						stackedWidget->setCurrentIndex(i);
						qDebug() << stackedWidget->currentWidget()->objectName();
						compare->setupUi(stackedWidget, system);
						stackedWidget->show();
						addedBefore = true;
						break;
					}
				}
				if (!addedBefore) {
					Compare_4* compare = new Compare_4();
					compare->setObjectName("Compare");
					stackedWidget->hide();
					stackedWidget->addWidget(compare);
					stackedWidget->setCurrentWidget(compare);
					compare->setupUi(stackedWidget, system);
					stackedWidget->show();
				}
			}
		}
		else {
			QDialog* qdialog = new QDialog();
			Dialog dialog;
			dialog.setupUi(qdialog, "Add Properties to Compare");
			qdialog->exec();
		}
		});
	QObject::connect(pushButton_4, &QPushButton::clicked, [=]() {
		if (stackedWidget->currentWidget()->objectName() != "Dashboard") {
			bool addedBefore = false;
			for (int i = 0; i < stackedWidget->count(); ++i) {
				QWidget* currentWidget = stackedWidget->widget(i);
				if (currentWidget->objectName() == "Dashboard") {
					currentWidget = new Dashboard();
					stackedWidget->hide();
					stackedWidget->setCurrentIndex(i);
					qDebug() << stackedWidget->currentWidget()->objectName();
					Dashboard* dashboard = dynamic_cast<Dashboard*>(currentWidget);
					dashboard->setupUi(stackedWidget, system);
					stackedWidget->show();
					addedBefore = true;
					break;
				}
			}
			if (!addedBefore) {
				Dashboard* dashboard = new Dashboard();
				dashboard->setObjectName("Dashboard");
				stackedWidget->hide();
				stackedWidget->addWidget(dashboard);
				stackedWidget->setCurrentWidget(dashboard);
				dashboard->setupUi(stackedWidget, system);
				stackedWidget->show();
			}
		}
		});
	QObject::connect(pushButton_11, &QPushButton::clicked, [=]() {
		if (stackedWidget->currentWidget()->objectName() != "Profile") {
			bool addedBefore = false;
			for (int i = 0; i < stackedWidget->count(); ++i) {
				QWidget* currentWidget = stackedWidget->widget(i);
				if (currentWidget->objectName() == "Profile") {
					currentWidget = new MyProfile();
					stackedWidget->hide();
					stackedWidget->setCurrentIndex(i);
					qDebug() << stackedWidget->currentWidget()->objectName();
					MyProfile* profile = dynamic_cast<MyProfile*>(currentWidget);
					profile->setupUi(stackedWidget, system);
					stackedWidget->show();
					addedBefore = true;
					break;
				}
			}
			if (!addedBefore) {
				MyProfile* profile = new MyProfile();
				profile->setObjectName("Profile");
				stackedWidget->hide();
				stackedWidget->addWidget(profile);
				stackedWidget->setCurrentWidget(profile);
				profile->setupUi(stackedWidget, system);
				stackedWidget->show();
			}
		}
		});
	QObject::connect(pushButton_6, &QPushButton::clicked, [=]() {
		qDebug() << "logout clicked";
		system->Logout();
		HomeClass->hide();
		HomeClass->setCurrentIndex(0);
		login->setupUi(HomeClass, system, this, signup);
		HomeClass->show();
		});
	retranslateUi(HomeClass);

	stackedWidget->setCurrentIndex(0);


	QMetaObject::connectSlotsByName(HomeClass);
} // setupUi
void Home::retranslateUi(QStackedWidget* HomeClass)
{
	HomeClass->setWindowTitle(QCoreApplication::translate("HomeClass", "Home", nullptr));
	pushButton->setText(QCoreApplication::translate("HomeClass", "     Listings", nullptr));
#if QT_CONFIG(shortcut)
	pushButton_5->setText(QCoreApplication::translate("HomeClass", "Listings", nullptr));
	pushButton_8->setText(QCoreApplication::translate("HomeClass", "  Compare", nullptr));
#endif // QT_CONFIG(shortcut)
	pushButton_6->setText(QCoreApplication::translate("HomeClass", "Log out", nullptr));
#if QT_CONFIG(shortcut)
	pushButton_6->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
	pushButton_11->setText(QCoreApplication::translate("HomeClass", "Profile  ", nullptr));
#if QT_CONFIG(shortcut)
	pushButton_11->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)
	label->setText(QCoreApplication::translate("HomeClass", "        Listings", nullptr));
	pushButton_3->setText(QCoreApplication::translate("HomeClass", "Filter", nullptr));
	comboBox->setItemText(0, QCoreApplication::translate("HomeClass", "Select location", nullptr));
	comboBox->setItemText(1, QCoreApplication::translate("HomeClass", "Aswan", nullptr));
	comboBox->setItemText(2, QCoreApplication::translate("HomeClass", "Assiut", nullptr));
	comboBox->setItemText(3, QCoreApplication::translate("HomeClass", "Asyout", nullptr));
	comboBox->setItemText(4, QCoreApplication::translate("HomeClass", "Alex", nullptr));
	comboBox->setItemText(5, QCoreApplication::translate("HomeClass", "Beheira", nullptr));
	comboBox->setItemText(6, QCoreApplication::translate("HomeClass", "Beni Suef", nullptr));
	comboBox->setItemText(7, QCoreApplication::translate("HomeClass", "Cairo", nullptr));
	comboBox->setItemText(8, QCoreApplication::translate("HomeClass", "Dahab", nullptr));
	comboBox->setItemText(9, QCoreApplication::translate("HomeClass", "Menya", nullptr));
} // retranslateUi

HoverEventFilter::HoverEventFilter(ClickableWidget* parentWidget, QPushButton* buttonToStyle, QObject* parent, string Hover, string noHover)
	: QObject(parent), m_parentWidget(parentWidget), m_buttonToStyle(buttonToStyle) {
	// Install event filter on parentWidget
	this->Hover = Hover;
	this->noHover = noHover;
	parentWidget->installEventFilter(this);
}
bool HoverEventFilter::eventFilter(QObject* obj, QEvent* event) {
	if (obj == m_parentWidget) {
		if (event->type() == QEvent::Enter) {
			// Hover started, update style of buttonToStyle
			m_buttonToStyle->setStyleSheet(QString::fromUtf8("QPushButton{\n"
				"	background-image: url(" + Hover + "); \n"
				"background-repeat:no-repeat;\n"
				"background-position:left center;\n"
				"background-color:#407BFF;\n"
				"color:white;\n"
				"}")); // Change yellow to your desired hover style
		}
		else if (event->type() == QEvent::Leave) {
			// Hover ended, revert style of buttonToStyle
			m_buttonToStyle->setStyleSheet(QString::fromUtf8("QPushButton{\n"
				"	background-image: url(" + noHover + "); \n"
				"background-repeat:no-repeat;\n"
				"background-position:left center;\n"
				"}")); // Reset style
		}
	}
	return QObject::eventFilter(obj, event);
}
ClickableWidget::ClickableWidget(QStackedWidget* stackedWidget, System* system, QString widgetName, QWidget* parent, Login* login, Home* home, Signup* signup) : QWidget(parent) {
	this->stackedWidget = stackedWidget;
	this->system = system;
	this->login = login;
	this->home = home;
	this->signup = signup;
	this->widgetName = widgetName;
}
void ClickableWidget::mousePressEvent(QMouseEvent* event) {
	if (event->button() == Qt::LeftButton) {
		if (widgetName == "Login") {
			stackedWidget->hide();
			stackedWidget->setCurrentIndex(0);
			login->setupUi(stackedWidget, system, home, signup);
			stackedWidget->show();
		}
		else if (stackedWidget->currentWidget()->objectName() != widgetName) {
			bool addedBefore = false;
			for (int i = 0; i < stackedWidget->count(); ++i) {
				QWidget* currentWidget = stackedWidget->widget(i);
				if (currentWidget->objectName() == widgetName) {
					stackedWidget->hide();
					stackedWidget->setCurrentIndex(i);
					if (widgetName == "Listings") {
						currentWidget = new Listings();
						Listings* listings = dynamic_cast<Listings*>(currentWidget);
						listings->setupUi(stackedWidget, system);
					}
					else if (widgetName == "Compare" && system->GetPropertyComparison().size() == 2) {
						currentWidget = new Compare();
						Compare* cmp2 = dynamic_cast<Compare*>(currentWidget);
						cmp2->setupUi(stackedWidget, system);
					}
					else if (widgetName == "Compare" && system->GetPropertyComparison().size() == 3) {
						currentWidget = new Compare_3();
						Compare_3* cmp3 = dynamic_cast<Compare_3*>(currentWidget);
						cmp3->setupUi(stackedWidget, system);
					}
					else if (widgetName == "Compare" && system->GetPropertyComparison().size() == 4) {
						currentWidget = new Compare_4();
						Compare_4* cmp4 = dynamic_cast<Compare_4*>(currentWidget);
						cmp4->setupUi(stackedWidget, system);
					}
					else if (widgetName == "Compare") {
						QDialog* qdialog = new QDialog();
						Dialog dialog;
						dialog.setupUi(qdialog, "Add Properties to Compare");
						qdialog->exec();
					}
					else if (widgetName == "Dashboard") {
						currentWidget = new Dashboard();
						Dashboard* dashboard = dynamic_cast<Dashboard*>(currentWidget);
						dashboard->setupUi(stackedWidget, system);
					}
					else if (widgetName == "Profile") {
						currentWidget = new MyProfile();
						MyProfile* profile = dynamic_cast<MyProfile*>(currentWidget);
						profile->setupUi(stackedWidget, system);
					}
					stackedWidget->show();
					addedBefore = true;
					break;
				}
			}
			if (!addedBefore) {
				if (widgetName == "Compare" && system->GetPropertyComparison().size() == 2) {
					Compare* compare = new Compare();
					compare->setObjectName("Compare");
					stackedWidget->hide();
					stackedWidget->addWidget(compare);
					stackedWidget->setCurrentWidget(compare);
					compare->setupUi(stackedWidget, system);
				}
				else if (widgetName == "Compare" && system->GetPropertyComparison().size() == 3) {
					Compare_3* compare = new Compare_3();
					compare->setObjectName("Compare");
					stackedWidget->hide();
					stackedWidget->addWidget(compare);
					stackedWidget->setCurrentWidget(compare);
					compare->setupUi(stackedWidget, system);
				}
				else if (widgetName == "Compare" && system->GetPropertyComparison().size() == 4) {
					Compare_4* compare = new Compare_4();
					compare->setObjectName("Compare");
					stackedWidget->hide();
					stackedWidget->addWidget(compare);
					stackedWidget->setCurrentWidget(compare);
					compare->setupUi(stackedWidget, system);
				}
				else if (widgetName == "Compare") {
					QDialog* qdialog = new QDialog();
					Dialog dialog;
					dialog.setupUi(qdialog, "Add Properties to Compare");
					qdialog->exec();
				}
				else if (widgetName == "Dashboard") {
					Dashboard* dashboard = new Dashboard();
					dashboard->setObjectName("Compare");
					stackedWidget->hide();
					stackedWidget->addWidget(dashboard);
					stackedWidget->setCurrentWidget(dashboard);
					dashboard->setupUi(stackedWidget, system);
				}
				else if (widgetName == "Profile") {
					MyProfile* profile = new MyProfile();
					profile->setObjectName("Profile");
					stackedWidget->hide();
					stackedWidget->addWidget(profile);
					stackedWidget->setCurrentWidget(profile);
					profile->setupUi(stackedWidget, system);
				}
				stackedWidget->show();
			}
		}
	}
	QWidget::mousePressEvent(event);
}
