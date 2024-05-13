#pragma once

#include <QWidget>
#include "ui_RequestDashboard.h"
#include "System.h"
class RequestDashboard : public QWidget
{
	Q_OBJECT

public:
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
    QLabel* label_47;
	RequestDashboard(QWidget *parent = nullptr);
	void setupUi(QWidget* tab3, System* system);
    void updateUi(System* system);
	~RequestDashboard();

private:
	//Ui::RequestDashboardClass ui;
};
