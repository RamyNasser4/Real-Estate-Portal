#pragma once

#include <QWidget>
#include "ui_EditProperty.h"

class EditProperty : public QWidget
{
	Q_OBJECT

public:
	EditProperty(QWidget *parent = nullptr);
	~EditProperty();

private:
	Ui::EditPropertyClass ui;
};
