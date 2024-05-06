#pragma once

#include <QWidget>
#include "ui_Compare_4.h"
#ifndef COMPARE_20_4FOKQML_H
#define COMPARE_20_4FOKQML_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE


class Compare_4 : public QWidget
{
	Q_OBJECT
public:
    QFrame* frame;
    QLabel* headLabel;
    QFrame* frame_2;
    QFrame* frame_3;
    QLabel* all_labels;
    QLabel* all_labels_3;
    QLabel* all_labels_7;
    QLabel* all_labels_9;
    QLabel* all_labels_11;
    QLabel* label;
    QLabel* label_2;
    QFrame* frame_5;
    QLabel* all_labels_2;
    QLabel* all_labels_4;
    QLabel* all_labels_8;
    QLabel* all_labels_10;
    QLabel* all_labels_12;
    QFrame* frame_4;
    QLabel* all_labels_5;
    QLabel* all_labels_6;
    QLabel* all_labels_13;
    QLabel* all_labels_14;
    QLabel* all_labels_15;
    QLabel* label_3;
    QFrame* frame_6;
    QLabel* all_labels_16;
    QLabel* all_labels_17;
    QLabel* all_labels_18;
    QLabel* all_labels_19;
    QLabel* all_labels_20;
    QLabel* label_4;
    QPushButton* homeImage;
public:
	Compare_4(QWidget *parent = nullptr);
    void setupUi(QWidget* Form);;
    void retranslateUi(QWidget* Form);
	~Compare_4();

private:
	//Ui::Compare_4Class ui;
};
QT_END_NAMESPACE

#endif // COMPARE_20_4FOKQML_H
