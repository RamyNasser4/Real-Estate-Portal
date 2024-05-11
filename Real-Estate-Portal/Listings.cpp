#include "Listings.h"
#include "EditProperty.h"
void Listings::setupUi(QStackedWidget* ListingsClass, System* system)
{
	if (ListingsClass->objectName().isEmpty())
		ListingsClass->setObjectName("ListingsClass");
	ListingsClass->resize(800, 741);
	widget = new QWidget(ListingsClass);
	widget->setObjectName("widget");
	widget->setGeometry(QRect(-1, -1, 801, 741));
	widget->setStyleSheet(QString::fromUtf8("QWidget\n"
		"{\n"
		"background-color:#CCD0CD;\n"
		"\n"
		"}"));
	label = new QLabel(widget);
	label->setObjectName("label");
	label->setGeometry(QRect(10, 20, 181, 61));
	label->setStyleSheet(QString::fromUtf8("QLabel\n"
		"{\n"
		"font-size:34px;\n"
		"font-weight:bold;\n"
		"color:#2B2A2A;\n"
		"}"));
	pushButton_3 = new QPushButton(widget);
	pushButton_3->setObjectName("pushButton_3");
	pushButton_3->setGeometry(QRect(660, 40, 91, 31));
	pushButton_3->setStyleSheet(QString::fromUtf8("/*QPushButton{\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:20px;\n"
		"border-radius: 10px;\n"
		"border:0.5px solid black;\n"
		"background-color: white;\n"
		"}*/\n"
		"QPushButton{\n"
		"background-color:#407BFF;\n"
		"font-family:sans-serif;\n"
		"font-weight:700;\n"
		"color:white;\n"
		"border:none;\n"
		"border-radius:10px;\n"
		"}"));
	pushButton_4 = new QPushButton(widget);
	pushButton_4->setObjectName("pushButton_4");
	pushButton_4->setGeometry(QRect(480, 40, 131, 31));
	pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"background-color:#407BFF;\n"
		"font-family:sans-serif;\n"
		"font-weight:700;\n"
		"color:white;\n"
		"border:none;\n"
		"border-radius:10px;\n"
		"}\n"
		"/*QPushButton{\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:20px;\n"
		"border-radius: 10px;\n"
		"border:0.5px solid black;\n"
		"background-color: white;\n"
		"}*/"));
	QIcon icon2;
	icon2.addFile(QString::fromUtf8(":/Assets/plus32.png"), QSize(), QIcon::Normal, QIcon::Off);
	pushButton_4->setIcon(icon2);
	QIcon icon;
	icon.addFile(QString::fromUtf8(":/Assets/filterw32.png"), QSize(), QIcon::Normal, QIcon::Off);
	pushButton_3->setIcon(icon);
	widget_2 = new QWidget(widget);
	widget_2->setObjectName("widget_2");
	widget_2->setGeometry(QRect(0, 80, 801, 81));
	widget_2->setStyleSheet(QString::fromUtf8("QComboBox{\n"
		"border:1px solid #2B2A2A;\n"
		"background-color:white;\n"
		"}\n"
		"QComboBox::down-arrow{\n"
		"	image: url(:/Assets/down-arrow.png);\n"
		"}\n"
		"QComboBox::drop-down{\n"
		"border:none;\n"
		"}\n"
		"QLabel{\n"
		"font-size:15px;\n"
		"font-family:sans-serif;\n"
		"font-weight:500;\n"
		"}\n"
		"QLineEdit{\n"
		"background-color:white;\n"
		"border:0 solid white;\n"
		"border-radius:5px;\n"
		"}"));
	label_2 = new QLabel(widget_2);
	label_2->setObjectName("label_2");
	label_2->setGeometry(QRect(10, 10, 91, 20));
	label_2->setStyleSheet(QString::fromUtf8(""));
	comboBox = new QComboBox(widget_2);
	comboBox->setObjectName("comboBox");
	comboBox->setGeometry(QRect(10, 40, 111, 22));
	comboBox->setStyleSheet(QString::fromUtf8(""));
	comboBox->addItem("None");
	for (auto it = system->propertyFilterLocations.begin(); it != system->propertyFilterLocations.end(); ++it) {
		comboBox->addItem(it->first.c_str());
	}
	label_3 = new QLabel(widget_2);
	label_3->setObjectName("label_3");
	label_3->setGeometry(QRect(150, 10, 91, 21));
	label_3->setStyleSheet(QString::fromUtf8(""));
	comboBox_2 = new QComboBox(widget_2);
	comboBox_2->setObjectName("comboBox_2");
	comboBox_2->setGeometry(QRect(150, 40, 111, 22));
	comboBox_2->setStyleSheet(QString::fromUtf8(""));
	comboBox_2->addItem("None");
	for (auto it = system->propertyFilterType.begin(); it != system->propertyFilterType.end(); ++it) {
		comboBox_2->addItem(it->first.c_str());
	}
	label_4 = new QLabel(widget_2);
	label_4->setObjectName("label_4");
	label_4->setGeometry(QRect(290, 10, 151, 21));
	label_4->setStyleSheet(QString::fromUtf8(""));
	comboBox_3 = new QComboBox(widget_2);
	comboBox_3->setObjectName("comboBox_3");
	comboBox_3->setGeometry(QRect(290, 40, 111, 22));
	comboBox_3->setStyleSheet(QString::fromUtf8(""));
	comboBox_3->addItem("None");
	for (auto it = system->propertyFilterBedRooms.begin(); it != system->propertyFilterBedRooms.end(); ++it) {
		comboBox_3->addItem(to_string(it->first).c_str());
	}
	label_5 = new QLabel(widget_2);
	label_5->setObjectName("label_5");
	label_5->setGeometry(QRect(660, 10, 71, 21));
	label_5->setStyleSheet(QString::fromUtf8(""));
	lineEdit = new QLineEdit(widget_2);
	lineEdit->setObjectName("lineEdit");
	lineEdit->setGeometry(QRect(620, 35, 61, 31));
	lineEdit->setStyleSheet(QString::fromUtf8(""));
	lineEdit->setMaxLength(10);
	line = new QFrame(widget_2);
	line->setObjectName("line");
	line->setGeometry(QRect(690, 45, 16, 16));
	line->setFrameShape(QFrame::Shape::HLine);
	line->setFrameShadow(QFrame::Shadow::Sunken);
	lineEdit_2 = new QLineEdit(widget_2);
	lineEdit_2->setObjectName("lineEdit_2");
	lineEdit_2->setGeometry(QRect(715, 35, 61, 31));
	lineEdit_2->setStyleSheet(QString::fromUtf8(""));
	lineEdit_2->setMaxLength(10);
	label_6 = new QLabel(widget_2);
	label_6->setObjectName("label_6");
	label_6->setGeometry(QRect(480, 10, 111, 21));
	label_6->setStyleSheet(QString::fromUtf8(""));
	lineEdit_3 = new QLineEdit(widget_2);
	lineEdit_3->setObjectName("lineEdit_3");
	lineEdit_3->setGeometry(QRect(450, 35, 61, 31));
	lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
		"background-color:white;\n"
		"border:0 solid white;\n"
		"border-radius:5px;\n"
		"}"));
	lineEdit_3->setMaxLength(10);
	line_2 = new QFrame(widget_2);
	line_2->setObjectName("line_2");
	line_2->setGeometry(QRect(525, 45, 16, 16));
	QFont font;
	font.setPointSize(36);
	line_2->setFont(font);
	line_2->setStyleSheet(QString::fromUtf8("#horizontalLine_2{\n"
		"font-weight:bold;\n"
		"color:black;\n"
		"}"));
	line_2->setFrameShape(QFrame::Shape::HLine);
	line_2->setFrameShadow(QFrame::Shadow::Sunken);
	lineEdit_4 = new QLineEdit(widget_2);
	lineEdit_4->setObjectName("lineEdit_4");
	lineEdit_4->setGeometry(QRect(550, 35, 61, 31));
	lineEdit_4->setStyleSheet(QString::fromUtf8(""));
	lineEdit_4->setMaxLength(10);
	line_5 = new QFrame(widget);
	line_5->setObjectName("line_5");
	line_5->setGeometry(QRect(30, 170, 731, 16));
	line_5->setFrameShape(QFrame::Shape::HLine);
	line_5->setFrameShadow(QFrame::Shadow::Sunken);
	scrollArea = new QScrollArea(widget);
	scrollArea->setObjectName("scrollArea");
	scrollArea->setGeometry(QRect(10, 180, 780, 561));
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
	scrollAreaWidgetContents = new QWidget();
	scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");

	unordered_map<string, Property*> properties = system->GetProperties();
	drawBoxes(scrollAreaWidgetContents, properties, system, scrollArea,ListingsClass);

	widget_2->hide();
	retranslateUi(ListingsClass);
	QObject::connect(pushButton_3, &QPushButton::clicked, widget_2, [=]() {
		if (widget_2->isVisible()) {
			widget_2->hide();
		}
		else {
			widget_2->show();
		}
		});
	QObject::connect(pushButton_4, &QPushButton::clicked, [=]() {
		UserAddProperty* addProperty = new UserAddProperty(nullptr);
		ListingsClass->hide();
		ListingsClass->addWidget(addProperty);
		ListingsClass->setCurrentWidget(addProperty);
		addProperty->setupUi(ListingsClass, system);
		ListingsClass->show();

		});
	QObject::connect(comboBox, &QComboBox::currentTextChanged, [=]() {
		QString location = comboBox->currentText();
		int index = comboBox->currentIndex();
		QString type = comboBox_2->currentText();
		QString noOfBedrooms = comboBox_3->currentText();
		QString minSqFootage = lineEdit_3->text();
		QString maxSqFootage = lineEdit_4->text();
		QString minPrice = lineEdit->text();
		QString maxPrice = lineEdit_2->text();
		if (type != "None") {
			comboBox_2->setCurrentIndex(0);
		}
		if (noOfBedrooms != "None") {
			comboBox_3->setCurrentIndex(0);
		}
		if (!minSqFootage.isEmpty()) {
			lineEdit_3->setText("");
		}
		if (!maxSqFootage.isEmpty()) {
			lineEdit_4->setText("");
		}
		if (!minPrice.isEmpty()) {
			lineEdit->setText("");
		}
		if (!maxPrice.isEmpty()) {
			lineEdit_2->setText("");
		}
		comboBox->setCurrentIndex(index);
		if (comboBox->currentText() != "None") {
			unordered_map<string, Property*> filtered = system->FilterByLocation(location.toLocal8Bit().constData());
			drawBoxes(scrollAreaWidgetContents, filtered, system, scrollArea,ListingsClass);
		}
		else {
			drawBoxes(scrollAreaWidgetContents, system->GetProperties(), system, scrollArea,ListingsClass);
		}
		});
	QObject::connect(comboBox_2, &QComboBox::currentTextChanged, [=]() {
		QString location = comboBox->currentText();
		QString type = comboBox_2->currentText();
		int index = comboBox_2->currentIndex();
		QString noOfBedrooms = comboBox_3->currentText();
		QString minSqFootage = lineEdit_3->text();
		QString maxSqFootage = lineEdit_4->text();
		QString minPrice = lineEdit->text();
		QString maxPrice = lineEdit_2->text();
		if (location != "None") {
			comboBox->setCurrentIndex(0);
		}
		if (noOfBedrooms != "None") {
			comboBox_3->setCurrentIndex(0);
		}
		if (!minSqFootage.isEmpty()) {
			lineEdit_3->setText("");
		}
		if (!maxSqFootage.isEmpty()) {
			lineEdit_4->setText("");
		}
		if (!minPrice.isEmpty()) {
			lineEdit->setText("");
		}
		if (!maxPrice.isEmpty()) {
			lineEdit_2->setText("");
		}
		comboBox_2->setCurrentIndex(index);
		if (comboBox_2->currentText() != "None") {
			unordered_map<string, Property*> filtered = system->FilterByType(type.toLocal8Bit().constData());
			drawBoxes(scrollAreaWidgetContents, filtered, system, scrollArea,ListingsClass);
		}
		else {
			drawBoxes(scrollAreaWidgetContents, system->GetProperties(), system, scrollArea,ListingsClass);
		}
		});
	QObject::connect(comboBox_3, &QComboBox::currentTextChanged, [=]() {
		QString location = comboBox->currentText();
		QString type = comboBox_2->currentText();
		QString noOfBedrooms = comboBox_3->currentText();
		int index = comboBox_3->currentIndex();
		QString minSqFootage = lineEdit_3->text();
		QString maxSqFootage = lineEdit_4->text();
		QString minPrice = lineEdit->text();
		QString maxPrice = lineEdit_2->text();
		if (type != "None") {
			comboBox_2->setCurrentIndex(0);
		}
		if (location != "None") {
			comboBox->setCurrentIndex(0);
		}
		if (!minSqFootage.isEmpty()) {
			lineEdit_3->setText("");
		}
		if (!maxSqFootage.isEmpty()) {
			lineEdit_4->setText("");
		}
		if (!minPrice.isEmpty()) {
			lineEdit->setText("");
		}
		if (!maxPrice.isEmpty()) {
			lineEdit_2->setText("");
		}
		comboBox_3->setCurrentIndex(index);
		if (comboBox_3->currentText() != "None") {
			unordered_map<string, Property*> filtered = system->FilterByNumberOfBedrooms(noOfBedrooms.toInt());
			drawBoxes(scrollAreaWidgetContents, filtered, system, scrollArea,ListingsClass);
		}
		else {
			drawBoxes(scrollAreaWidgetContents, system->GetProperties(), system, scrollArea,ListingsClass);
		}
		});
	QObject::connect(lineEdit, &QLineEdit::editingFinished, [=]() {
		QString location = comboBox->currentText();
		QString type = comboBox_2->currentText();
		QString noOfBedrooms = comboBox_3->currentText();
		QString minSqFootage = lineEdit_3->text();
		QString maxSqFootage = lineEdit_4->text();
		QString minPrice = lineEdit->text();
		QString maxPrice = lineEdit_2->text();
		if (type != "None") {
			comboBox_2->setCurrentIndex(0);
		}
		if (noOfBedrooms != "None") {
			comboBox_3->setCurrentIndex(0);
		}
		if (location != "None") {
			comboBox->setCurrentIndex(0);
		}
		if (!minSqFootage.isEmpty()) {
			lineEdit_3->setText("");
		}
		if (!maxSqFootage.isEmpty()) {
			lineEdit_4->setText("");
		}
		if (!minPrice.isEmpty()) {
			lineEdit->setText("");
		}
		if (!maxPrice.isEmpty()) {
			lineEdit_2->setText("");
		}
		lineEdit->setText(minPrice);
		lineEdit_2->setText(maxPrice);
		if (!minPrice.isEmpty() && !maxPrice.isEmpty()) {
			map<int, unordered_map<string, Property*>> filtered = system->FilterByPrice(minPrice.toInt(), maxPrice.toInt());
			drawBoxes(scrollAreaWidgetContents, filtered, system, scrollArea,ListingsClass);
		}
		else if (minPrice.isEmpty() && maxPrice.isEmpty()) {
			drawBoxes(scrollAreaWidgetContents, system->GetProperties(), system, scrollArea,ListingsClass);
		}
		});
	QObject::connect(lineEdit_2, &QLineEdit::editingFinished, [=]() {
		QString location = comboBox->currentText();
		QString type = comboBox_2->currentText();
		QString noOfBedrooms = comboBox_3->currentText();
		QString minSqFootage = lineEdit_3->text();
		QString maxSqFootage = lineEdit_4->text();
		QString minPrice = lineEdit->text();
		QString maxPrice = lineEdit_2->text();
		if (type != "None") {
			comboBox_2->setCurrentIndex(0);
		}
		if (noOfBedrooms != "None") {
			comboBox_3->setCurrentIndex(0);
		}
		if (!minSqFootage.isEmpty()) {
			lineEdit_3->setText("");
		}
		if (!maxSqFootage.isEmpty()) {
			lineEdit_4->setText("");
		}
		if (!minPrice.isEmpty()) {
			lineEdit->setText("");
		}
		if (!maxPrice.isEmpty()) {
			lineEdit_2->setText("");
		}
		lineEdit->setText(minPrice);
		lineEdit_2->setText(maxPrice);
		if (!minPrice.isEmpty() && !maxPrice.isEmpty()) {
			qDebug() << minPrice.toInt();
			qDebug() << maxPrice.toInt();
			map<int, unordered_map<string, Property*>> filtered = system->FilterByPrice(minPrice.toInt(), maxPrice.toInt());
			drawBoxes(scrollAreaWidgetContents, filtered, system, scrollArea,ListingsClass);
		}
		else if (minPrice.isEmpty() && maxPrice.isEmpty()) {
			drawBoxes(scrollAreaWidgetContents, system->GetProperties(), system, scrollArea,ListingsClass);
		}
		});
	QObject::connect(lineEdit_3, &QLineEdit::editingFinished, [=]() {
		QString location = comboBox->currentText();
		QString type = comboBox_2->currentText();
		QString noOfBedrooms = comboBox_3->currentText();
		QString minSqFootage = lineEdit_3->text();
		QString maxSqFootage = lineEdit_4->text();
		QString minPrice = lineEdit->text();
		QString maxPrice = lineEdit_2->text();
		if (type != "None") {
			comboBox_2->setCurrentIndex(0);
		}
		if (noOfBedrooms != "None") {
			comboBox_3->setCurrentIndex(0);
		}
		if (!minSqFootage.isEmpty()) {
			lineEdit_3->setText("");
		}
		if (!maxSqFootage.isEmpty()) {
			lineEdit_4->setText("");
		}
		if (!minPrice.isEmpty()) {
			lineEdit->setText("");
		}
		if (!maxPrice.isEmpty()) {
			lineEdit_2->setText("");
		}
		lineEdit_3->setText(minSqFootage);
		lineEdit_4->setText(maxSqFootage);
		if (!minSqFootage.isEmpty() && !maxSqFootage.isEmpty()) {
			map<int, unordered_map<string, Property*>> filtered = system->FilterBySquareFootage(minSqFootage.toInt(), maxSqFootage.toInt());
			drawBoxes(scrollAreaWidgetContents, filtered, system, scrollArea,ListingsClass);
		}
		else if (minSqFootage.isEmpty() && minSqFootage.isEmpty()) {
			drawBoxes(scrollAreaWidgetContents, system->GetProperties(), system, scrollArea,ListingsClass);
		}
		});
	QObject::connect(lineEdit_4, &QLineEdit::editingFinished, [=]() {
		QString location = comboBox->currentText();
		QString type = comboBox_2->currentText();
		QString noOfBedrooms = comboBox_3->currentText();
		QString minSqFootage = lineEdit_3->text();
		QString maxSqFootage = lineEdit_4->text();
		QString minPrice = lineEdit->text();
		QString maxPrice = lineEdit_2->text();
		if (type != "None") {
			comboBox_2->setCurrentIndex(0);
		}
		if (noOfBedrooms != "None") {
			comboBox_3->setCurrentIndex(0);
		}
		if (!minSqFootage.isEmpty()) {
			lineEdit_3->setText("");
		}
		if (!maxSqFootage.isEmpty()) {
			lineEdit_4->setText("");
		}
		if (!minPrice.isEmpty()) {
			lineEdit->setText("");
		}
		if (!maxPrice.isEmpty()) {
			lineEdit_2->setText("");
		}
		lineEdit_3->setText(minSqFootage);
		lineEdit_4->setText(maxSqFootage);
		if (!minSqFootage.isEmpty() && !maxSqFootage.isEmpty()) {
			map<int, unordered_map<string, Property*>> filtered = system->FilterBySquareFootage(minSqFootage.toInt(), maxSqFootage.toInt());
			drawBoxes(scrollAreaWidgetContents, filtered, system, scrollArea,ListingsClass);
		}
		else if (minSqFootage.isEmpty() && minSqFootage.isEmpty()) {
			drawBoxes(scrollAreaWidgetContents, system->GetProperties(), system, scrollArea,ListingsClass);
		}
		});
	//QObject::connect(pushButton,&QPushButton::)
	QMetaObject::connectSlotsByName(ListingsClass);
} // setupUi
//by unordered map
void Listings::drawBoxes(QWidget* scrollAreaWidgetContents, unordered_map<string, Property*> filtered, System* system, QScrollArea* scrollArea,QStackedWidget* ListComponents) {
	scrollAreaWidgetContents = new QWidget();
	if ((filtered == system->GetProperties() && ((filtered.size() - system->unVerified.size()) > 0)) || (filtered.size() != 0 && filtered != system->GetProperties())) {
		int totalHeight;
		if (filtered == system->GetProperties()) {
			totalHeight = 200 * (filtered.size() - system->unVerified.size());
		}
		else {
			totalHeight = 200 * filtered.size();
		}
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
					PropertyDetails* details = new PropertyDetails();
					ListComponents->hide();
					ListComponents->addWidget(details);
					ListComponents->setCurrentWidget(details);
					details->setupUi(ListComponents, system, propertyId);
					ListComponents->show();
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
					editProperty->setupUi(ListComponents,system,propertyId);
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
//by map of unordererd map
void Listings::drawBoxes(QWidget* scrollAreaWidgetContents, map<int, unordered_map<string, Property*>> filtered, System* system, QScrollArea* scrollArea, QStackedWidget* ListComponents) {
	scrollAreaWidgetContents = new QWidget();
	if (filtered.size() != 0) {
		int totalProperties = 0;
		for (auto it = filtered.begin(); it != filtered.end(); ++it) {
			for (auto it2 = it->second.begin(); it2 != it->second.end(); ++it2) {
				totalProperties++;
			}
		}
		int totalHeight = 200 * totalProperties;
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
			for (auto it2 = it->second.begin(); it2 != it->second.end(); ++it2) {
				if (!it2->second->GetVerfied()) {
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
				string strPrice = "$" + to_string(it2->second->GetPrice());
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
				string strBedrooms = to_string(it2->second->GetNumberOfBedrooms()) + " Bedrooms";
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
				string strFootage = "<p>" + to_string(it2->second->GetSquareFootage()) + "ft<sup>2";
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
				strlocation += it2->second->GetLocation() + ",";
				strlocation += it2->second->GetBuildingNumber() + ",";
				strlocation += it2->second->GetApartmentNumber();
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
					"color:#808080;\n"
					"}"));
				horizontalLayout->addWidget(type);
				type->show();
				string strType = it2->second->GetPropertyType();
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
				auto cmpIt = std::find(system->propertyComparison.begin(), system->propertyComparison.end(), system->properties[it2->second->GetpropertyId()]);
				if (cmpIt == system->propertyComparison.end()) {
					menu->addAction(addToCompare);
				}
				else {
					menu->addAction(removeFromCompare);
				}
				Admin* admin = dynamic_cast<Admin*>(system->GetUsers()[system->currentUserId]);
				auto userProperties = system->GetUsers()[system->currentUserId]->GetUserProperties();
				string propertyId = it2->second->GetpropertyId();
				if (admin && it2->second->GetHighlighted()) {
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
				if (it2->second->GetHighlighted()) {
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
					admin->RemoveHighlight(propertyId,system);
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
void Listings::retranslateUi(QStackedWidget* ListingsClass)
{
	ListingsClass->setWindowTitle(QCoreApplication::translate("ListingsClass", "Listings", nullptr));
	label->setText(QCoreApplication::translate("ListingsClass", "All listings", nullptr));
	pushButton_3->setText(QCoreApplication::translate("ListingsClass", " Filter", nullptr));
	label_2->setText(QCoreApplication::translate("ListingsClass", "By Location :", nullptr));
	label_3->setText(QCoreApplication::translate("ListingsClass", "By Type :", nullptr));
	label_4->setText(QCoreApplication::translate("ListingsClass", "By No. of Bedrooms :", nullptr));
	label_5->setText(QCoreApplication::translate("ListingsClass", "By Price :", nullptr));
	lineEdit->setPlaceholderText(QCoreApplication::translate("ListingsClass", "Min. Price", nullptr));
	lineEdit_2->setPlaceholderText(QCoreApplication::translate("ListingsClass", "Max. Price", nullptr));
	label_6->setText(QCoreApplication::translate("ListingsClass", "By sq. Footage :", nullptr));
	lineEdit_3->setPlaceholderText(QCoreApplication::translate("ListingsClass", "Min. Area", nullptr));
	lineEdit_4->setPlaceholderText(QCoreApplication::translate("ListingsClass", "Max. Area", nullptr));
	/*pushButton->setText(QString());
	label_13->setText(QCoreApplication::translate("ListingsClass", "3 El Hegaz St., El Mahkama Station", nullptr));
	label_14->setText(QCoreApplication::translate("ListingsClass", "Townhouse", nullptr));
	label_15->setText(QCoreApplication::translate("ListingsClass", "2 Bedrooms", nullptr));
	label_16->setText(QCoreApplication::translate("ListingsClass", "<p>163m<sup>2", nullptr));
	label_17->setText(QCoreApplication::translate("ListingsClass", "$245,250", nullptr));
	label_18->setText(QString());
	pushButton_2->setText(QString());
	label_19->setText(QCoreApplication::translate("ListingsClass", "$245,250", nullptr));
	label_20->setText(QCoreApplication::translate("ListingsClass", "2 Bedrooms", nullptr));
	label_21->setText(QCoreApplication::translate("ListingsClass", "<p>163m<sup>2", nullptr));
	label_24->setText(QCoreApplication::translate("ListingsClass", "3 El Hegaz St., El Mahkama Station", nullptr));
	label_25->setText(QCoreApplication::translate("ListingsClass", "Townhouse", nullptr));*/
	pushButton_4->setText(QCoreApplication::translate("ListingsClass", " Add Property", nullptr));
} // retranslateUi
ClickEventFilter::ClickEventFilter(QObject* parent) : QObject(parent) {

}
void ClickEventFilter::addWidget(QWidget* widget) {
	widgets.append(widget);
	widget->installEventFilter(this);
}
// Override eventFilter to handle mouse events
bool ClickEventFilter::eventFilter(QObject* obj, QEvent* event) {
	if (event->type() == QEvent::MouseButtonPress) {
		QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(event);
		if (mouseEvent->button() == Qt::LeftButton) {
			for (QWidget* widget : widgets) {
				if (obj == widget) {
					qDebug() << "clicked";
					return true; // Event handled
				}
			}

		}
	}
	return false; // Event not handled
}