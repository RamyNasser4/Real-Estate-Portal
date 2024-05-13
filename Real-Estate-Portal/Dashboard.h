#pragma once

#include <QWidget>
#include "ui_Dashboard.h"
#ifndef DASHBOARDCWMRHX_H
#define DASHBOARDCWMRHX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <QMenu>
#include "System.h"
#include "PropertiesDashboard.h"
#include "RequestDashboard.h"
#include "UsersDashboard.h"
#include "AnalyticsDashboard.h"
#include "LogsDashboard.h"
QT_BEGIN_NAMESPACE
class Dashboard : public QWidget
{
public:
    QWidget* widget;
    QTabWidget* tabWidget;
    QWidget* tab;
    QWidget* tab_3;
    QWidget* tab_4;
    QWidget* tab_5;
    QWidget* tab_6;

	Q_OBJECT

public:
	Dashboard(QWidget *parent = nullptr);
    void setupUi(QStackedWidget* Dashboard,System* system);
    void retranslateUi(QWidget* Dashboard);
	~Dashboard();

private:
	//Ui::DashboardClass ui;
};
QT_END_NAMESPACE

#endif 