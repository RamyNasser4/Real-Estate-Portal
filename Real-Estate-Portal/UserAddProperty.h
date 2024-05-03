#pragma once

#include <QWidget>
#include "ui_UserAddProperty.h"

class UserAddProperty : public QWidget
{
	Q_OBJECT

public:
	UserAddProperty(QWidget *parent = nullptr);
	~UserAddProperty();

private:
	Ui::UserAddPropertyClass ui;
};
