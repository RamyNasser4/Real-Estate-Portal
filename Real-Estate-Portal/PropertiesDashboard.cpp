#include "PropertiesDashboard.h"

PropertiesDashboard::PropertiesDashboard(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
void PropertiesDashboard::setupUi(QWidget* PropertiesDashboardClass, System* system, QStackedWidget* Dashboard) {
	widget_2 = new QWidget(PropertiesDashboardClass);
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
	scrollAreaWidgetContents_2 = new QWidget();
	scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
	scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 759, 619));
	drawBoxes(scrollAreaWidgetContents_2, system, scrollArea_2, Dashboard);
	line_8->raise();
	scrollArea_2->raise();
	label->raise();
	label_45 = new QLabel(PropertiesDashboardClass);
	label_45->setObjectName("label_45");
	label_45->setGeometry(QRect(640, 93, 131, 20));
	label_45->setStyleSheet(QString::fromUtf8("#label_11{\n"
		"color:black;\n"
		"  border-radius: 25px;\n"
		"\n"
		"\n"
		"font-size:15px;\n"
		"}"));
	string count = "All Properties : " + to_string(system->PropertiesCounter());
	label_45->setText(count.c_str());
	retranslateUi(PropertiesDashboardClass);
}
void PropertiesDashboard::drawBoxes(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea, QStackedWidget* ListComponents) {
	scrollAreaWidgetContents = new QWidget();
	unordered_map<string, Property*> properties = system->GetProperties();
	if (system->PropertiesCounter() != 0) {
		int totalHeight = 230 * system->PropertiesCounter();
		qDebug() << totalHeight;
		scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, totalHeight));
		int i = 1;
		int currentCardY = 10;
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
			QLabel* City = new QLabel(propertyCard);
			City->setObjectName("City" + i);
			City->setGeometry(QRect(400, 120, 191, 21));
			string strCity = "City : " + it->second->GetCity();
			City->setText(strCity.c_str());
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
					string count = "All Properties : " + to_string(system->PropertiesCounter());
					label_45->setText(count.c_str());
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
void PropertiesDashboard::retranslateUi(QWidget* PropertiesDashboardClass) {
	label->setText(QCoreApplication::translate("Dashboard", "Properties", nullptr));

}
PropertiesDashboard::~PropertiesDashboard()
{}
