#pragma once

#include <QWidget>
#include "ui_PropertyDetails.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include <QStackedWidget>
#include "System.h"
#include "Property.h"
class PropertyDetails : public QWidget
{
	Q_OBJECT

public:
    QWidget* widget;
    QWidget* widget_2;
    QLabel* label_24;
    QLabel* label;
    QLabel* label_2;
    QLabel* label_3;
    QLabel* label_19;
    QLabel* label_4;
    QLabel* label_5;
    QLabel* label_6;
    void setupUi(QStackedWidget* PropertyDetailsClass,System* system,string propertyId);
    void retranslateUi(QStackedWidget* PropertyDetailsClass,System* system, string propertyId);
	PropertyDetails(QWidget *parent = nullptr);
	~PropertyDetails();
private:
	Ui::PropertyDetailsClass ui;
};
