#pragma once

#include <QWidget>
#include "ui_Home.h"

class Home : public QWidget
{
	Q_OBJECT

public:
	Home(QWidget *parent = nullptr);
	~Home();

private:
	Ui::HomeClass ui;
};
