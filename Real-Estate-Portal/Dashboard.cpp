#include "Dashboard.h"

Dashboard::Dashboard(QWidget* parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
/********************************************************************************
** Form generated from reading UI file 'DashboardcwMrHx.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/


void Dashboard::setupUi(QStackedWidget* Dashboard, System* system)
{
	if (Dashboard->objectName().isEmpty())
		Dashboard->setObjectName("Dashboard");
	Dashboard->resize(797, 741);
	widget = new QWidget(Dashboard);
	widget->setObjectName("widget");
	widget->setGeometry(QRect(-1, -1, 801, 741));
	widget->setStyleSheet(QString::fromUtf8("QWidget\n"
		"{\n"
		"background-color:#CCD0CD;\n"
		"\n"
		"}"));
	tabWidget = new QTabWidget(widget);
	tabWidget->setObjectName("tabWidget");
	tabWidget->setGeometry(QRect(0, 20, 801, 741));
	tabWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
		"color:black;\n"
		"}\n"
		"QFrame{\n"
		"\n"
		"}"));
	tab = new QWidget();
	tab->setObjectName("tab");
	PropertiesDashboard* propertiesDashboard = new PropertiesDashboard();
	propertiesDashboard->setupUi(tab, system, Dashboard);
	tabWidget->addTab(tab, QString());
	tab_3 = new QWidget();
	tab_3->setObjectName("tab_3");
	RequestDashboard* requestDashboard = new RequestDashboard();
	requestDashboard->setupUi(tab_3, system);
	tabWidget->addTab(tab_3, QString());
	tab_4 = new QWidget();
	tab_4->setObjectName("tab_4");
	UsersDashboard* usersDashboard = new UsersDashboard();
	usersDashboard->setupUi(tab_4, system);
	tabWidget->addTab(tab_4, QString());
	tab_5 = new QWidget();
	tab_5->setObjectName("tab_5");
	AnalyticsDashboard* analyticsDashboard = new AnalyticsDashboard();
	analyticsDashboard->setupUi(tab_5, system, Dashboard);
	tabWidget->addTab(tab_5, QString("Analytics"));
	tab_6 = new QWidget();
	tab_6->setObjectName("tab_6");
	LogsDashboard* logsDashboard = new LogsDashboard();
	logsDashboard->setupUi(tab_6);
	tabWidget->addTab(tab_6, QString("Logs"));
	QObject::connect(tabWidget, &QTabWidget::currentChanged, [=]() {
		if (tabWidget->currentIndex() == 1) {
			requestDashboard->updateUi(system);
		}
		else if (tabWidget->currentIndex() == 3) {
			analyticsDashboard->updateUi(system, Dashboard);
		}
		});
	retranslateUi(Dashboard);
	tabWidget->setCurrentIndex(0);


	QMetaObject::connectSlotsByName(Dashboard);
} // setupUi
void Dashboard::retranslateUi(QWidget* Dashboard)
{
	Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
	tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Dashboard", "Properties", nullptr));
	tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Dashboard", "Requests", nullptr));
	tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Dashboard", "Users", nullptr));
} // retranslateUi



//namespace Ui {
//    class Dashboard : public Dashboard {};
//} // namespace Ui

 // DASHBOARDCWMRHX_H


Dashboard::~Dashboard()
{}
