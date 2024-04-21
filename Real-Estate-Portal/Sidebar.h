#pragma once

#include <QMainWindow>
#ifndef DESIGNERZPPFKX_H
#define DESIGNERZPPFKX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE
#include "ui_SideBar.h"

class Sidebar : public QMainWindow
{
	Q_OBJECT

public:
    QWidget* centralwidget;
    QWidget* SideBar;
    QPushButton* pushButton_2;
    QPushButton* pushButton_3;
    QPushButton* pushButton_4;
    QPushButton* pushButton_5;
    QPushButton* pushButton_6;
    QPushButton* pushButton_8;
    QPushButton* pushButton_9;
    QPushButton* pushButton_10;
    QPushButton* pushButton_11;
    QPushButton* pushButton_12;
    QMenuBar* menubar;
    QStatusBar* statusbar;

    void setupUi(QMainWindow* MainWindow);
    void retranslateUi(QMainWindow* MainWindow);
	Sidebar(QWidget *parent = nullptr);
	~Sidebar();

private:
	Ui::SideBarClass ui;
};
namespace Ui {
    class MainWindow : public Sidebar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // DESIGNERZPPFKX_H
