#include "Compare_4.h"

Compare_4::Compare_4(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}/********************************************************************************
** Form generated from reading UI file 'compare 4fokqmL.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/



    void Compare_4::setupUi(QWidget* Form)
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
        headLabel->setGeometry(QRect(320, 20, 161, 51));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-10, 100, 991, 681));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame_3{\n"
            "background-color:white\n"
            "}\n"
            "QLabel{\n"
            "font-size:15px;\n"
            "}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(90, 60, 291, 251));
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
        all_labels->setGeometry(QRect(20, 30, 251, 41));
        all_labels->setStyleSheet(QString::fromUtf8(""));
        all_labels_3 = new QLabel(frame_3);
        all_labels_3->setObjectName("all_labels_3");
        all_labels_3->setGeometry(QRect(20, 70, 261, 41));
        all_labels_3->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_7 = new QLabel(frame_3);
        all_labels_7->setObjectName("all_labels_7");
        all_labels_7->setGeometry(QRect(20, 110, 251, 41));
        all_labels_7->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_9 = new QLabel(frame_3);
        all_labels_9->setObjectName("all_labels_9");
        all_labels_9->setGeometry(QRect(20, 150, 261, 41));
        all_labels_9->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_11 = new QLabel(frame_3);
        all_labels_11->setObjectName("all_labels_11");
        all_labels_11->setGeometry(QRect(20, 190, 241, 41));
        all_labels_11->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 20, 111, 31));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(550, 20, 111, 31));
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(440, 60, 291, 251));
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
        all_labels_2->setGeometry(QRect(20, 30, 251, 41));
        all_labels_2->setStyleSheet(QString::fromUtf8(""));
        all_labels_4 = new QLabel(frame_5);
        all_labels_4->setObjectName("all_labels_4");
        all_labels_4->setGeometry(QRect(20, 70, 261, 41));
        all_labels_4->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_8 = new QLabel(frame_5);
        all_labels_8->setObjectName("all_labels_8");
        all_labels_8->setGeometry(QRect(20, 110, 251, 41));
        all_labels_8->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_10 = new QLabel(frame_5);
        all_labels_10->setObjectName("all_labels_10");
        all_labels_10->setGeometry(QRect(20, 150, 261, 41));
        all_labels_10->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_12 = new QLabel(frame_5);
        all_labels_12->setObjectName("all_labels_12");
        all_labels_12->setGeometry(QRect(20, 190, 241, 41));
        all_labels_12->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(90, 360, 291, 251));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "background-color:white;\n"
            " width: 200px;\n"
            "        height: 200px;\n"
            "        border: 2px solid white;\n"
            "        border-radius: 50%;\n"
            "}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        all_labels_5 = new QLabel(frame_4);
        all_labels_5->setObjectName("all_labels_5");
        all_labels_5->setGeometry(QRect(20, 30, 251, 41));
        all_labels_5->setStyleSheet(QString::fromUtf8(""));
        all_labels_6 = new QLabel(frame_4);
        all_labels_6->setObjectName("all_labels_6");
        all_labels_6->setGeometry(QRect(20, 70, 261, 41));
        all_labels_6->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_13 = new QLabel(frame_4);
        all_labels_13->setObjectName("all_labels_13");
        all_labels_13->setGeometry(QRect(20, 110, 251, 41));
        all_labels_13->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_14 = new QLabel(frame_4);
        all_labels_14->setObjectName("all_labels_14");
        all_labels_14->setGeometry(QRect(20, 150, 261, 41));
        all_labels_14->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_15 = new QLabel(frame_4);
        all_labels_15->setObjectName("all_labels_15");
        all_labels_15->setGeometry(QRect(20, 190, 241, 41));
        all_labels_15->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 320, 111, 31));
        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(440, 360, 291, 251));
        frame_6->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "background-color:white;\n"
            " width: 200px;\n"
            "        height: 200px;\n"
            "        border: 2px solid white;\n"
            "        border-radius: 50%;\n"
            "}"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        all_labels_16 = new QLabel(frame_6);
        all_labels_16->setObjectName("all_labels_16");
        all_labels_16->setGeometry(QRect(20, 30, 251, 41));
        all_labels_16->setStyleSheet(QString::fromUtf8(""));
        all_labels_17 = new QLabel(frame_6);
        all_labels_17->setObjectName("all_labels_17");
        all_labels_17->setGeometry(QRect(20, 70, 261, 41));
        all_labels_17->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_18 = new QLabel(frame_6);
        all_labels_18->setObjectName("all_labels_18");
        all_labels_18->setGeometry(QRect(20, 110, 251, 41));
        all_labels_18->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_19 = new QLabel(frame_6);
        all_labels_19->setObjectName("all_labels_19");
        all_labels_19->setGeometry(QRect(20, 150, 261, 41));
        all_labels_19->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        all_labels_20 = new QLabel(frame_6);
        all_labels_20->setObjectName("all_labels_20");
        all_labels_20->setGeometry(QRect(20, 190, 241, 41));
        all_labels_20->setStyleSheet(QString::fromUtf8("#all_labels{\n"
            "font-size:18px;\n"
            "}"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(550, 320, 111, 31));
        homeImage = new QPushButton(frame);
        homeImage->setObjectName("homeImage");
        homeImage->setGeometry(QRect(270, 20, 51, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Assets/left-and-right-arrowsWhite.png"), QSize(), QIcon::Normal, QIcon::Off);
        homeImage->setIcon(icon);
        homeImage->setIconSize(QSize(120, 120));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void Compare_4::retranslateUi(QWidget* Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        headLabel->setText(QCoreApplication::translate("Form", "Comparison", nullptr));
        all_labels->setText(QCoreApplication::translate("Form", "Location :", nullptr));
        all_labels_3->setText(QCoreApplication::translate("Form", "Type :", nullptr));
        all_labels_7->setText(QCoreApplication::translate("Form", "Space :", nullptr));
        all_labels_9->setText(QCoreApplication::translate("Form", "Rooms :", nullptr));
        all_labels_11->setText(QCoreApplication::translate("Form", "Price :", nullptr));
        label->setText(QCoreApplication::translate("Form", "Property 1", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Property 2", nullptr));
        all_labels_2->setText(QCoreApplication::translate("Form", "Location :", nullptr));
        all_labels_4->setText(QCoreApplication::translate("Form", "Type :", nullptr));
        all_labels_8->setText(QCoreApplication::translate("Form", "Space :", nullptr));
        all_labels_10->setText(QCoreApplication::translate("Form", "Rooms :", nullptr));
        all_labels_12->setText(QCoreApplication::translate("Form", "Price :", nullptr));
        all_labels_5->setText(QCoreApplication::translate("Form", "Location :", nullptr));
        all_labels_6->setText(QCoreApplication::translate("Form", "Type :", nullptr));
        all_labels_13->setText(QCoreApplication::translate("Form", "Space :", nullptr));
        all_labels_14->setText(QCoreApplication::translate("Form", "Rooms :", nullptr));
        all_labels_15->setText(QCoreApplication::translate("Form", "Price :", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "Property 3", nullptr));
        all_labels_16->setText(QCoreApplication::translate("Form", "Location :", nullptr));
        all_labels_17->setText(QCoreApplication::translate("Form", "Type :", nullptr));
        all_labels_18->setText(QCoreApplication::translate("Form", "Space :", nullptr));
        all_labels_19->setText(QCoreApplication::translate("Form", "Rooms :", nullptr));
        all_labels_20->setText(QCoreApplication::translate("Form", "Price :", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "Property 4", nullptr));
        homeImage->setText(QString());
    } // retranslateUi


namespace Ui {
    class Form : public Compare_4 {};
} // namespace Ui



Compare_4::~Compare_4()
{}
