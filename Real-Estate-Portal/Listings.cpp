#include "Listings.h"
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
	pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:20px;\n"
		"border-radius: 10px;\n"
		"border:0.5px solid black;\n"
		"background-color: white;\n"
		"}\n"
		"/*QPushButton:hover{\n"
		"color:white;\n"
		"background-color:#407BFF;\n"
		"}*/"));
	QIcon icon;
	icon.addFile(QString::fromUtf8(":/Assets/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
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
	line = new QFrame(widget_2);
	line->setObjectName("line");
	line->setGeometry(QRect(690, 45, 16, 16));
	line->setFrameShape(QFrame::Shape::HLine);
	line->setFrameShadow(QFrame::Shadow::Sunken);
	lineEdit_2 = new QLineEdit(widget_2);
	lineEdit_2->setObjectName("lineEdit_2");
	lineEdit_2->setGeometry(QRect(715, 35, 61, 31));
	lineEdit_2->setStyleSheet(QString::fromUtf8(""));
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
	line_5 = new QFrame(widget);
	line_5->setObjectName("line_5");
	line_5->setGeometry(QRect(30, 170, 731, 16));
	line_5->setFrameShape(QFrame::Shape::HLine);
	line_5->setFrameShadow(QFrame::Shadow::Sunken);
	scrollArea = new QScrollArea(widget);
	scrollArea->setObjectName("scrollArea");
	scrollArea->setGeometry(QRect(10, 180, 761, 561));
	scrollArea->setWidgetResizable(true);
	scrollAreaWidgetContents = new QWidget();
	scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
	scrollAreaWidgetContents->setGeometry(QRect(0, 0, 759, 559));
	widget_3 = new QWidget(scrollAreaWidgetContents);
	widget_3->setObjectName("widget_3");
	widget_3->setGeometry(QRect(40, 230, 171, 131));
	widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
		"border-radius:15px;\n"
		"	background-image: url(:/Assets/home128.png);\n"
		"background-repeat:no-repeat;\n"
		"background-position:center;\n"
		"}\n"
		""));
	line_7 = new QFrame(scrollAreaWidgetContents);
	line_7->setObjectName("line_7");
	line_7->setGeometry(QRect(300, 270, 31, 16));
	line_7->setStyleSheet(QString::fromUtf8("#line_7{\n"
		"background-color:white;\n"
		"}"));
	line_7->setFrameShape(QFrame::Shape::HLine);
	line_7->setFrameShadow(QFrame::Shadow::Sunken);
	pushButton = new QPushButton(scrollAreaWidgetContents);
	pushButton->setObjectName("pushButton");
	pushButton->setGeometry(QRect(10, 210, 741, 171));
	pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"background:white;\n"
		"border:none;\n"
		"border-radius:15px;\n"
		"}"));
	label_17 = new QLabel(scrollAreaWidgetContents);
	label_17->setObjectName("label_17");
	label_17->setGeometry(QRect(230, 330, 121, 31));
	label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background-color:white;\n"
		"font-family:sans-serif;\n"
		"font-size:24px;\n"
		"font-weight:700;\n"
		"color:#407BFF;\n"
		"}"));
	label_15 = new QLabel(scrollAreaWidgetContents);
	label_15->setObjectName("label_15");
	label_15->setGeometry(QRect(230, 270, 71, 16));
	label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background-color:white;\n"
		"color:#808080;\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:11px;\n"
		"}"));
	label_16 = new QLabel(scrollAreaWidgetContents);
	label_16->setObjectName("label_16");
	label_16->setGeometry(QRect(340, 270, 49, 16));
	label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background-color:white;\n"
		"color:#808080;\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:11px;\n"
		"}"));
	horizontalWidget = new QWidget(scrollAreaWidgetContents);
	horizontalWidget->setObjectName("horizontalWidget");
	horizontalWidget->setGeometry(QRect(218, 230, 331, 41));
	horizontalWidget->setStyleSheet(QString::fromUtf8("background:white;"));
	horizontalLayout = new QHBoxLayout(horizontalWidget);
	horizontalLayout->setSpacing(6);
	horizontalLayout->setContentsMargins(11, 11, 11, 11);
	horizontalLayout->setObjectName("horizontalLayout");
	label_13 = new QLabel(horizontalWidget);
	label_13->setObjectName("label_13");
	label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background-color:white;\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:14px;\n"
		"}"));

	horizontalLayout->addWidget(label_13);

	line_6 = new QFrame(horizontalWidget);
	line_6->setObjectName("line_6");
	line_6->setStyleSheet(QString::fromUtf8("#line_6{\n"
		"background:white;\n"
		"}"));
	line_6->setFrameShape(QFrame::Shape::HLine);
	line_6->setFrameShadow(QFrame::Shadow::Sunken);

	horizontalLayout->addWidget(line_6);

	label_14 = new QLabel(horizontalWidget);
	label_14->setObjectName("label_14");
	label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background:white;\n"
		"font-family:sans-serif;\n"
		"font-weight:700;\n"
		"color:#808080;\n"
		"}"));

	horizontalLayout->addWidget(label_14);

	label_18 = new QLabel(scrollAreaWidgetContents);
	label_18->setObjectName("label_18");
	label_18->setGeometry(QRect(110, 30, 581, 461));
	label_18->setPixmap(QPixmap(QString::fromUtf8(":/Assets/9318694-removebg-preview.png")));
	horizontalWidget_2 = new QWidget(scrollAreaWidgetContents);
	horizontalWidget_2->setObjectName("horizontalWidget_2");
	horizontalWidget_2->setGeometry(QRect(218, 30, 331, 41));
	horizontalWidget_2->setStyleSheet(QString::fromUtf8("background:white;"));
	horizontalLayout_3 = new QHBoxLayout(horizontalWidget_2);
	horizontalLayout_3->setSpacing(6);
	horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
	horizontalLayout_3->setObjectName("horizontalLayout_3");
	label_24 = new QLabel(horizontalWidget_2);
	label_24->setObjectName("label_24");
	label_24->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background-color:white;\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:14px;\n"
		"}"));

	horizontalLayout_3->addWidget(label_24);

	line_10 = new QFrame(horizontalWidget_2);
	line_10->setObjectName("line_10");
	line_10->setStyleSheet(QString::fromUtf8("#line_6{\n"
		"background:white;\n"
		"}"));
	line_10->setFrameShape(QFrame::Shape::HLine);
	line_10->setFrameShadow(QFrame::Shadow::Sunken);

	horizontalLayout_3->addWidget(line_10);

	label_25 = new QLabel(horizontalWidget_2);
	label_25->setObjectName("label_25");
	label_25->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background:white;\n"
		"font-family:sans-serif;\n"
		"font-weight:700;\n"
		"color:#808080;\n"
		"}"));

	horizontalLayout_3->addWidget(label_25);

	line_8 = new QFrame(scrollAreaWidgetContents);
	line_8->setObjectName("line_8");
	line_8->setGeometry(QRect(300, 70, 31, 16));
	line_8->setStyleSheet(QString::fromUtf8("#line_8{\n"
		"background-color:white;\n"
		"}"));
	line_8->setFrameShape(QFrame::Shape::HLine);
	line_8->setFrameShadow(QFrame::Shadow::Sunken);
	label_19 = new QLabel(scrollAreaWidgetContents);
	label_19->setObjectName("label_19");
	label_19->setGeometry(QRect(230, 130, 121, 31));
	label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background-color:white;\n"
		"font-family:sans-serif;\n"
		"font-size:24px;\n"
		"font-weight:700;\n"
		"color:#407BFF;\n"
		"}"));
	label_20 = new QLabel(scrollAreaWidgetContents);
	label_20->setObjectName("label_20");
	label_20->setGeometry(QRect(230, 70, 71, 16));
	label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background-color:white;\n"
		"color:#808080;\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:11px;\n"
		"}"));
	widget_4 = new QWidget(scrollAreaWidgetContents);
	widget_4->setObjectName("widget_4");
	widget_4->setGeometry(QRect(40, 30, 171, 131));
	widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
		"border-radius:15px;\n"
		"	background-image: url(:/Assets/home128.png);\n"
		"background-repeat:no-repeat;\n"
		"background-position:center;\n"
		"}\n"
		""));
	label_21 = new QLabel(scrollAreaWidgetContents);
	label_21->setObjectName("label_21");
	label_21->setGeometry(QRect(340, 70, 49, 16));
	label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
		"background-color:white;\n"
		"color:#808080;\n"
		"font-family:sans-serif;\n"
		"font-weight:600;\n"
		"font-size:11px;\n"
		"}"));
	pushButton_2 = new QPushButton(scrollAreaWidgetContents);
	pushButton_2->setObjectName("pushButton_2");
	pushButton_2->setGeometry(QRect(10, 10, 741, 171));
	pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
		"background:white;\n"
		"border:none;\n"
		"border-radius:15px;\n"
		"}"));
	scrollArea->setWidget(scrollAreaWidgetContents);
	label_18->raise();
	pushButton->raise();
	widget_3->raise();
	label_15->raise();
	label_16->raise();
	pushButton_2->raise();
	horizontalWidget->raise();
	horizontalWidget_2->raise();
	label_17->raise();
	label_19->raise();
	label_20->raise();
	label_21->raise();
	line_7->raise();
	line_8->raise();
	widget_4->raise();
	scrollArea->raise();
	label->raise();
	pushButton_3->raise();
	widget_2->raise();
	line_5->raise();

	widget_2->hide();
	retranslateUi(ListingsClass);
	QObject::connect(pushButton_3, &QPushButton::clicked, widget_2, [=]() {
		delete scrollAreaWidgetContents;
		scrollAreaWidgetContents = new QWidget();
		scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
		scrollAreaWidgetContents->setGeometry(QRect(0, 0, 759, 559));
		if (widget_2->isVisible()) {
			widget_2->hide();
		}
		else {
			widget_2->show();
		}
		});

	QMetaObject::connectSlotsByName(ListingsClass);
} // setupUi

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
	pushButton->setText(QString());
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
	label_25->setText(QCoreApplication::translate("ListingsClass", "Townhouse", nullptr));
} // retranslateUi