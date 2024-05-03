#pragma once

#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QStackedWidget>
#include "System.h"
#include "Home.h"


QT_BEGIN_NAMESPACE
namespace Ui {
    class Signup;
}
QT_END_NAMESPACE

class Signup : public QWidget
{
    Q_OBJECT

public:
    Signup(QWidget* parent = nullptr);
    ~Signup();
    void onPushButton1Click(System* system);
      
    void setupUi(QStackedWidget* Signup, System* system,Home* home);
    void retranslateUi(QStackedWidget* Signup);

private:
    Ui::Signup *ui;
    QFrame* frame;
    QFrame* frame_2;
    QLabel* label;
    QLabel* label_2;
    QLineEdit* lineEdit;
    QLabel* label_3;
    QLabel* label_7;
    QLineEdit* lineEdit_3;
    QLabel* label_8;
    QLineEdit* lineEdit_4;
    QLabel* label_9;
    QLineEdit* lineEdit_5;
    QLabel* label_10;
    QLineEdit* lineEdit_6;
    QPushButton* pushButton;
    QLabel* label_11;
    QPushButton* pushButton_2;
};
