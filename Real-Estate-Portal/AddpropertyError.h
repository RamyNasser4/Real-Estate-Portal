#pragma once

#include <QDialog>
#include "ui_AddpropertyError.h"

class AddpropertyError : public QDialog
{
	Q_OBJECT

public:
	AddpropertyError(QWidget *parent = nullptr);
	~AddpropertyError();

private:
	Ui::AddpropertyErrorClass ui;
};
