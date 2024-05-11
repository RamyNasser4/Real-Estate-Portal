#include <QWidget>
#ifndef EDITUSERXPRYNH_H
#define EDITUSERXPRYNH_H
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QStackedWidget>
#include "Dialog.h"
#include "System.h"
#include "MyProfile.h"
QT_BEGIN_NAMESPACE
class MyProfile;
class System;
class User;
class EditUser : public QWidget
{

    
public:
    explicit EditUser(QStackedWidget* parent = nullptr);
    ~EditUser();
    QWidget* widget;
    QFrame* frame;
    QLabel* label;
    QPushButton* pushButton;
    QLabel* label_2;
    QFrame* frame_2;
    QLineEdit* lineEdit;
    QLineEdit* lineEdit_2;
    QLineEdit* lineEdit_3;
    QLabel* label_3;
    QFrame* frame_3;
    QLineEdit* lineEdit_4;
    QLineEdit* lineEdit_5;
    QLineEdit* lineEdit_6;
    QPushButton* pushButton_2;
    QPushButton* pushButton_3;
    QPushButton* pushButton_4;

    void setupUi(QStackedWidget* stackWidget, System* system,MyProfile* profile);
    void retranslateUi(QStackedWidget* stackWidget, System* system);
    void DoneButtonClick(System* system);
private slots:
    void onPushButtonClicked();

};
/*namespace Ui {
    class EditUser : public EditUser {};
}*/ // namespace Ui


QT_END_NAMESPACE

#endif // EDITUSERXPRYNH_H

