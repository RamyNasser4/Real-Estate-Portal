#include<QStackedWidget>
#ifndef EDITPROPERTYTIUWRE_H
#define EDITPROPERTYTIUWRE_H
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
#include <QtWidgets/QStackedWidget>
#include "System.h"
QT_BEGIN_NAMESPACE

class EditProperty : public QWidget
{
	Q_OBJECT

public slots:
	void onPushButtonClick(System* system,string propertyId);
public:
	EditProperty(QWidget* parent=nullptr);
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
	QLabel* label_6;
	QLabel* label_7;
	QPushButton* homeImage;
	void setupUi(QStackedWidget* From, System* system,string propertyId);
	void retranslateUi(QStackedWidget* Form);
private:
	//Ui::EditPropertyClass ui;
};
namespace Ui {
	class FormEdit : public EditProperty {};
}

QT_END_NAMESPACE
#endif
