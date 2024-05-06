#pragma once

#include <QWidget>
#include "ui_Compare_3.h"
#ifndef COMPARE_20_3XYJNJT_H
#define COMPARE_20_3XYJNJT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE




class Compare_3 : public QWidget
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
    QPushButton* homeImage;

public:
    void setupUi(QWidget* Form);
    void retranslateUi(QWidget* Form);
	Compare_3(QWidget *parent = nullptr);
	~Compare_3();

private:
	//Ui::Compare_3Class ui;
};

QT_END_NAMESPACE

#endif // COMPARE_20_3XYJNJT_H
