#pragma once

#include <QWidget>
#include "ui_PropertyDetails.h"

class PropertyDetails : public QWidget
{
	Q_OBJECT

public:
	PropertyDetails(QWidget *parent = nullptr);
	~PropertyDetails();

private:
	Ui::PropertyDetailsClass ui;
};
