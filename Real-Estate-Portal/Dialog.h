
#ifndef DIALOGBUTTONBOTTOMQEKTWL_H
#define DIALOGBUTTONBOTTOMQEKTWL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <string>
using namespace std;
QT_BEGIN_NAMESPACE

class Dialog
{
public:
    QLabel* label_2;
    QFrame* frame;
    QWidget* horizontalLayoutWidget;
    QHBoxLayout* horizontalLayout;
    QLabel* label_3;
    QSpacerItem* horizontalSpacer;
    QLabel* label_4;
    QPushButton* pushButton;
    void setupUi(QDialog* Dialog,string text);
    void retranslateUi(QDialog* Dialog,string text);
};


QT_END_NAMESPACE

#endif 

