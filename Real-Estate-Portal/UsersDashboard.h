#pragma once

#include <QWidget>
#include <QLineEdit>
#include <QDialog>
#include "ui_UsersDashboard.h"
#include "Dialog.h"
#include "System.h"

class UsersDashboard : public QWidget
{
	Q_OBJECT

public:
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
    QFrame* line_9;
    QLabel* label_48;
    QFrame* line_10;
    QLabel* label_49;
    QLabel* label_50;
    QLineEdit* lineEdit;
    QLineEdit* lineEdit_2;
    QLabel* label_51;
    QLineEdit* lineEdit_3;
    QLabel* label_52;
    QLineEdit* lineEdit_4;
    QLabel* label_53;
    QLineEdit* lineEdit_5;
    QPushButton* pushButton_3;
	UsersDashboard(QWidget *parent = nullptr);
    void setupUi(QWidget* tab_4, System* system);
    void drawUsers(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea);
	~UsersDashboard();

private:
	//Ui::UsersDashboardClass ui;
};
