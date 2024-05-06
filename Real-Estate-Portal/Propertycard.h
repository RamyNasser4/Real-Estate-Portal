#pragma once

#include <QWidget>
#include "ui_Propertycard.h"
#ifndef WIDGETXJMUMX_H
#define WIDGETXJMUMX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE
class Propertycard : public QWidget
{
	Q_OBJECT

public:
    QWidget* PropertyCard;
    QLabel* label;
    QLabel* label_2;
    QLabel* label_3;
    QLabel* label_4;
    QLabel* label_5;
    QLabel* label_6;
    QLabel* label_7;
    QLabel* label_8;

    void setupUi(QWidget* Form);
    void retranslateUi(QWidget* Form);
	Propertycard(QWidget *parent = nullptr);
	~Propertycard();

private:
	Ui::PropertycardClass ui;
};
namespace Ui {
    class Form123213 : public Propertycard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WIDGETXJMUMX_H