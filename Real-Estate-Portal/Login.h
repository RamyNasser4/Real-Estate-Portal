#pragma once

#include <QWidget>
#include "ui_Login.h"
#ifndef WIDGETZQCLGP_H
#define WIDGETZQCLGP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QFontDatabase>
#include <QStackedWidget>
#include "System.h"
#include "Home.h"
#include "Signup.h"
QT_BEGIN_NAMESPACE

class Login : public QWidget
{
	Q_OBJECT
public slots:
    void onPushButton1Click(System* system);
public:
    QFrame* frame;
    QFrame* frame_2;
    QPushButton* pushButton;
    QLabel* label;
    QLineEdit* lineEdit;
    QLineEdit* lineEdit_2;
    QLabel* label_2;
    QLabel* label_3;
    QLabel* label_4;
    QPushButton* pushButton_2;

    void setupUi(QStackedWidget* Form,System* system,Home* home,Signup* signup);
public:
    //void onPushButton1Click(System* system);
    void retranslateUi(QStackedWidget* Form);
	Login(QWidget *parent = nullptr);
	~Login();

private:
	Ui::LoginClass ui;
};
namespace Ui {
    class Form1 : public Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WIDGETZQCLGP_H
