#include "Dialog.h"

void Dialog::setupUi(QDialog* Dialog, string text)
{
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName("Dialog");
    Dialog->resize(481, 200);
    Dialog->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "background: white;\n"
        "}"));
    label_2 = new QLabel(Dialog);
    label_2->setObjectName("label_2");
    label_2->setGeometry(QRect(90, 29, 31, 31));
    label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background:transparent;}"));
    label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../../../.designer/backup/Assets/error-icon-25243.png")));
    label_2->setScaledContents(true);
    frame = new QFrame(Dialog);
    frame->setObjectName("frame");
    frame->setGeometry(QRect(0, 0, 481, 201));
    frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "background:#CCD0CD;\n"
        "color:#2B2A2A;\n"
        "}\n"
        ""));
    frame->setFrameShape(QFrame::Shape::StyledPanel);
    frame->setFrameShadow(QFrame::Shadow::Raised);
    horizontalLayoutWidget = new QWidget(frame);
    horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
    horizontalLayoutWidget->setGeometry(QRect(100, 30, 291, 51));
    horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
    horizontalLayout->setObjectName("horizontalLayout");
    horizontalLayout->setContentsMargins(0, 0, 0, 0);
    label_3 = new QLabel(horizontalLayoutWidget);
    label_3->setObjectName("label_3");
    label_3->setMaximumSize(QSize(30, 30));
    label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background:transparent;\n"
        "}"));
    label_3->setPixmap(QPixmap(QString::fromUtf8(":/Assets/error-icon-25243.png")));
    label_3->setScaledContents(true);

    horizontalLayout->addWidget(label_3);

    horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

    horizontalLayout->addItem(horizontalSpacer);

    label_4 = new QLabel(horizontalLayoutWidget);
    label_4->setObjectName("label_4");
    label_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
    label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "color:black;\n"
        "font-family:sans-serif;\n"
        "font-size:15px;\n"
        "background: transparent\n"
        "}"));
    label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

    horizontalLayout->addWidget(label_4);

    pushButton = new QPushButton(frame);
    pushButton->setObjectName("pushButton");
    pushButton->setGeometry(QRect(170, 130, 141, 41));
    pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "color:black;\n"
        "font-family:sans-serif;\n"
        "font-size:15px;\n"
        "font-weight:bold;\n"
        "border-radius:10px;\n"
        "background:white;\n"
        "}\n"
        "QPushButton:hover {\n"
        "    background:#5287FE;\n"
        "     color: white;\n"
        "}"));

        retranslateUi(Dialog, text);
        QObject::connect(pushButton, &QPushButton::clicked, Dialog, qOverload<>(&QPushButton::close));
        QMetaObject::connectSlotsByName(Dialog);
 } 

void Dialog::retranslateUi(QDialog* Dialog, string text)
{
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", text.c_str(), nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("Dialog", text.c_str(), nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
} 

