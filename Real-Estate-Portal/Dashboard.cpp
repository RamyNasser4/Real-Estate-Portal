#include "Dashboard.h"

Dashboard::Dashboard(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}
/********************************************************************************
** Form generated from reading UI file 'DashboardcwMrHx.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/


    void Dashboard::setupUi(QWidget* Dashboard)
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
        tabWidget->setGeometry(QRect(0, 0, 801, 741));
        tabWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
            "color:black;\n"
            "}\n"
            "QFrame{\n"
            "\n"
            "}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        widget_2 = new QWidget(tab);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, -10, 801, 741));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget\n"
            "{\n"
            "background-color:#CCD0CD;\n"
            "\n"
            "}"));
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 181, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "font-size:34px;\n"
            "font-weight:bold;\n"
            "color:#2B2A2A;\n"
            "}"));
        line_8 = new QFrame(widget_2);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(30, 90, 731, 16));
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        scrollArea_2 = new QScrollArea(widget_2);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(10, 120, 761, 621));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        scrollArea_2->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 759, 619));
        label_38 = new QLabel(scrollAreaWidgetContents_2);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(240, 460, 321, 31));
        label_38->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-size:30px;\n"
            "font-family:sans-serif;\n"
            "font-weight:600;\n"
            "}"));
        label_39 = new QLabel(scrollAreaWidgetContents_2);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(310, 500, 181, 16));
        label_39->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-family:sans-serif;\n"
            "color:#808080;\n"
            "font-weight:600;\n"
            "}"));
        frame_2 = new QFrame(scrollAreaWidgetContents_2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 20, 741, 191));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "  border-radius: 25px;\n"
            "  border: 2px solid white ;\n"
            "background-color:white;\n"
            "\n"
            "}\n"
            "QPushButton{\n"
            "  border-radius: 10px;\n"
            "  background: #699CCC;\n"
            "color:white;\n"
            "\n"
            "\n"
            "\n"
            "}\n"
            "QPushButton:hover{\n"
            "background: #CCD0CD;\n"
            "color:Black;\n"
            "}\n"
            "\n"
            "#pushButton_2{\n"
            "background: #FF7F7F;\n"
            "}\n"
            "#pushButton_2:hover{\n"
            "background: #CCD0CD;\n"
            "color:Black;\n"
            "}\n"
            "QLabel{\n"
            "font-size:15px;\n"
            "}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 20, 151, 161));
        label_12->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(180, 30, 211, 21));
        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(180, 70, 201, 21));
        label_25 = new QLabel(frame_2);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(180, 110, 211, 21));
        label_26 = new QLabel(frame_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(400, 30, 231, 21));
        label_27 = new QLabel(frame_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(400, 70, 211, 21));
        label_28 = new QLabel(frame_2);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(400, 110, 191, 31));
        label_29 = new QLabel(frame_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(180, 150, 221, 21));
        label_30 = new QLabel(frame_2);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(400, 150, 211, 21));
        toolButton = new QToolButton(frame_2);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(680, 20, 31, 22));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
            "background:white;\n"
            "border:none;\n"
            "}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Assets/more32.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(32, 32));
        frame_5 = new QFrame(scrollAreaWidgetContents_2);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(20, 230, 741, 191));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "  border-radius: 25px;\n"
            "  border: 2px solid white ;\n"
            "background-color:white;\n"
            "\n"
            "}\n"
            "QPushButton{\n"
            "  border-radius: 10px;\n"
            "  background: #699CCC;\n"
            "color:white;\n"
            "\n"
            "\n"
            "\n"
            "}\n"
            "QPushButton:hover{\n"
            "background: #CCD0CD;\n"
            "color:Black;\n"
            "}\n"
            "\n"
            "#pushButton_2{\n"
            "background: #FF7F7F;\n"
            "}\n"
            "#pushButton_2:hover{\n"
            "background: #CCD0CD;\n"
            "color:Black;\n"
            "}\n"
            "QLabel{\n"
            "font-size:15px;\n"
            "}"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_31 = new QLabel(frame_5);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(20, 20, 151, 161));
        label_31->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
        label_31->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
        label_31->setScaledContents(true);
        label_33 = new QLabel(frame_5);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(180, 30, 211, 21));
        label_34 = new QLabel(frame_5);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(180, 70, 201, 21));
        label_35 = new QLabel(frame_5);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(180, 110, 211, 21));
        label_36 = new QLabel(frame_5);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(400, 30, 231, 21));
        label_37 = new QLabel(frame_5);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(400, 70, 211, 21));
        label_40 = new QLabel(frame_5);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(400, 110, 191, 31));
        label_41 = new QLabel(frame_5);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(180, 150, 221, 21));
        label_42 = new QLabel(frame_5);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(400, 150, 211, 21));
        toolButton_2 = new QToolButton(frame_5);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setGeometry(QRect(680, 20, 31, 22));
        toolButton_2->setStyleSheet(QString::fromUtf8("QToolButton{\n"
            "background:white;\n"
            "border:none;\n"
            "}"));
        toolButton_2->setIcon(icon);
        toolButton_2->setIconSize(QSize(32, 32));
        pushButton_7 = new QPushButton(frame_5);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, -10, 75, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
            "background-color:transparent;\n"
            "border:none;\n"
            "}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Assets/bookmarkv2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(40, 40));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        line_8->raise();
        scrollArea_2->raise();
        label->raise();
        label_45 = new QLabel(tab);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(640, 93, 131, 20));
        label_45->setStyleSheet(QString::fromUtf8("#label_11{\n"
            "color:black;\n"
            "  border-radius: 25px;\n"
            "\n"
            "\n"
            "font-size:15px;\n"
            "}"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        line_5 = new QFrame(tab_3);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(30, 90, 731, 16));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        frame = new QFrame(tab_3);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 150, 741, 211));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "  border-radius: 25px;\n"
            "  border: 2px solid white ;\n"
            "background-color:white;\n"
            "\n"
            "}\n"
            "QPushButton{\n"
            "  border-radius: 10px;\n"
            "  background: #699CCC;\n"
            "color:white;\n"
            "\n"
            "\n"
            "\n"
            "}\n"
            "QPushButton:hover{\n"
            "background: #CCD0CD;\n"
            "color:Black;\n"
            "}\n"
            "\n"
            "#pushButton_2{\n"
            "background: #FF7F7F;\n"
            "}\n"
            "#pushButton_2:hover{\n"
            "background: #CCD0CD;\n"
            "color:Black;\n"
            "}\n"
            "QLabel{\n"
            "font-size:15px;\n"
            "}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 151, 161));
        label_2->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 30, 211, 21));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 70, 201, 21));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 110, 211, 21));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(400, 30, 231, 21));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(400, 70, 211, 21));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(400, 110, 191, 21));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(180, 150, 221, 21));
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(400, 150, 211, 21));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 90, 61, 31));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(670, 90, 61, 31));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(658, 112, 131, 20));
        label_11->setStyleSheet(QString::fromUtf8("#label_11{\n"
            "color:black;\n"
            "  border-radius: 25px;\n"
            "\n"
            "\n"
            "font-size:15px;\n"
            "}"));
        line_6 = new QFrame(tab_3);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(0, 400, 801, 16));
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        label_21 = new QLabel(tab_3);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(40, 10, 221, 61));
        label_21->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "font-size:34px;\n"
            "font-weight:bold;\n"
            "color:#2B2A2A;\n"
            "}"));
        label_44 = new QLabel(tab_3);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(220, 550, 381, 51));
        label_44->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-size:30px;\n"
            "font-family:sans-serif;\n"
            "font-weight:600;\n"
            "}"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        label_22 = new QLabel(tab_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(40, 10, 221, 61));
        label_22->setStyleSheet(QString::fromUtf8("QLabel\n"
            "{\n"
            "font-size:34px;\n"
            "font-weight:bold;\n"
            "color:#2B2A2A;\n"
            "}"));
        line_7 = new QFrame(tab_4);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(30, 80, 731, 16));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        scrollArea = new QScrollArea(tab_4);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 170, 791, 561));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 789, 559));
        frame_4 = new QFrame(scrollAreaWidgetContents);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(20, 10, 761, 41));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "  border-radius: 15px;\n"
            "  border: 2px solid white ;\n"
            "background-color:white;\n"
            "\n"
            "}\n"
            "QLabel\n"
            "{\n"
            "font-size:15px;\n"
            "font-weight:bold;\n"
            "color:#2B2A2A;\n"
            "}\n"
            "QPushButton{\n"
            "  border-radius: 10px;\n"
            "  background: #FF7F7F;\n"
            "color:white;\n"
            "\n"
            "\n"
            "\n"
            "}\n"
            "\n"
            "QPushButton:hover{\n"
            "background: #CCD0CD;\n"
            "color:Black;\n"
            "}\n"
            "\n"
            ""));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_19 = new QLabel(frame_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(50, 3, 141, 31));
        label_20 = new QLabel(frame_4);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(220, 3, 141, 31));
        label_23 = new QLabel(frame_4);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(370, 3, 171, 31));
        label_24 = new QLabel(frame_4);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(560, 3, 131, 31));
        pushButton_4 = new QPushButton(frame_4);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(720, 5, 31, 31));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-delete")));
        pushButton_4->setIcon(icon2);
        label_43 = new QLabel(frame_4);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(7, 5, 31, 31));
        label_43->setPixmap(QPixmap(QString::fromUtf8("Assets/profile.png")));
        label_43->setScaledContents(true);
        scrollArea->setWidget(scrollAreaWidgetContents);
        frame_3 = new QFrame(tab_4);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(20, 120, 761, 41));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame{\n"
            "  border-radius: 15px;\n"
            "  border: 2px solid white ;\n"
            "background-color:white;\n"
            "\n"
            "}\n"
            "QLabel\n"
            "{\n"
            "font-size:15px;\n"
            "font-weight:bold;\n"
            "color:#2B2A2A;\n"
            "}\n"
            "QPushButton{\n"
            "  border-radius: 10px;\n"
            "  background: #FF7F7F;\n"
            "color:white;\n"
            "\n"
            "\n"
            "\n"
            "}\n"
            "\n"
            "QPushButton:hover{\n"
            "background: #CCD0CD;\n"
            "color:Black;\n"
            "}\n"
            "\n"
            ""));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 3, 141, 31));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(220, 3, 141, 31));
        label_17 = new QLabel(frame_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(370, 3, 171, 31));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(560, 3, 131, 31));
        label_32 = new QLabel(tab_4);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(630, 91, 131, 20));
        label_32->setStyleSheet(QString::fromUtf8("#label_11{\n"
            "color:black;\n"
            "  border-radius: 25px;\n"
            "\n"
            "\n"
            "font-size:15px;\n"
            "}"));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(Dashboard);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void Dashboard::retranslateUi(QWidget* Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "Properties", nullptr));
        label_38->setText(QCoreApplication::translate("Dashboard", "No Properties To Show", nullptr));
        label_39->setText(QCoreApplication::translate("Dashboard", "We couldn't find any properties ", nullptr));
        label_12->setText(QString());
        label_13->setText(QCoreApplication::translate("Dashboard", "Location :", nullptr));
        label_14->setText(QCoreApplication::translate("Dashboard", "Space :", nullptr));
        label_25->setText(QCoreApplication::translate("Dashboard", "Bedrooms :", nullptr));
        label_26->setText(QCoreApplication::translate("Dashboard", "Price : ", nullptr));
        label_27->setText(QCoreApplication::translate("Dashboard", "Type :", nullptr));
        label_28->setText(QCoreApplication::translate("Dashboard", "Building Number:", nullptr));
        label_29->setText(QCoreApplication::translate("Dashboard", "User ID :", nullptr));
        label_30->setText(QCoreApplication::translate("Dashboard", "User Name :", nullptr));
        toolButton->setText(QString());
        label_31->setText(QString());
        label_33->setText(QCoreApplication::translate("Dashboard", "Location :", nullptr));
        label_34->setText(QCoreApplication::translate("Dashboard", "Space :", nullptr));
        label_35->setText(QCoreApplication::translate("Dashboard", "Bedrooms :", nullptr));
        label_36->setText(QCoreApplication::translate("Dashboard", "Price : ", nullptr));
        label_37->setText(QCoreApplication::translate("Dashboard", "Type :", nullptr));
        label_40->setText(QCoreApplication::translate("Dashboard", "Building Number:", nullptr));
        label_41->setText(QCoreApplication::translate("Dashboard", "User ID :", nullptr));
        label_42->setText(QCoreApplication::translate("Dashboard", "User Name :", nullptr));
        toolButton_2->setText(QString());
        pushButton_7->setText(QString());
        label_45->setText(QCoreApplication::translate("Dashboard", "All Properties :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Dashboard", "Properties", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Dashboard", "Location :", nullptr));
        label_4->setText(QCoreApplication::translate("Dashboard", "Space :", nullptr));
        label_5->setText(QCoreApplication::translate("Dashboard", "Bedrooms :", nullptr));
        label_6->setText(QCoreApplication::translate("Dashboard", "Price : ", nullptr));
        label_7->setText(QCoreApplication::translate("Dashboard", "Type :", nullptr));
        label_8->setText(QCoreApplication::translate("Dashboard", "Building Number:", nullptr));
        label_9->setText(QCoreApplication::translate("Dashboard", "User ID :", nullptr));
        label_10->setText(QCoreApplication::translate("Dashboard", "User Name :", nullptr));
        pushButton->setText(QCoreApplication::translate("Dashboard", "Accept", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dashboard", "Deny", nullptr));
        label_11->setText(QCoreApplication::translate("Dashboard", "Request :", nullptr));
        label_21->setText(QCoreApplication::translate("Dashboard", "Requests", nullptr));
        label_44->setText(QCoreApplication::translate("Dashboard", "No More Requests To Show", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Dashboard", "Requests", nullptr));
        label_22->setText(QCoreApplication::translate("Dashboard", "All Users", nullptr));
        label_19->setText(QCoreApplication::translate("Dashboard", "#12345678901234", nullptr));
        label_20->setText(QCoreApplication::translate("Dashboard", "Ahmed", nullptr));
        label_23->setText(QCoreApplication::translate("Dashboard", "Ghazaly", nullptr));
        label_24->setText(QCoreApplication::translate("Dashboard", "012345678900", nullptr));
        pushButton_4->setText(QString());
        label_43->setText(QString());
        label_15->setText(QCoreApplication::translate("Dashboard", "#ID", nullptr));
        label_16->setText(QCoreApplication::translate("Dashboard", "First Name", nullptr));
        label_17->setText(QCoreApplication::translate("Dashboard", "Last Name", nullptr));
        label_18->setText(QCoreApplication::translate("Dashboard", "Phone Number", nullptr));
        label_32->setText(QCoreApplication::translate("Dashboard", "All Users :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Dashboard", "Users", nullptr));
    } // retranslateUi



//namespace Ui {
//    class Dashboard : public Dashboard {};
//} // namespace Ui

 // DASHBOARDCWMRHX_H


Dashboard::~Dashboard()
{}
