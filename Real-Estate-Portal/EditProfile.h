#pragma once

#include <QWidget>
#include "ui_EditProfile.h"
#include <QStackedWidget>
#include <QDialog>
#include "System.h"
#include "Dialog.h"
class MyProfile;
class EditProfile : public QWidget
{
	Q_OBJECT

public:
    QWidget* widget;
    QFrame* frame;
    QLabel* label;
    QPushButton* pushButton;
    QLabel* label_3;
    QFrame* frame_3;
    QLineEdit* lineEdit_4;
    QLineEdit* lineEdit_5;
    QLineEdit* lineEdit_6;
    QPushButton* pushButton_2;
    QPushButton* pushButton_4;
    void setupUi(QStackedWidget* EditProfileClass,System* system,MyProfile* myprofile);
    void retranslateUi(QStackedWidget* EditProfileClass, System* system);
    void DoneButtonClick(System* system);
	EditProfile(QWidget *parent = nullptr);
	~EditProfile();

private:
	//Ui::EditProfileClass ui;
};
