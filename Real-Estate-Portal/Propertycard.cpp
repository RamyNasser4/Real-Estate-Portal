#include "Propertycard.h"

Propertycard::Propertycard(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}
void Propertycard::setupUi(QWidget* Form) {
    if (Form->objectName().isEmpty())
        Form->setObjectName("Form");
    Form->resize(248, 298);
    PropertyCard = new QWidget(Form);
    PropertyCard->setObjectName("PropertyCard");
    PropertyCard->setGeometry(QRect(0, 0, 250, 300));
    label = new QLabel(PropertyCard);
    label->setObjectName("label");
    label->setGeometry(QRect(80, 10, 101, 20));
    label_2 = new QLabel(PropertyCard);
    label_2->setObjectName("label_2");
    label_2->setGeometry(QRect(180, 270, 49, 16));
    label_3 = new QLabel(PropertyCard);
    label_3->setObjectName("label_3");
    label_3->setGeometry(QRect(10, 70, 49, 16));
    label_4 = new QLabel(PropertyCard);
    label_4->setObjectName("label_4");
    label_4->setGeometry(QRect(10, 100, 71, 20));
    label_5 = new QLabel(PropertyCard);
    label_5->setObjectName("label_5");
    label_5->setGeometry(QRect(10, 220, 71, 20));
    label_6 = new QLabel(PropertyCard);
    label_6->setObjectName("label_6");
    label_6->setGeometry(QRect(10, 190, 91, 21));
    label_7 = new QLabel(PropertyCard);
    label_7->setObjectName("label_7");
    label_7->setGeometry(QRect(10, 160, 91, 21));
    label_8 = new QLabel(PropertyCard);
    label_8->setObjectName("label_8");
    label_8->setGeometry(QRect(10, 130, 91, 20));

    retranslateUi(Form);

    QMetaObject::connectSlotsByName(Form);
}
void Propertycard::retranslateUi(QWidget* Form) {
    Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
    label->setText(QCoreApplication::translate("Form", "Property Type", nullptr));
    label_2->setText(QCoreApplication::translate("Form", "xxx ft", nullptr));
    label_3->setText(QCoreApplication::translate("Form", "Location:", nullptr));
    label_4->setText(QCoreApplication::translate("Form", "Building No:", nullptr));
    label_5->setText(QCoreApplication::translate("Form", "Added By:", nullptr));
    label_6->setText(QCoreApplication::translate("Form", "Contact Number:", nullptr));
    label_7->setText(QCoreApplication::translate("Form", "Price:", nullptr));
    label_8->setText(QCoreApplication::translate("Form", "Appartment No:", nullptr));
}
Propertycard::~Propertycard()
{}
