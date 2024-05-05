#pragma once

#include <QWidget>
#include "ui_AdminAddProperty.h"

class AdminAddProperty : public QWidget
{
	Q_OBJECT

public:
	AdminAddProperty(QWidget *parent = nullptr);
	~AdminAddProperty();

private:
	Ui::AdminAddPropertyClass ui;
};
