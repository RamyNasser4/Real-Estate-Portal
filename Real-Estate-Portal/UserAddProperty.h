#include <QWidget>
#ifndef USERADDPROPERTYPNMARP_H
#define USERADDPROPERTYPNMARP_H
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class UserAddProperty : public QWidget
{
    Q_OBJECT
public slots:
    void onPushButtonClick(System* system);
public:
    QFrame* frame;
    QLabel* headLabel;
    QFrame* frame_2;
    QLineEdit* lineEdit;
    QLineEdit* lineEdit_2;
    QComboBox* comboBox;
    QLabel* formLabels;
    QLabel* label;
    QLabel* label_2;
    QLabel* label_3;
    QSpinBox* spinBox;
    QSpinBox* spinBox_2;
    QComboBox* comboBox_2;
    QLabel* label_4;
    QLineEdit* lineEdit_3;
    QLabel* label_5;
    QTextEdit* textEdit;
    QPushButton* pushButton;
    QPushButton* locationImage;
    QPushButton* dollarImage;
    QPushButton* roomNumber;
    QPushButton* squareFootage;
    QPushButton* type;
    QPushButton* description;
    QPushButton* homeImage;

    void setupUi(QWidget* Form);
    void retranslateUi(QWidget* Form);
    

};

namespace Ui {
    class Form : public UserAddProperty {};
} 

QT_END_NAMESPACE

#endif 
