#pragma once

#include <QWidget>
#include "ui_Compare.h"
#ifndef COMPAREDAAWMO_H
#define COMPAREDAAWMO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE
class Compare : public QWidget
{
	Q_OBJECT
private:
    QFrame* frame;
    QLabel* headLabel;
    QFrame* frame_2;
    QFrame* frame_3;
    QLabel* all_labels;
    QLabel* all_labels_3;
    QLabel* all_labels_7;
    QLabel* all_labels_9;
    QLabel* all_labels_11;
    QFrame* frame_5;
    QLabel* all_labels_2;
    QLabel* all_labels_4;
    QLabel* all_labels_8;
    QLabel* all_labels_10;
    QLabel* all_labels_12;
    QLabel* label;
    QLabel* label_2;
    QPushButton* homeImage;
public:
	Compare(QWidget *parent = nullptr);
    void setupUi(QWidget* Form);
    void retranslateUi(QWidget* Form);
	~Compare();

private:
	//Ui::CompareClass ui;
};
QT_END_NAMESPACE

#endif // COMPAREDAAWMO_H
