#include "MyProfile.h"
#include "User.h"
MyProfile::MyProfile( QWidget* parent)
    : QWidget(parent)
{
    //setupUi(this);
}
void MyProfile::setupUi(QStackedWidget* MyProfile, System* system)
{
    if (MyProfile->objectName().isEmpty())
        MyProfile->setObjectName("MyProfileClass");
    MyProfile->resize(801, 741);
    widget = new QWidget(MyProfile);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(-1, -1, 801, 741));
    widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
        "background-color:#CCC0CD;\n"
        "}"));
    frame = new QFrame(widget);
    frame->setObjectName("frame");
    frame->setGeometry(QRect(0, 0, 801, 741));
    frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "background:#CCD0CD;\n"
        "font-size:25px;\n"
        "}\n"
        "#frame_2{\n"
        "background:#1B425E;\n"
        "}\n"
        "#pushButton{\n"
        "background:#CCD0CD;\n"
        "border:none;\n"
        "border-radius:50%;\n"
        "}\n"
        "#label{\n"
        "font-weight:600;\n"
        "}\n"
        "#label_4{\n"
        "font-weight:600;\n"
        "}\n"
        "QLabel{\n"
        "color:#2B2A2A;\n"
        "}\n"
        "#widget{\n"
        "background:#CCD0CD;\n"
        "}\n"
        "#pushButton_3{\n"
        "background:#3F6793;\n"
        "border:none;\n"
        "border-radius:10px;\n"
        "}"));
    frame->setFrameShape(QFrame::Shape::StyledPanel);
    frame->setFrameShadow(QFrame::Shadow::Raised);
    frame_2 = new QFrame(frame);
    frame_2->setObjectName("frame_2");
    frame_2->setGeometry(QRect(0, -1, 801, 111));
    frame_2->setFrameShape(QFrame::Shape::StyledPanel);
    frame_2->setFrameShadow(QFrame::Shadow::Raised);
    pushButton = new QPushButton(frame);
    pushButton->setObjectName("pushButton");
    pushButton->setGeometry(QRect(50, 30, 101, 101));
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/Assets/Userprofile.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton->setIcon(icon);
    pushButton->setIconSize(QSize(140, 140));
    label = new QLabel(frame);
    label->setObjectName("label");
    label->setGeometry(QRect(20, 130, 271, 41));
    label_2 = new QLabel(frame);
    label_2->setObjectName("label_2");
    label_2->setGeometry(QRect(20, 190, 181, 31));
    label_3 = new QLabel(frame);
    label_3->setObjectName("label_3");
    label_3->setGeometry(QRect(310, 190, 171, 31));
    label_4 = new QLabel(frame);
    label_4->setObjectName("label_4");
    label_4->setGeometry(QRect(20, 250, 171, 41));
    scrollArea = new QScrollArea(frame);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setGeometry(QRect(10, 310, 771, 411));
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
	scrollArea->setStyleSheet(
		"QScrollBar:vertical {"
		"border: 1px solid #999999;"
		"background: #F0F0F0;"
		"width: 15px;"
		"margin: 22px 0 22px 0;"
		"}"
		"QWidget {"
		"background-color:#CCD0CD;"
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
    drawBoxes(scrollAreaWidgetContents, system, scrollArea, MyProfile);
    pushButton_3 = new QPushButton(frame);
    pushButton_3->setObjectName("pushButton_3");
    pushButton_3->setGeometry(QRect(650, 130, 111, 51));
    pushButton_4 = new QPushButton(frame);
    pushButton_4->setObjectName("pushButton_4");
    pushButton_4->setGeometry(QRect(660, 130, 31, 51));
    pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "border:none;\n"
        "background:#3F6793;\n"
        "}"));
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/Assets/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_4->setIcon(icon2);
    label_5 = new QLabel(frame);
    label_5->setObjectName("label_5");
    label_5->setGeometry(QRect(700, 140, 41, 31));
    label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "color:white;\n"
        "font-size:20px;\n"
        "background:#3F6793;\n"
        "}"));
    retranslateUi(MyProfile,system);
    QMetaObject::connectSlotsByName(MyProfile);
}
void MyProfile::drawBoxes(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea, QStackedWidget* ListComponents) {
	scrollAreaWidgetContents = new QWidget();
	User* currentUser = system->GetUser(system->currentUserId);
	unordered_map<string, Property*> filtered = currentUser->GetUserProperties();
	if (currentUser->GetUserCountProperty() > 0) {
		int totalHeight = 200 * currentUser->GetUserCountProperty();
		qDebug() << totalHeight;
		scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, totalHeight));
		int i = 1;
		int currentImgY = 30;
		int currentLine2Y = 70;
		int currentButtonY = 10;
		int currentPriceY = 130;
		int currentBedroomsY = 70;
		int currentFootageY = 70;
		int currentHorizontalWidgetY = 30;
		int currentToolButtonY = 30;
		int currentBookmarkY = 0;
		for (auto it = filtered.begin(); it != filtered.end(); ++it) {
			if (!it->second->GetVerfied()) {
				continue;
			}
			QFrame* lineBetweenLabels2 = new QFrame(scrollAreaWidgetContents);
			lineBetweenLabels2->setObjectName("line" + i);
			lineBetweenLabels2->setGeometry(QRect(300, currentLine2Y, 31, 16));
			lineBetweenLabels2->setStyleSheet(QString::fromUtf8("#line_7{\n"
				"background-color:white;\n"
				"}"));
			lineBetweenLabels2->setFrameShape(QFrame::Shape::HLine);
			lineBetweenLabels2->setFrameShadow(QFrame::Shadow::Sunken);
			lineBetweenLabels2->show();
			QPushButton* pushButtonMain = new QPushButton(scrollAreaWidgetContents);
			pushButtonMain->setObjectName("pushButton" + i);
			pushButtonMain->setGeometry(QRect(10, currentButtonY, 741, 171));
			pushButtonMain->setStyleSheet(QString::fromUtf8("QPushButton{\n"
				"background:white;\n"
				"border:none;\n"
				"border-radius:15px;\n"
				"}"));
			pushButtonMain->show();
			QWidget* img = new QWidget(scrollAreaWidgetContents);
			img->setObjectName("widget" + i);
			img->setGeometry(QRect(40, currentImgY, 171, 131));
			img->setStyleSheet(QString::fromUtf8("QWidget{\n"
				"background-color:#CCD0CD;\n"
				"border-radius:15px;\n"
				"background-image: url(:/Assets/home128.png);\n"
				"background-repeat:no-repeat;\n"
				"background-position:center;\n"
				"}\n"
				""));
			img->raise();
			img->show();
			QLabel* price = new QLabel(scrollAreaWidgetContents);
			price->setObjectName("price" + i);
			price->setGeometry(QRect(230, currentPriceY, 121, 31));
			price->setStyleSheet(QString::fromUtf8("QLabel{\n"
				"background-color:white;\n"
				"font-family:sans-serif;\n"
				"font-size:24px;\n"
				"font-weight:700;\n"
				"color:#407BFF;\n"
				"}"));
			price->show();
			string strPrice = "$" + to_string(it->second->GetPrice());
			price->setText(QCoreApplication::translate("ListingsClass", strPrice.c_str(), nullptr));
			QLabel* noOfBedrooms = new QLabel(scrollAreaWidgetContents);
			noOfBedrooms->setObjectName("noOfBedrooms" + i);
			noOfBedrooms->setGeometry(QRect(230, currentBedroomsY, 71, 16));
			noOfBedrooms->setStyleSheet(QString::fromUtf8("QLabel{\n"
				"background-color:white;\n"
				"color:#808080;\n"
				"font-family:sans-serif;\n"
				"font-weight:600;\n"
				"font-size:11px;\n"
				"}"));
			noOfBedrooms->show();
			string strBedrooms = to_string(it->second->GetNumberOfBedrooms()) + " Bedrooms";
			noOfBedrooms->setText(QCoreApplication::translate("ListingsClass", strBedrooms.c_str(), nullptr));
			QLabel* sqFootage = new QLabel(scrollAreaWidgetContents);
			sqFootage->setObjectName("sqFootage" + i);
			sqFootage->setGeometry(QRect(340, currentFootageY, 49, 16));
			sqFootage->setStyleSheet(QString::fromUtf8("QLabel{\n"
				"background-color:white;\n"
				"color:#808080;\n"
				"font-family:sans-serif;\n"
				"font-weight:600;\n"
				"font-size:11px;\n"
				"}"));
			sqFootage->show();
			string strFootage = "<p>" + to_string(it->second->GetSquareFootage()) + "ft<sup>2";
			sqFootage->setText(QCoreApplication::translate("ListingsClass", strFootage.c_str(), nullptr));
			QWidget* horizontalWidget = new QWidget(scrollAreaWidgetContents);
			horizontalWidget->setObjectName("horizontalWidget" + i);
			horizontalWidget->setGeometry(QRect(218, currentHorizontalWidgetY, 331, 41));
			horizontalWidget->setStyleSheet(QString::fromUtf8("background:white;"));
			horizontalWidget->show();
			QHBoxLayout* horizontalLayout = new QHBoxLayout(horizontalWidget);
			horizontalLayout->setSpacing(6);
			horizontalLayout->setContentsMargins(11, 11, 11, 11);
			horizontalLayout->setObjectName("horizontalLayout" + i);
			QLabel* location = new QLabel(horizontalWidget);
			location->setObjectName("location" + i);
			location->setStyleSheet(QString::fromUtf8("QLabel{\n"
				"background-color:white;\n"
				"font-family:sans-serif;\n"
				"font-weight:600;\n"
				"font-size:14px;\n"
				"}"));
			horizontalLayout->addWidget(location);
			location->show();
			string strlocation = "";
			strlocation += it->second->GetLocation() + ",";
			strlocation += it->second->GetBuildingNumber() + ",";
			strlocation += it->second->GetApartmentNumber();
			location->setText(QCoreApplication::translate("ListingsClass", strlocation.c_str(), nullptr));
			QFrame* lineBetweenLabels1 = new QFrame(horizontalWidget);
			lineBetweenLabels1->setObjectName("line" + i);
			lineBetweenLabels1->setStyleSheet(QString::fromUtf8("#line_6{\n"
				"background:white;\n"
				"}"));
			lineBetweenLabels1->setFrameShape(QFrame::Shape::HLine);
			lineBetweenLabels1->setFrameShadow(QFrame::Shadow::Sunken);

			horizontalLayout->addWidget(lineBetweenLabels1);
			lineBetweenLabels1->show();
			QLabel* type = new QLabel(horizontalWidget);
			type->setObjectName("Type" + i);
			type->setStyleSheet(QString::fromUtf8("QLabel{\n"
				"background:white;\n"
				"font-family:sans-serif;\n"
				"font-weight:700;\n"
				"font-size:11px;\n"
				"color:#808080;\n"
				"}"));
			horizontalLayout->addWidget(type);
			type->show();
			string strType = it->second->GetPropertyType();
			type->setText(QCoreApplication::translate("ListingsClass", strType.c_str(), nullptr));
			ClickEventFilter* filter = new ClickEventFilter();
			filter->addWidget(lineBetweenLabels1);
			filter->addWidget(lineBetweenLabels2);
			filter->addWidget(type);
			filter->addWidget(img);
			filter->addWidget(price);
			filter->addWidget(location);
			filter->addWidget(sqFootage);
			filter->addWidget(noOfBedrooms);
			QToolButton* toolButton = new QToolButton(scrollAreaWidgetContents);
			toolButton->setObjectName("toolButton");
			toolButton->setGeometry(QRect(700, currentToolButtonY, 31, 22));
			toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
				"background:white;\n"
				"border:none;\n"
				"padding-right: 0px;\n"
				"}\n"
				"QToolButton::menu-indicator{\n"
				"image: none;\n"
				"}"));
			QIcon icon1;
			icon1.addFile(QString::fromUtf8(":/Assets/more32.png"), QSize(), QIcon::Normal, QIcon::Off);
			toolButton->setIcon(icon1);
			toolButton->setIconSize(QSize(32, 32));
			toolButton->setPopupMode(QToolButton::InstantPopup);
			QMenu* menu = new QMenu(scrollAreaWidgetContents);
			QAction* addToCompare = new QAction("Add To Compare");
			QAction* removeFromCompare = new QAction("Remove From Compare");
			QAction* highlight = new QAction("Highlight");
			QAction* removeHighlight = new QAction("Remove Highlight");
			QAction* edit = new QAction("Edit");
			QAction* del = new QAction("Delete");
			auto cmpIt = std::find(system->propertyComparison.begin(), system->propertyComparison.end(), system->properties[it->second->GetpropertyId()]);
			if (cmpIt == system->propertyComparison.end()) {
				menu->addAction(addToCompare);
			}
			else {
				menu->addAction(removeFromCompare);
			}
			Admin* admin = dynamic_cast<Admin*>(system->GetUsers()[system->currentUserId]);
			auto userProperties = system->GetUsers()[system->currentUserId]->GetUserProperties();
			string propertyId = it->second->GetpropertyId();
			if (admin && it->second->GetHighlighted()) {
				menu->addAction(removeHighlight);
			}
			else {
				menu->addAction(highlight);
			}
			if (admin || userProperties.find(propertyId) != userProperties.end()) {
				menu->addAction(edit);
				menu->addAction(del);
			}
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
			QPushButton* highlightButton = new QPushButton(scrollAreaWidgetContents);
			highlightButton->setObjectName("pushButton_5");
			highlightButton->setGeometry(QRect(0, currentBookmarkY, 75, 61));
			highlightButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
				"background-color:transparent;\n"
				"border:none;\n"
				"}"));
			QIcon icon2;
			icon2.addFile(QString::fromUtf8(":/Assets/bookmarkv2.png"), QSize(), QIcon::Normal, QIcon::Off);
			highlightButton->setIcon(icon2);
			highlightButton->setIconSize(QSize(40, 40));
			if (it->second->GetHighlighted()) {
				highlightButton->setVisible(true);
			}
			else {
				highlightButton->setVisible(false);
			}
			QObject::connect(pushButtonMain, &QPushButton::clicked, [=]() {
				qDebug() << "clickedB";
				});

			QObject::connect(addToCompare, &QAction::triggered, [=]() {
				try {
					system->AddToCompare(propertyId);
					menu->insertAction(addToCompare, removeFromCompare);
					menu->removeAction(addToCompare);
				}
				catch (const exception& e) {
					qDebug() << "add to compare failed";
					qDebug() << e.what();
				}
				});
			QObject::connect(removeFromCompare, &QAction::triggered, [=]() {
				try {
					system->RemoveFromCompare(propertyId);
					menu->insertAction(removeFromCompare, addToCompare);
					menu->removeAction(removeFromCompare);
				}
				catch (const exception& e) {
					qDebug() << "remove from compare failed";
					qDebug() << e.what();
				}
				});
			QObject::connect(highlight, &QAction::triggered, [=]() {
				admin->HighlightProperty(propertyId, system);
				highlightButton->setVisible(true);
				menu->insertAction(highlight, removeHighlight);
				menu->removeAction(highlight);
				});
			QObject::connect(removeHighlight, &QAction::triggered, [=]() {
				admin->RemoveHighlight(propertyId, system);
				highlightButton->setVisible(false);
				menu->insertAction(removeHighlight, highlight);
				menu->removeAction(removeHighlight);
				});
			QObject::connect(del, &QAction::triggered, [=]() {
				try
				{
					system->RemoveProperty(propertyId, system->currentUserId);
					for (int i = 0; i < ListComponents->count(); ++i) {
						QWidget* currentWidget = ListComponents->widget(i);
						if (currentWidget->objectName() == "Listings") {
							currentWidget = new Listings();
							Listings* listings = dynamic_cast<Listings*>(currentWidget);
							ListComponents->hide();
							ListComponents->setCurrentWidget(currentWidget);
							listings->setupUi(ListComponents, system);
							ListComponents->show();
							break;
						}
					}
				}
				catch (const exception& e)
				{
					qDebug() << e.what();
				}
				});
			QObject::connect(pushButtonMain, &QPushButton::clicked, [=]() {
				try {
					//move to property details page
				}
				catch (const exception& e) {

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
			currentImgY += 200;
			currentLine2Y += 200;
			currentButtonY += 200;
			currentPriceY += 200;
			currentBedroomsY += 200;
			currentFootageY += 200;
			currentHorizontalWidgetY += 200;
			currentToolButtonY += 200;
			currentBookmarkY += 200;
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
		label1->setObjectName("label_7");
		label1->setGeometry(QRect(260, 450, 261, 31));
		label1->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"font-size:30px;\n"
			"font-family:sans-serif;\n"
			"font-weight:600;\n"
			"}"));
		QLabel* label2 = new QLabel(scrollAreaWidgetContents);
		label2->setObjectName("label_8");
		label2->setGeometry(QRect(230, 490, 301, 16));
		label2->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"font-family:sans-serif;\n"
			"color:#808080;\n"
			"font-weight:600;\n"
			"}"));
		label1->setText(QCoreApplication::translate("ListingsClass", "No Results Found", nullptr));
		label2->setText(QCoreApplication::translate("ListingsClass", "We couldn't find any properties that match your search", nullptr));
		scrollArea->setWidget(scrollAreaWidgetContents);
		scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
		scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	}
}


void MyProfile::retranslateUi(QWidget* MyProfile,System* system)
{
    MyProfile->setWindowTitle(QCoreApplication::translate("MyProfile", "MyProfile", nullptr));
	User* currentUser = system->GetUser(system->currentUserId);
    pushButton->setText(QString());
    label->setText(QCoreApplication::translate("MyProfile", currentUser->GetName().c_str(), nullptr));
    label_2->setText(QCoreApplication::translate("MyProfile", "Phone Number:", nullptr));
    label_3->setText(QCoreApplication::translate("MyProfile", currentUser->GetMobileNumber().c_str(), nullptr));
    label_4->setText(QCoreApplication::translate("MyProfile", "My Properties", nullptr));
    //pushButton_2->setText(QString());
    /*label_24->setText(QCoreApplication::translate("MyProfile", "3 El Hegaz St., El Mahkama Station", nullptr));
    label_25->setText(QCoreApplication::translate("MyProfile", "Townhouse", nullptr));
    label_19->setText(QCoreApplication::translate("MyProfile", "$245,250", nullptr));
    label_20->setText(QCoreApplication::translate("MyProfile", "2 Bedrooms", nullptr));
    label_21->setText(QCoreApplication::translate("MyProfile", "<p>163m<sup>2", nullptr));*/
    //toolButton->setText(QString());
    pushButton_3->setText(QString());
    pushButton_4->setText(QString());
    label_5->setText(QCoreApplication::translate("MyProfile", "Edit", nullptr));
} 