#include "Listings.h"
void Listings::setupUi(QStackedWidget* ListingsClass)
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
        "border-radius: none;\n"
        "}"));
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
    label_3 = new QLabel(widget_2);
    label_3->setObjectName("label_3");
    label_3->setGeometry(QRect(150, 10, 91, 21));
    label_3->setStyleSheet(QString::fromUtf8(""));
    comboBox_2 = new QComboBox(widget_2);
    comboBox_2->setObjectName("comboBox_2");
    comboBox_2->setGeometry(QRect(150, 40, 111, 22));
    comboBox_2->setStyleSheet(QString::fromUtf8(""));
    label_4 = new QLabel(widget_2);
    label_4->setObjectName("label_4");
    label_4->setGeometry(QRect(290, 10, 151, 21));
    label_4->setStyleSheet(QString::fromUtf8(""));
    comboBox_3 = new QComboBox(widget_2);
    comboBox_3->setObjectName("comboBox_3");
    comboBox_3->setGeometry(QRect(290, 40, 111, 22));
    comboBox_3->setStyleSheet(QString::fromUtf8(""));
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
    pushButton = new QPushButton(widget);
    pushButton->setObjectName("pushButton");
    pushButton->setGeometry(QRect(20, 200, 741, 171));
    pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "background:white;\n"
        "border:none;\n"
        "border-radius:15px;\n"
        "}"));
    line_5 = new QFrame(widget);
    line_5->setObjectName("line_5");
    line_5->setGeometry(QRect(30, 170, 731, 16));
    line_5->setFrameShape(QFrame::Shape::HLine);
    line_5->setFrameShadow(QFrame::Shadow::Sunken);
    widget_3 = new QWidget(widget);
    widget_3->setObjectName("widget_3");
    widget_3->setGeometry(QRect(50, 220, 171, 131));
    widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
        "border-radius:15px;\n"
        "	background-image: url(:/Assets/home128.png);\n"
        "background-repeat:no-repeat;\n"
        "background-position:center;\n"
        "}\n"
        ""));
    horizontalWidget = new QWidget(widget);
    horizontalWidget->setObjectName("horizontalWidget");
    horizontalWidget->setGeometry(QRect(240, 220, 331, 31));
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

    label_15 = new QLabel(widget);
    label_15->setObjectName("label_15");
    label_15->setGeometry(QRect(240, 260, 71, 16));
    label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "color:#808080;\n"
        "font-family:sans-serif;\n"
        "font-weight:600;\n"
        "font-size:11px;\n"
        "}"));
    line_7 = new QFrame(widget);
    line_7->setObjectName("line_7");
    line_7->setGeometry(QRect(310, 260, 31, 16));
    line_7->setStyleSheet(QString::fromUtf8("#line_7{\n"
        "background-color:white;\n"
        "}"));
    line_7->setFrameShape(QFrame::Shape::HLine);
    line_7->setFrameShadow(QFrame::Shadow::Sunken);
    label_16 = new QLabel(widget);
    label_16->setObjectName("label_16");
    label_16->setGeometry(QRect(350, 260, 49, 16));
    label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "color:#808080;\n"
        "font-family:sans-serif;\n"
        "font-weight:600;\n"
        "font-size:11px;\n"
        "}"));
    label_17 = new QLabel(widget);
    label_17->setObjectName("label_17");
    label_17->setGeometry(QRect(240, 320, 121, 31));
    label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "font-family:sans-serif;\n"
        "font-size:24px;\n"
        "font-weight:700;\n"
        "color:#407BFF;\n"
        "}"));
    label_18 = new QLabel(widget);
    label_18->setObjectName("label_18");
    label_18->setGeometry(QRect(120, 220, 581, 461));
    label_18->setPixmap(QPixmap(QString::fromUtf8(":/Assets/9318694-removebg-preview.png")));
    label_18->raise();
    label->raise();
    pushButton_3->raise();
    widget_2->raise();
    pushButton->raise();
    line_5->raise();
    widget_3->raise();
    horizontalWidget->raise();
    label_15->raise();
    line_7->raise();
    label_16->raise();
    label_17->raise();

    retranslateUi(ListingsClass);
    QObject::connect(pushButton_3, &QPushButton::clicked, widget_2, qOverload<>(&QWidget::show));

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
} // retranslateUi