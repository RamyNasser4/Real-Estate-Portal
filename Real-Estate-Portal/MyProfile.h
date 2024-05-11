#pragma once
#ifndef MYPROFILELTGTGM_H
#define MYPROFILELTGTGM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <QStackedWidget>
#include "Listings.h"
#include "System.h"
#include "EditProperty.h"
#include "EditProfile.h"
#include "ChangePassword.h"
using namespace std;
QT_BEGIN_NAMESPACE

class MyProfile : public QWidget {
    Q_OBJECT

public:
    MyProfile(QWidget* parent = nullptr);
    void setupUi(QStackedWidget* MyProfile,System* system);
    void drawBoxes(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea, QStackedWidget* ListComponents);
    void retranslateUi(QWidget* MyProfile, System* system);
   // void drawPropertyBoxes(unordered_map<string, Property*> properties);
private:
    QWidget* widget;
    QFrame* frame;
    QFrame* frame_2;
    QPushButton* pushButton;
    QLabel* label;
    QLabel* label_2;
    QLabel* label_3;
    QLabel* label_4;
    QScrollArea* scrollArea;
    QWidget* scrollAreaWidgetContents;
    QPushButton* pushButton_2;
    QWidget* widget_4;
    QWidget* horizontalWidget_2;
    QHBoxLayout* horizontalLayout_3;
    QLabel* label_24;
    QFrame* line_10;
    QLabel* label_25;
    QLabel* label_19;
    QLabel* label_20;
    QLabel* label_21;
    QToolButton* toolButton;
    QLabel* label_5;
    QToolButton* toolButton_2;
};



QT_END_NAMESPACE

#endif // MYPROFILELTGTGM_H
