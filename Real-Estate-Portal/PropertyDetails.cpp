#include "PropertyDetails.h"
PropertyDetails::PropertyDetails(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
void PropertyDetails::setupUi(QStackedWidget* PropertyDetailsClass, System* system, string propertyId)
{
    if (PropertyDetailsClass->objectName().isEmpty())
        PropertyDetailsClass->setObjectName("PropertyDetailsClass");
    PropertyDetailsClass->resize(801, 761);
    widget = new QWidget(PropertyDetailsClass);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(0, 0, 801, 761));
    widget->setStyleSheet(QString::fromUtf8("#widget{\n"
        "background-image: url(:/Assets/apartments.jpg);\n"
        "background-repeat:no-repeat;\n"
        "}"));
    widget_2 = new QWidget(widget);
    widget_2->setObjectName("widget_2");
    widget_2->setGeometry(QRect(0, 230, 801, 531));
    widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
        "background-color:white;\n"
        "border-top-left-radius:30%;\n"
        "border-top-right-radius:30%;\n"
        "}"));
    label_24 = new QLabel(widget_2);
    label_24->setObjectName("label_24");
    label_24->setGeometry(QRect(30, 30, 481, 51));
    label_24->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "font-family:sans-serif;\n"
        "font-weight:700;\n"
        "font-size:24px;\n"
        "}"));
    label = new QLabel(widget_2);
    label->setObjectName("label");
    label->setGeometry(QRect(30, 120, 111, 31));
    label->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background:white;\n"
        "font-family:sans-serif;\n"
        "font-weight:700;\n"
        "font-size:17px;\n"
        "color:#808080;\n"
        "}"));
    label_2 = new QLabel(widget_2);
    label_2->setObjectName("label_2");
    label_2->setGeometry(QRect(30, 70, 241, 31));
    label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "color:#808080;\n"
        "font-family:sans-serif;\n"
        "font-weight:600;\n"
        "font-size:15px;\n"
        "}"));
    label_3 = new QLabel(widget_2);
    label_3->setObjectName("label_3");
    label_3->setGeometry(QRect(30, 180, 281, 31));
    label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "color:#2B2B2A;\n"
        "font-family:sans-serif;\n"
        "font-weight:600;\n"
        "font-size:17px;\n"
        "}"));
    label_19 = new QLabel(widget_2);
    label_19->setObjectName("label_19");
    label_19->setGeometry(QRect(630, 30, 161, 51));
    label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "font-family:sans-serif;\n"
        "font-size:27px;\n"
        "font-weight:700;\n"
        "color:#407BFF;\n"
        "}"));
    label_4 = new QLabel(widget_2);
    label_4->setObjectName("label_4");
    label_4->setGeometry(QRect(30, 240, 281, 31));
    label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "font-family:sans-serif;\n"
        "color:#2B2B2A;\n"
        "font-weight:600;\n"
        "font-size:17px;\n"
        "}"));
    label_5 = new QLabel(widget_2);
    label_5->setObjectName("label_5");
    label_5->setGeometry(QRect(30, 310, 161, 21));
    label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "color:#2B2B2A;\n"
        "font-family:sans-serif;\n"
        "font-weight:600;\n"
        "font-size:17px;\n"
        "}"));
    label_6 = new QLabel(widget_2);
    label_6->setObjectName("label_6");
    label_6->setGeometry(QRect(30, 350, 751, 221));
    label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "color:#2B2B2A;\n"
        "font-size:14px;\n"
        "font-weight:600;\n"
        "}"));
    label_6->setScaledContents(false);
    label_6->setAlignment(Qt::AlignmentFlag::AlignLeading | Qt::AlignmentFlag::AlignLeft | Qt::AlignmentFlag::AlignTop);
    label_6->setWordWrap(true);

    retranslateUi(PropertyDetailsClass,system,propertyId);

    QMetaObject::connectSlotsByName(PropertyDetailsClass);
} // setupUi
void PropertyDetails::retranslateUi(QStackedWidget* PropertyDetailsClass, System* system, string propertyId)
{
    Property* currentProperty = system->GetProperty(propertyId);
    PropertyDetailsClass->setWindowTitle(QCoreApplication::translate("PropertyDetailsClass", "PropertyDetails", nullptr));
    string strlocation = currentProperty->GetLocation() + "," + currentProperty->GetBuildingNumber() + "," + to_string(currentProperty->GetApartmentNumber());
    label_24->setText(QCoreApplication::translate("PropertyDetailsClass", strlocation.c_str(), nullptr));
    string type = currentProperty->GetLocation();
    label->setText(QCoreApplication::translate("PropertyDetailsClass", type.c_str(), nullptr));
    string bedroomsAndFootage = "<p>" + to_string(currentProperty->GetNumberOfBedrooms()) + " Bedrooms &nbsp;&#9679;&nbsp;&nbsp;" + to_string(currentProperty->GetSquareFootage()) + "ft<sup>2";
    label_2->setText(QCoreApplication::translate("PropertyDetailsClass", bedroomsAndFootage.c_str(), nullptr));
    string userName = "Listed By : " + system->GetUser(currentProperty->GetUserId())->GetName();
    label_3->setText(QCoreApplication::translate("PropertyDetailsClass", userName.c_str(), nullptr));
    string price = "$" + to_string(currentProperty->GetPrice());
    label_19->setText(QCoreApplication::translate("PropertyDetailsClass", price.c_str(), nullptr));
    string userphone = "Contact Info : " + system->GetUser(currentProperty->GetUserId())->GetMobileNumber();
    label_4->setText(QCoreApplication::translate("PropertyDetailsClass", userphone.c_str(), nullptr));
    label_5->setText(QCoreApplication::translate("PropertyDetailsClass", "Description", nullptr));
    string description = currentProperty->GetPropertyDescription();
    label_6->setText(QCoreApplication::translate("PropertyDetailsClass", description.c_str(), nullptr));
} // retranslateUi

PropertyDetails::~PropertyDetails()
{}
