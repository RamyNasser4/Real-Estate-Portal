#pragma once

#include <QWidget>
#include "ui_AnalyticsDashboard.h"
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>
#include <QMenu>
#include <QStackedWidget>
#include <QToolButton>
#include <QPushButton>
#include "System.h"
#include "EditProperty.h"
class AnalyticsDashboard : public QWidget
{
	Q_OBJECT

public:
    QWidget* widget_4;
    QLabel* label_118;
    QFrame* line_11;
    QScrollArea* scrollArea_6;
    QWidget* scrollAreaWidgetContents_6;
    QFrame* frame_16;
    QLabel* label_119;
    QLabel* label_120;
    QLabel* label_121;
    QLabel* label_122;
    QLabel* label_123;
    QLabel* label_124;
    QLabel* label_125;
    QLabel* label_126;
    QLabel* label_127;
    QLabel* label_128;
    QLabel* label_129;
    QLabel* AnalyticsDashboardHeader;
    QLabel* label_131;
    QLabel* label_132;
    QLabel* label_133;
    QLabel* label_134;
    QLabel* label_135;
    QLabel* label_136;
    QFrame* line_2;
    QFrame* frame_17;
    QLabel* label_137;
    QLabel* label_138;
    QLabel* label_139;
    QLabel* label_140;
    void setupUi(QWidget* AnalyticsDashboardClass, System* system, QStackedWidget* ListComponents);
    void drawBoxes(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea, QStackedWidget* ListComponents);
    void retranslateUi(QWidget* AnalyticsDashboardClass,System* system);
    void updateUi(System* system, QStackedWidget* ListComponents);
	AnalyticsDashboard(QWidget *parent = nullptr);
	~AnalyticsDashboard();

private:
	//Ui::AnalyticsDashboardClass ui;
};
