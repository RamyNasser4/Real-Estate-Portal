#include "Compare.h"


/********************************************************************************
** Form generated from reading UI file 'CompareDAaWMo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/


Compare::Compare(QWidget* parent)
    : QWidget(parent)
{
    //ui.setupUi(this);
}


    void Compare::setupUi(QWidget* Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(801, 741);
        frame = new QFrame(Form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 801, 741));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "        font-family:Sans Serif Collection;\n"
            "        background:#1B425E;\n"
            "        font-size:24px;\n"
            "}\n"
            "#homeImage{\n"
            "background:#1B425E;\n"
            "border:none;\n"
            "}\n"
            "#headLabel{\n"
            "        background:#1B425E;\n"
            "        color:#CCD0CD;\n"
            "        font-weight:600;\n"
            "        font-size:30px;\n"
            "}\n"
            "#frame_2{\n"
            "        background:#CCD0CD;\n"
            "}\n"
            "QLabel{\n"
            "color:#2B2A2A;\n"
            "  background:#CCD0CD;\n"
            "}\n"
            "\n"
            "QLineEdit{\n"
            "        border:solid;\n"
            "       border-radius:5px;\n"
            "       background: white;\n"
            "        color:#2B2A2A;\n"
            "        font-size:15px;\n"
            "  }\n"
            "QComboBox{\n"
            "        background: white;\n"
            "        color:#2B2A2A;\n"
            "        border-style:solid; \n"
            " }\n"
            "QSpinBox{\n"
            "background: white;\n"
            " color:#2B2A2A;\n"
            "}\n"
            "#textEdit{\n"
            "        background: white;\n"
            "        color:#2B2A2A;\n"
            "        border-style:solid;\n"
            "        border-radius:5px;\n"
            "        font-size:15px;\n"
            " }\n"
            "#pushButton{\n"
            "background: #1B425E;\n"
            "color:white;\n"
            "border-st"
            "yle:solid;\n"
            "border-radius:5px;\n"
            "}\n"
            "#pushButton:hover{\n"
            "background: white;\n"
            "color: #1B425E;\n"
            "}\n"
            "#locationImage{\n"
            "background:#CCD0CD;\n"
            "border:none;\n"
            "}\n"
            "#squareFootage{\n"
            "background:#CCD0CD;\n"
            "border:none;\n"
            "}\n"
            "#dollarImage{\n"
            "background:#CCD0CD;\n"
            "border:none;\n"
            "}\n"
            "#roomNumber{\n"
            "background:#CCD0CD;\n"
            "border:none;\n"
            "}\n"
            "#type{\n"
            "background:#CCD0CD;\n"
            "border:none;\n"
            "}\n"
            "#description{\n"
            "background:#CCD0CD;\n"
            "border:none;\n"
            "}\n"
            "\n"
            "\n"
            ""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        headLabel = new QLabel(frame);
        headLabel->setObjectName("headLabel");
        headLabel->setGeometry(QRect(320, 20, 301, 51));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-10, 100, 991, 681));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame_3{\n"
            "background-color:white\n"
            "}\n"
            "QLabel{\n"
            "font-size:20px;\n"
            "}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(70, 170, 301, 321));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "background-color:white;\n"
            " width: 200px;\n"
            "        height: 200px;\n"
            "        border: 2px solid white;\n"
            "        border-radius: 50%;\n"
            "}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        all_labels = new QLabel(frame_3);
        all_labels->setObjectName("all_labels");
        all_labels->setGeometry(QRect(20, 50, 251, 41));
        all_labels->setStyleSheet(QString::fromUtf8(""));
        all_labels_3 = new QLabel(frame_3);
        all_labels_3->setObjectName("all_labels_3");
        all_labels_3->setGeometry(QRect(20, 100, 261, 41));
        all_labels_3->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_7 = new QLabel(frame_3);
        all_labels_7->setObjectName("all_labels_7");
        all_labels_7->setGeometry(QRect(20, 150, 251, 41));
        all_labels_7->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_9 = new QLabel(frame_3);
        all_labels_9->setObjectName("all_labels_9");
        all_labels_9->setGeometry(QRect(20, 200, 261, 41));
        all_labels_9->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_11 = new QLabel(frame_3);
        all_labels_11->setObjectName("all_labels_11");
        all_labels_11->setGeometry(QRect(20, 250, 241, 41));
        all_labels_11->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(440, 170, 311, 321));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "background-color:white;\n"
            " width: 200px;\n"
            "        height: 200px;\n"
            "        border: 2px solid white;\n"
            "        border-radius: 50%;\n"
            "}"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        all_labels_2 = new QLabel(frame_5);
        all_labels_2->setObjectName("all_labels_2");
        all_labels_2->setGeometry(QRect(20, 50, 251, 41));
        all_labels_2->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_4 = new QLabel(frame_5);
        all_labels_4->setObjectName("all_labels_4");
        all_labels_4->setGeometry(QRect(20, 100, 251, 41));
        all_labels_4->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_8 = new QLabel(frame_5);
        all_labels_8->setObjectName("all_labels_8");
        all_labels_8->setGeometry(QRect(20, 150, 261, 41));
        all_labels_8->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_10 = new QLabel(frame_5);
        all_labels_10->setObjectName("all_labels_10");
        all_labels_10->setGeometry(QRect(20, 200, 261, 41));
        all_labels_10->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_12 = new QLabel(frame_5);
        all_labels_12->setObjectName("all_labels_12");
        all_labels_12->setGeometry(QRect(20, 250, 261, 41));
        all_labels_12->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 110, 111, 31));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 110, 111, 31));
        homeImage = new QPushButton(frame);
        homeImage->setObjectName("homeImage");
        homeImage->setGeometry(QRect(250, 20, 51, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Assets/left-and-right-arrowsWhite.png"), QSize(), QIcon::Normal, QIcon::Off);
        homeImage->setIcon(icon);
        homeImage->setIconSize(QSize(50, 50));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void Compare::retranslateUi(QWidget* Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        headLabel->setText(QCoreApplication::translate("Form", "comparison", nullptr));
        all_labels->setText(QCoreApplication::translate("Form", "Location :", nullptr));
        all_labels_3->setText(QCoreApplication::translate("Form", "Type :",nullptr));
        all_labels_7->setText(QCoreApplication::translate("Form", "Space :", nullptr));
        all_labels_9->setText(QCoreApplication::translate("Form", "Rooms :", nullptr));
        all_labels_11->setText(QCoreApplication::translate("Form", "Price :", nullptr));
        all_labels_2->setText(QCoreApplication::translate("Form", "Location :", nullptr));
        all_labels_4->setText(QCoreApplication::translate("Form", "Type :", nullptr));
        all_labels_8->setText(QCoreApplication::translate("Form", "Space :", nullptr));
        all_labels_10->setText(QCoreApplication::translate("Form", "Rooms :", nullptr));
        all_labels_12->setText(QCoreApplication::translate("Form", "Price :", nullptr));
        label->setText(QCoreApplication::translate("Form", "Property 1", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Property 2", nullptr));
        homeImage->setText(QString());
    } // retranslateUi


namespace Ui {
    class cmpForm : public Compare {};
} // namespace Ui

// COMPAREDAAWMO_H

Compare::~Compare()
{}
