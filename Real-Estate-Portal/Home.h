#pragma once
/********************************************************************************
** Form generated from reading UI file 'HomeIySYmD.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef HOMEIYSYMD_H
#define HOMEIYSYMD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE
#include "ui_Home.h"
#include "Listings.h"
#include <QEvent>
#include <string>
using namespace std;
class Home : public QWidget
{
	Q_OBJECT

public:
    QWidget* widget;
    QPushButton* pushButton;
    QWidget* widget_2;
    QWidget* widget_3;
    QPushButton* pushButton_4;
    QPushButton* pushButton_5;
    QWidget* widget_4;
    QPushButton* pushButton_8;
    QStackedWidget* stackedWidget;
    //QWidget* page;
    Listings* page;
    QLabel* label;
    QPushButton* pushButton_3;
    QComboBox* comboBox;
    QWidget* page_2;
    void setupUi(QStackedWidget* HomeClass, System* system);
    void retranslateUi(QStackedWidget* HomeClass);
	Home(QWidget *parent=nullptr);

private:
	//Ui::HomeClass ui;
};


class HoverEventFilter : public QObject {
    Q_OBJECT
public:
    HoverEventFilter(QWidget* parentWidget, QPushButton* buttonToStyle, QObject* parent,string Hover,string noHover);

protected:
    bool eventFilter(QObject* obj, QEvent* event) override;

private:
    QWidget* m_parentWidget;
    QPushButton* m_buttonToStyle;
    string noHover;
    string Hover;
};
namespace Ui {
    class Form2 : public Home {};
} // namespace Ui
QT_END_NAMESPACE

#endif HOMEIYSYMD_H

