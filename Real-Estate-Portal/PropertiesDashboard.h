#pragma once

#include <QWidget>
#include "ui_PropertiesDashboard.h"
#include "System.h"
#include <QStackedWidget>
#include <QMenu>
#include "EditProperty.h"
class PropertiesDashboard : public QWidget
{
	Q_OBJECT

public:
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
    QLabel* label_46;
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
    void setupUi(QWidget* PropertiesDashboardClass,System* system, QStackedWidget* Dashboard);
    void drawBoxes(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea, QStackedWidget* ListComponents);
    void retranslateUi(QWidget* PropertiesDashboardClass);
	PropertiesDashboard(QWidget *parent = nullptr);
	~PropertiesDashboard();

private:
	//Ui::PropertiesDashboardClass ui;
};
