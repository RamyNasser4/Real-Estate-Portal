#include "AnalyticsDashboard.h"

AnalyticsDashboard::AnalyticsDashboard(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
void AnalyticsDashboard::setupUi(QWidget* AnalyticsDashboardClass,System* system,QStackedWidget* ListComponents)
{
    if (AnalyticsDashboardClass->objectName().isEmpty())
        AnalyticsDashboardClass->setObjectName("AnalyticsDashboardClass");
    AnalyticsDashboardClass->resize(801, 741);
    widget_4 = new QWidget(AnalyticsDashboardClass);
    widget_4->setObjectName("widget_4");
    widget_4->setGeometry(QRect(0, 0, 801, 741));
    widget_4->setStyleSheet(QString::fromUtf8("QWidget\n"
        "{\n"
        "background-color:#CCD0CD;\n"
        "\n"
        "}\n"
        "QLabel{\n"
        "font-size:20px;\n"
        "}"));
    label_118 = new QLabel(widget_4);
    label_118->setObjectName("label_118");
    label_118->setGeometry(QRect(280, 20, 61, 61));
    label_118->setStyleSheet(QString::fromUtf8("QLabel\n"
        "{\n"
        "font-size:34px;\n"
        "font-weight:bold;\n"
        "color:#2B2A2A;\n"
        "}"));
    label_118->setPixmap(QPixmap(QString::fromUtf8(":/Assets/analysis.png")));
    label_118->setScaledContents(true);
    line_11 = new QFrame(widget_4);
    line_11->setObjectName("line_11");
    line_11->setGeometry(QRect(30, 90, 731, 16));
    line_11->setFrameShape(QFrame::Shape::HLine);
    line_11->setFrameShadow(QFrame::Shadow::Sunken);
    scrollArea_6 = new QScrollArea(widget_4);
    scrollArea_6->setObjectName("scrollArea_6");
    scrollArea_6->setGeometry(QRect(0, 369, 791, 351));
	scrollArea_6->setStyleSheet(
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
    label_130 = new QLabel(widget_4);
    label_130->setObjectName("label_130");
    label_130->setGeometry(QRect(350, 20, 221, 61));
    label_130->setStyleSheet(QString::fromUtf8("QLabel\n"
        "{\n"
        "font-size:34px;\n"
        "font-weight:bold;\n"
        "color:#2B2A2A;\n"
        "}"));
    label_131 = new QLabel(widget_4);
    label_131->setObjectName("label_131");
    label_131->setGeometry(QRect(90, 140, 211, 21));
    label_132 = new QLabel(widget_4);
    label_132->setObjectName("label_132");
    label_132->setGeometry(QRect(30, 130, 51, 41));
    label_132->setPixmap(QPixmap(QString::fromUtf8(":/Assets/group.png")));
    label_132->setScaledContents(true);
    label_133 = new QLabel(widget_4);
    label_133->setObjectName("label_133");
    label_133->setGeometry(QRect(90, 230, 211, 21));
    label_134 = new QLabel(widget_4);
    label_134->setObjectName("label_134");
    label_134->setGeometry(QRect(30, 220, 51, 41));
    label_134->setPixmap(QPixmap(QString::fromUtf8(":/Assets/properties.png")));
    label_134->setScaledContents(true);
    label_135 = new QLabel(widget_4);
    label_135->setObjectName("label_135");
    label_135->setGeometry(QRect(90, 320, 291, 21));
    label_136 = new QLabel(widget_4);
    label_136->setObjectName("label_136");
    label_136->setGeometry(QRect(30, 310, 51, 41));
    label_136->setPixmap(QPixmap(QString::fromUtf8(":/Assets/top_compare.png")));
    label_136->setScaledContents(true);
    line_2 = new QFrame(widget_4);
    line_2->setObjectName("line_2");
    line_2->setGeometry(QRect(393, 120, 20, 171));
    line_2->setFrameShape(QFrame::Shape::VLine);
    line_2->setFrameShadow(QFrame::Shadow::Sunken);
    frame_17 = new QFrame(widget_4);
    frame_17->setObjectName("frame_17");
    frame_17->setGeometry(QRect(420, 180, 361, 41));
    frame_17->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
    frame_17->setFrameShape(QFrame::Shape::StyledPanel);
    frame_17->setFrameShadow(QFrame::Shadow::Raised);
    label_137 = new QLabel(frame_17);
    label_137->setObjectName("label_137");
    label_137->setGeometry(QRect(50, 3, 141, 31));
    label_138 = new QLabel(frame_17);
    label_138->setObjectName("label_138");
    label_138->setGeometry(QRect(210, 3, 141, 31));
    label_139 = new QLabel(frame_17);
    label_139->setObjectName("label_139");
    label_139->setGeometry(QRect(7, 5, 31, 31));
    label_139->setPixmap(QPixmap(QString::fromUtf8("Assets/profile.png")));
    label_139->setScaledContents(true);
    label_140 = new QLabel(widget_4);
    label_140->setObjectName("label_140");
    label_140->setGeometry(QRect(430, 130, 211, 31));
	updateUi(system, ListComponents);

    retranslateUi(AnalyticsDashboardClass,system);

    QMetaObject::connectSlotsByName(AnalyticsDashboardClass);
} // setupUi
void AnalyticsDashboard::drawBoxes(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea, QStackedWidget* ListComponents) {
	scrollAreaWidgetContents = new QWidget();
	vector<Property*> properties = system->GetTop3Compared();
	int totalHeight = 245 * properties.size();
	qDebug() << totalHeight;
	scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, totalHeight));
	int i = 1;
	int currentCardY = 20;
	if (properties.size() != 0) {
		for (auto it = properties.begin(); it != properties.end(); ++it) {
			if (!(*it)->GetVerfied()) {
				continue;
			}
			QFrame* propertyCard = new QFrame(scrollAreaWidgetContents);
			propertyCard->setObjectName("propertyCard" + i);
			propertyCard->setGeometry(QRect(20, currentCardY, 741, 221));
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
			ID->setGeometry(QRect(180, 20, 211, 21));
			string strID = "Property ID : " + (*it)->GetpropertyId();
			ID->setText(strID.c_str());
			QLabel* apartmentNumber = new QLabel(propertyCard);
			apartmentNumber->setObjectName("apartment" + i);
			apartmentNumber->setGeometry(QRect(400, 20, 231, 21));
			string strApartment = "Apartment Number : " + to_string((*it)->GetApartmentNumber());
			apartmentNumber->setText(strApartment.c_str());
			QLabel* img = new QLabel(propertyCard);
			img->setObjectName("img" + i);
			img->setGeometry(QRect(20, 40, 151, 151));
			img->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
			img->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
			img->setScaledContents(true);
			QLabel* location = new QLabel(propertyCard);
			location->setObjectName("location" + i);
			location->setGeometry(QRect(180, 60, 211, 21));
			string strlocation = "Location : " + (*it)->GetLocation();
			location->setText(strlocation.c_str());
			QLabel* sqFootage = new QLabel(propertyCard);
			sqFootage->setObjectName("sqFootage" + i);
			sqFootage->setGeometry(QRect(180, 100, 201, 21));
			string strFootage = "<p>Space : " + to_string((*it)->GetSquareFootage()) + "ft<sup>2";
			sqFootage->setText(strFootage.c_str());
			QLabel* noOfBedrooms = new QLabel(propertyCard);
			noOfBedrooms->setObjectName("noOfBedrooms" + i);
			noOfBedrooms->setGeometry(QRect(180, 140, 211, 21));
			string strBedrooms = "Bedrooms : " + to_string((*it)->GetNumberOfBedrooms());
			noOfBedrooms->setText(strBedrooms.c_str());
			QLabel* price = new QLabel(propertyCard);
			price->setObjectName("price" + i);
			price->setGeometry(QRect(400, 60, 231, 21));
			string strPrice = "Price : $" + to_string((*it)->GetPrice());
			price->setText(strPrice.c_str());
			QLabel* type = new QLabel(propertyCard);
			type->setObjectName("type" + i);
			type->setGeometry(QRect(400, 100, 211, 21));
			string strType = "Type : " + (*it)->GetPropertyType();
			type->setText(strType.c_str());
			QLabel* buildingNumber = new QLabel(propertyCard);
			buildingNumber->setObjectName("buildingNo" + i);
			buildingNumber->setGeometry(QRect(400, 140, 191, 21));
			string strBuilding = "Building number : " + (*it)->GetBuildingNumber();
			buildingNumber->setText(strBuilding.c_str());
			QLabel* userID = new QLabel(propertyCard);
			userID->setObjectName("userID" + i);
			userID->setGeometry(QRect(180, 180, 221, 21));
			string strUserID = "User ID : " + (*it)->GetUserId();
			userID->setText(strUserID.c_str());
			QLabel* userName = new QLabel(propertyCard);
			userName->setObjectName("userName" + i);
			userName->setGeometry(QRect(400, 180, 211, 21));
			string strUserName = "Username : " + (*it)->GetUserName();
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
			string propertyId = (*it)->GetpropertyId();
			if ((*it)->GetHighlighted()) {
				menu->addAction(removeHighlight);
			}
			else {
				menu->addAction(highlight);
			}
			menu->addAction(edit);
			menu->addAction(del);
			menu->setStyleSheet("QMenu {\n"
				"background-color: wh(*it)e;\n"       // Background color
				"border: 1px solid #ccc;\n"        // Border style
				"}\n"
				"QMenu::(*it)em {\n"
				"font-family:sans-serif;\n"
				"font-weight:700;\n"
				"padding: 5px 20px;\n"             // Padding for menu (*it)ems
				"}"
				"QMenu::(*it)em:selected {\n"
				"color:wh(*it)e;\n"
				"background-color: #407BFF;\n"    // Background color of selected (*it)em
				"}");
			toolButton->setMenu(menu);
			if ((*it)->GetHighlighted()) {
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
			currentCardY += 230;
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
void AnalyticsDashboard::retranslateUi(QWidget* AnalyticsDashboardClass,System* system)
{
    AnalyticsDashboardClass->setWindowTitle(QCoreApplication::translate("AnalyticsDashboardClass", "AnalyticsDashboard", nullptr));
    label_118->setText(QString());
    label_130->setText(QCoreApplication::translate("AnalyticsDashboardClass", "Analytics", nullptr));
	string totalusers = "Total Users : " + to_string(system->UserCounter());
    label_131->setText(QCoreApplication::translate("AnalyticsDashboardClass", totalusers.c_str(), nullptr));
    label_132->setText(QString());
	string totalproperties = "Total Properties : " + to_string(system->PropertiesCounter());
    label_133->setText(QCoreApplication::translate("AnalyticsDashboardClass", totalproperties.c_str(), nullptr));
    label_134->setText(QString());
    label_135->setText(QCoreApplication::translate("AnalyticsDashboardClass", "Top Compared Properties ", nullptr));
    label_136->setText(QString());
    label_139->setText(QString());
    label_140->setText(QCoreApplication::translate("AnalyticsDashboardClass", "User with most listings ", nullptr));
} // retranslateUi
void AnalyticsDashboard::updateUi(System* system,QStackedWidget* ListComponents) {
	User* user = system->UserWithMostProperties();
	string userId = "#" + user->GetNationalId();
	label_137->setText(QCoreApplication::translate("AnalyticsDashboardClass", userId.c_str(), nullptr));
	string username = user->GetName();
	label_138->setText(QCoreApplication::translate("AnalyticsDashboardClass", username.c_str(), nullptr));
	drawBoxes(scrollAreaWidgetContents_6, system, scrollArea_6, ListComponents);
}
AnalyticsDashboard::~AnalyticsDashboard()
{}
