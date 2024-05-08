#pragma once

#include <QWidget>
#include "ui_Dashboard.h"
#ifndef DASHBOARDCWMRHX_H
#define DASHBOARDCWMRHX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE
class Dashboard : public QWidget
{
public:
    QWidget* widget;
    QTabWidget* tabWidget;
    QWidget* tab;
    QWidget* widget_2;
    QLabel* label;
    QFrame* line_8;
    QScrollArea* scrollArea_2;
    QWidget* scrollAreaWidgetContents_2;
    QLabel* label_38;
    QLabel* label_39;
    QFrame* frame_2;
    QLabel* label_12;
    QLabel* label_13;
    QLabel* label_14;
    QLabel* label_25;
    QLabel* label_26;
    QLabel* label_27;
    QLabel* label_28;
    QLabel* label_29;
    QLabel* label_30;
    QToolButton* toolButton;
    QFrame* frame_5;
    QLabel* label_31;
    QLabel* label_33;
    QLabel* label_34;
    QLabel* label_35;
    QLabel* label_36;
    QLabel* label_37;
    QLabel* label_40;
    QLabel* label_41;
    QLabel* label_42;
    QToolButton* toolButton_2;
    QPushButton* pushButton_7;
    QLabel* label_45;
    QWidget* tab_3;
    QFrame* line_5;
    QFrame* frame;
    QLabel* label_2;
    QLabel* label_3;
    QLabel* label_4;
    QLabel* label_5;
    QLabel* label_6;
    QLabel* label_7;
    QLabel* label_8;
    QLabel* label_9;
    QLabel* label_10;
    QPushButton* pushButton;
    QPushButton* pushButton_2;
    QLabel* label_11;
    QFrame* line_6;
    QLabel* label_21;
    QLabel* label_44;
    QWidget* tab_4;
    QLabel* label_22;
    QFrame* line_7;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QFrame* frame_4;
    QLabel* label_19;
    QLabel* label_20;
    QLabel* label_23;
    QLabel* label_24;
    QPushButton* pushButton_4;
    QLabel* label_43;
    QFrame* frame_3;
    QLabel* label_15;
    QLabel* label_16;
    QLabel* label_17;
    QLabel* label_18;
    QLabel* label_32;

	Q_OBJECT

public:
	Dashboard(QWidget *parent = nullptr);
    void setupUi(QWidget* Dashboard);
    void retranslateUi(QWidget* Dashboard);
	~Dashboard();

private:
	Ui::DashboardClass ui;
};
QT_END_NAMESPACE

#endif 