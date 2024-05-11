#pragma once

#include <QWidget>
#include "ui_ChangePassword.h"
#include <QStackedWidget>
#include "System.h"
#include "Dialog.h"
class MyProfile;
class ChangePassword : public QWidget
{
	Q_OBJECT

public:
    QWidget* widget;
    QFrame* frame;
    QLabel* label;
    QPushButton* pushButton;
    QLabel* label_2;
    QFrame* frame_2;
    QLineEdit* lineEdit;
    QLineEdit* lineEdit_2;
    QPushButton* pushButton_2;
    QPushButton* pushButton_3;
    void setupUi(QStackedWidget* ChangePasswordClass,System* system, MyProfile* myprofile);
    void retranslateUi(QStackedWidget* ChangePasswordClass, System* system);
    void DoneButtonClick(System* system);
	ChangePassword(QWidget *parent = nullptr);
	~ChangePassword();

private:
	//Ui::ChangePasswordClass ui;
};
