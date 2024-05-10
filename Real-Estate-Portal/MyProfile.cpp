#include "MyProfile.h"
#include "User.h"
MyProfile::MyProfile( QWidget* parent)
    : QWidget(parent)
{
    //setupUi(this);
}
void MyProfile::setupUi(QWidget* MyProfile)
{
    if (MyProfile->objectName().isEmpty())
        MyProfile->setObjectName("MyProfileClass");
    MyProfile->resize(801, 741);
    widget = new QWidget(MyProfile);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(-1, -1, 801, 741));
    widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
        "background-color:#CCC0CD;\n"
        "}"));
    frame = new QFrame(widget);
    frame->setObjectName("frame");
    frame->setGeometry(QRect(0, 0, 801, 741));
    frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "background:#CCD0CD;\n"
        "font-size:25px;\n"
        "}\n"
        "#frame_2{\n"
        "background:#1B425E;\n"
        "}\n"
        "#pushButton{\n"
        "background:#CCD0CD;\n"
        "border:none;\n"
        "border-radius:30%;\n"
        "}\n"
        "#label{\n"
        "font-weight:600;\n"
        "}\n"
        "#label_4{\n"
        "font-weight:600;\n"
        "}\n"
        "QLabel{\n"
        "color:#2B2A2A;\n"
        "}\n"
        "#widget{\n"
        "background:#CCD0CD;\n"
        "}\n"
        "#pushButton_3{\n"
        "background:#3F6793;\n"
        "border:none;\n"
        "border-radius:10px;\n"
        "}"));
    frame->setFrameShape(QFrame::Shape::StyledPanel);
    frame->setFrameShadow(QFrame::Shadow::Raised);
    frame_2 = new QFrame(frame);
    frame_2->setObjectName("frame_2");
    frame_2->setGeometry(QRect(0, -1, 801, 111));
    frame_2->setFrameShape(QFrame::Shape::StyledPanel);
    frame_2->setFrameShadow(QFrame::Shadow::Raised);
    pushButton = new QPushButton(frame);
    pushButton->setObjectName("pushButton");
    pushButton->setGeometry(QRect(50, 70, 61, 61));
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/Assets/profile.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton->setIcon(icon);
    pushButton->setIconSize(QSize(70, 70));
    label = new QLabel(frame);
    label->setObjectName("label");
    label->setGeometry(QRect(20, 130, 271, 41));
    label_2 = new QLabel(frame);
    label_2->setObjectName("label_2");
    label_2->setGeometry(QRect(20, 190, 181, 31));
    label_3 = new QLabel(frame);
    label_3->setObjectName("label_3");
    label_3->setGeometry(QRect(310, 190, 171, 31));
    label_4 = new QLabel(frame);
    label_4->setObjectName("label_4");
    label_4->setGeometry(QRect(20, 250, 171, 41));
    scrollArea = new QScrollArea(frame);
    scrollArea->setObjectName("scrollArea");
    scrollArea->setGeometry(QRect(10, 310, 771, 411));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 769, 409));
    pushButton_2 = new QPushButton(scrollAreaWidgetContents);
    pushButton_2->setObjectName("pushButton_2");
    pushButton_2->setGeometry(QRect(10, 20, 741, 171));
    pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "background:white;\n"
        "border:none;\n"
        "border-radius:15px;\n"
        "}"));
    widget_4 = new QWidget(scrollAreaWidgetContents);
    widget_4->setObjectName("widget_4");
    widget_4->setGeometry(QRect(30, 40, 171, 131));
    widget_4->setStyleSheet(QString::fromUtf8("#widget_4{\n"
        "border-radius:15px;\n"
        "	background-image: url(:/Assets/home128.png);\n"
        "background-repeat:no-repeat;\n"
        "background-position:center;\n"
        "background-color:#CCD0CD;\n"
        "}\n"
        ""));
    horizontalWidget_2 = new QWidget(scrollAreaWidgetContents);
    horizontalWidget_2->setObjectName("horizontalWidget_2");
    horizontalWidget_2->setGeometry(QRect(230, 30, 361, 41));
    horizontalWidget_2->setStyleSheet(QString::fromUtf8("background:white;"));
    horizontalLayout_3 = new QHBoxLayout(horizontalWidget_2);
    horizontalLayout_3->setSpacing(6);
    horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
    horizontalLayout_3->setObjectName("horizontalLayout_3");
    label_24 = new QLabel(horizontalWidget_2);
    label_24->setObjectName("label_24");
    label_24->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "font-family:sans-serif;\n"
        "font-weight:600;\n"
        "font-size:12px;\n"
        "}"));

    horizontalLayout_3->addWidget(label_24);

    line_10 = new QFrame(horizontalWidget_2);
    line_10->setObjectName("line_10");
    line_10->setStyleSheet(QString::fromUtf8("#line_6{\n"
        "background:white;\n"
        "}"));
    line_10->setFrameShape(QFrame::Shape::HLine);
    line_10->setFrameShadow(QFrame::Shadow::Sunken);

    horizontalLayout_3->addWidget(line_10);

    label_25 = new QLabel(horizontalWidget_2);
    label_25->setObjectName("label_25");
    label_25->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background:white;\n"
        "font-family:sans-serif;\n"
        "font-weight:700;\n"
        "font-size:12px;\n"
        "color:#808080;\n"
        "}"));

    horizontalLayout_3->addWidget(label_25);

    label_19 = new QLabel(scrollAreaWidgetContents);
    label_19->setObjectName("label_19");
    label_19->setGeometry(QRect(240, 130, 121, 31));
    label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "font-family:sans-serif;\n"
        "font-size:24px;\n"
        "font-weight:700;\n"
        "color:#407BFF;\n"
        "}"));
    label_20 = new QLabel(scrollAreaWidgetContents);
    label_20->setObjectName("label_20");
    label_20->setGeometry(QRect(240, 80, 71, 16));
    label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "color:#808080;\n"
        "font-family:sans-serif;\n"
        "font-weight:600;\n"
        "font-size:11px;\n"
        "}"));
    label_21 = new QLabel(scrollAreaWidgetContents);
    label_21->setObjectName("label_21");
    label_21->setGeometry(QRect(330, 80, 49, 16));
    label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background-color:white;\n"
        "color:#808080;\n"
        "font-family:sans-serif;\n"
        "font-weight:600;\n"
        "font-size:11px;\n"
        "}"));
    toolButton = new QToolButton(scrollAreaWidgetContents);
    toolButton->setObjectName("toolButton");
    toolButton->setGeometry(QRect(700, 40, 31, 22));
    toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
        "background:white;\n"
        "border:none;\n"
        "}"));
    QIcon icon1;
    icon1.addFile(QString::fromUtf8(":/Assets/more32.png"), QSize(), QIcon::Normal, QIcon::Off);
    toolButton->setIcon(icon1);
    toolButton->setIconSize(QSize(32, 32));
    scrollArea->setWidget(scrollAreaWidgetContents);
    pushButton_3 = new QPushButton(frame);
    pushButton_3->setObjectName("pushButton_3");
    pushButton_3->setGeometry(QRect(650, 130, 111, 51));
    pushButton_4 = new QPushButton(frame);
    pushButton_4->setObjectName("pushButton_4");
    pushButton_4->setGeometry(QRect(660, 130, 31, 51));
    pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "border:none;\n"
        "background:#3F6793;\n"
        "}"));
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/Assets/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_4->setIcon(icon2);
    label_5 = new QLabel(frame);
    label_5->setObjectName("label_5");
    label_5->setGeometry(QRect(700, 140, 41, 31));
    label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "color:white;\n"
        "font-size:20px;\n"
        "background:#3F6793;\n"
        "}"));
    retranslateUi(MyProfile);
    
    /*std::unordered_map<std::string, Property*> properties = user.GetUserProperties();
    int row = 20; // Adjust the initial row position

    for (const auto& pair : properties) {
        Property* property = pair.second;

        // Create a widget to represent the property
        QWidget* propertyWidget = new QWidget(scrollAreaWidgetContents);
        propertyWidget->setObjectName(QString::fromStdString("propertyWidget_" + property->GetpropertyId())); // Using property ID as object name
        propertyWidget->setGeometry(QRect(10, row, 741, 171));
        propertyWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
            "background:white;\n"
            "border:none;\n"
            "border-radius:15px;\n"
            "}"));

        // Add labels to display property information
        /*QLabel* nameLabel = new QLabel(propertyWidget);
        nameLabel->setText(QString::fromStdString("Property Name: " + property->GetPropertyName()));
        nameLabel->setGeometry(QRect(20, 20, 200, 30));

        QLabel* typeLabel = new QLabel(propertyWidget);
        typeLabel->setText(QString::fromStdString("Property Type: " + property->GetPropertyType()));
        typeLabel->setGeometry(QRect(20, 50, 200, 30));

        // You can add more labels/buttons here to display other property information

        // Increment the row for the next property widget
        row += 200; // Adjust this value based on your layout

        // Add the property widget to the scroll area
        propertyWidget->setParent(scrollAreaWidgetContents);
    }*/


    QMetaObject::connectSlotsByName(MyProfile);
}



void MyProfile::retranslateUi(QWidget* MyProfile)
{
    MyProfile->setWindowTitle(QCoreApplication::translate("MyProfile", "MyProfile", nullptr));
    pushButton->setText(QString());
    label->setText(QCoreApplication::translate("MyProfile", "Abdelrahman emad", nullptr));
    label_2->setText(QCoreApplication::translate("MyProfile", "Phone Number:", nullptr));
    label_3->setText(QCoreApplication::translate("MyProfile", "01027403335", nullptr));
    label_4->setText(QCoreApplication::translate("MyProfile", "My Properties", nullptr));
    pushButton_2->setText(QString());
    label_24->setText(QCoreApplication::translate("MyProfile", "3 El Hegaz St., El Mahkama Station", nullptr));
    label_25->setText(QCoreApplication::translate("MyProfile", "Townhouse", nullptr));
    label_19->setText(QCoreApplication::translate("MyProfile", "$245,250", nullptr));
    label_20->setText(QCoreApplication::translate("MyProfile", "2 Bedrooms", nullptr));
    label_21->setText(QCoreApplication::translate("MyProfile", "<p>163m<sup>2", nullptr));
    toolButton->setText(QString());
    pushButton_3->setText(QString());
    pushButton_4->setText(QString());
    label_5->setText(QCoreApplication::translate("MyProfile", "Edit", nullptr));
} 