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
#include "User.h";
QT_BEGIN_NAMESPACE
using namespace std;
class MyProfile : public QWidget {
    Q_OBJECT

public:
    MyProfile (User& user,QWidget* parent = nullptr);
    void setupUi(QWidget* MyProfile);
    void retranslateUi(QWidget* MyProfile);
   // void drawPropertyBoxes(unordered_map<string, Property*> properties);
private:
    User& user;
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
    QPushButton* pushButton_3;
    QPushButton* pushButton_4;
    QLabel* label_5;
};



QT_END_NAMESPACE

#endif // MYPROFILELTGTGM_H
