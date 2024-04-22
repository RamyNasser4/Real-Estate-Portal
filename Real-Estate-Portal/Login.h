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
QT_BEGIN_NAMESPACE

class Login : public QWidget
{
	Q_OBJECT
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

    void setupUi(QWidget* Form);
    void retranslateUi(QWidget* Form);
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
