#include "Dialog.h"

void Dialog::setupUi(QDialog* Dialog, string text)
{
    if (Dialog->objectName().isEmpty())
        Dialog->setObjectName("Dialog");
    Dialog->resize(400, 144);
    Dialog->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "background: white;\n"
        "}"));
    buttonBox = new QDialogButtonBox(Dialog);
    buttonBox->setObjectName("buttonBox");
    buttonBox->setGeometry(QRect(110, 220, 156, 24));
    buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel | QDialogButtonBox::StandardButton::Ok);
    pushButton = new QPushButton(Dialog);
    pushButton->setObjectName("pushButton");
    pushButton->setGeometry(QRect(150, 80, 101, 41));
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
        "    color: white;\n"
        "}"));
    horizontalLayoutWidget = new QWidget(Dialog);
    horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
    horizontalLayoutWidget->setGeometry(QRect(50, 10, 281, 61));
    horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
    horizontalLayout_2->setObjectName("horizontalLayout_2");
    horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
    label_2 = new QLabel(horizontalLayoutWidget);
    label_2->setObjectName("label_2");
    label_2->setMaximumSize(QSize(32, 32));
    label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "background:transparent;}"));
    label_2->setPixmap(QPixmap(QString::fromUtf8("Assets/error-icon-25243.png")));
    label_2->setScaledContents(true);

    horizontalLayout_2->addWidget(label_2);
    horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

    horizontalLayout_2->addItem(horizontalSpacer);
    label = new QLabel(horizontalLayoutWidget);
    label->setObjectName("label");
    label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
    label->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "color:black;\n"
        "font-family:sans-serif;\n"
        "font-size:15px;\n"
        "background: transparent\n"
        "}"));
    label->setAlignment(Qt::AlignmentFlag::AlignCenter);

    horizontalLayout_2->addWidget(label);


    retranslateUi(Dialog, text);
    QObject::connect(pushButton, &QPushButton::clicked, Dialog, qOverload<>(&QPushButton::close));
    QMetaObject::connectSlotsByName(Dialog);
} // setupUi

void Dialog::retranslateUi(QDialog* Dialog, string text)
{
    Dialog->setWindowTitle(QCoreApplication::translate("Dialog", text.c_str(), nullptr));
    pushButton->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
    label->setText(QCoreApplication::translate("Dialog", text.c_str(), nullptr));
    label_2->setText(QString());
} // r

