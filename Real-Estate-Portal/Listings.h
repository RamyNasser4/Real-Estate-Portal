#pragma once

#include <QWidget>
#include "ui_Listings.h"

class Listings : public QWidget
{
	Q_OBJECT

public:
	Listings(QWidget *parent = nullptr);
	~Listings();

private:
	Ui::ListingsClass ui;
};
