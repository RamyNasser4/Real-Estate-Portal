#include "EditUser.h"

EditUser::EditUser(QStackedWidget* parent) : QWidget(parent)
{
    //setupUi(parent);
}
void EditUser::setupUi(QStackedWidget* stackWidget, System* system, MyProfile* profile)
{
    if (stackWidget->objectName().isEmpty())
        stackWidget->setObjectName("EditUserClass");
    stackWidget->resize(801, 741);
    widget = new QWidget(stackWidget);
    widget->setObjectName("widget");
    widget->setGeometry(QRect(0, 0, 801, 741));
    widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
        "background:#CCD0CD;\n"
        "}\n"
        "#label{\n"
        "color: #CCD0CD;\n"
        "font-weight:700;\n"
        "font-size:30px;\n"
        "}\n"
        "QLabel{\n"
        "font-size:25px;\n"
        "background:#CCD0CD;\n"
        "font-weight:600;\n"
        "color:#2B2A2A;\n"
        "}\n"
        "#frame_2{\n"
        "background:#1B425E;\n"
        "border-radius:5px;\n"
        "}\n"
        "#frame_3{\n"
        "background:#1B425E;\n"
        "border-radius:5px;\n"
        "}\n"
        "QLineEdit{\n"
        "background:#CCD0CD;\n"
        "color:black;\n"
        "font-size:18px;\n"
        "border:none;\n"
        "border-radius:5px;\n"
        "}\n"
        "#pushButton_2{\n"
        "background:#1B425E;\n"
        "color:white;\n"
        "border:none;\n"
        "border-radius:5px;\n"
        "}\n"
        "#pushButton_2:hover{\n"
        "background:white;\n"
        "color:#1B425E;\n"
        "}\n"
        "#pushButton_3{\n"
        "border:none;\n"
        "}\n"
        "#pushButton_4{\n"
        "border:none;\n"
        "}"));
    frame = new QFrame(widget);
    frame->setObjectName("frame");
    frame->setGeometry(QRect(-1, -1, 801, 111));
    frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "background:#1B425E;\n"
        "}"));
    frame->setFrameShape(QFrame::Shape::StyledPanel);
    frame->setFrameShadow(QFrame::Shadow::Raised);
    label = new QLabel(frame);
    label->setObjectName("label");
    label->setGeometry(QRect(80, 40, 131, 31));
    pushButton = new QPushButton(frame);
    pushButton->setObjectName("pushButton");
    pushButton->setGeometry(QRect(30, 30, 41, 51));
    pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "border:none;\n"
        "background:#1B425E;\n"
        "}"));
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/Assets/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton->setIcon(icon);
    pushButton->setIconSize(QSize(30, 30));
    label_2 = new QLabel(widget);
    label_2->setObjectName("label_2");
    label_2->setGeometry(QRect(70, 120, 201, 41));
    frame_2 = new QFrame(widget);
    frame_2->setObjectName("frame_2");
    frame_2->setGeometry(QRect(40, 170, 361, 161));
    frame_2->setFrameShape(QFrame::Shape::StyledPanel);
    frame_2->setFrameShadow(QFrame::Shadow::Raised);
    lineEdit = new QLineEdit(frame_2);
    lineEdit->setObjectName("lineEdit");
    lineEdit->setGeometry(QRect(32, 30, 291, 41));
    lineEdit->setStyleSheet(QString::fromUtf8(""));
    lineEdit->setEchoMode(QLineEdit::Password);
    lineEdit_2 = new QLineEdit(frame_2);
    lineEdit_2->setObjectName("lineEdit_2");
    lineEdit_2->setGeometry(QRect(30, 90, 291, 41));
    lineEdit_2->setStyleSheet(QString::fromUtf8(""));
    lineEdit_2->setEchoMode(QLineEdit::Password);
    label_3 = new QLabel(widget);
    label_3->setObjectName("label_3");
    label_3->setGeometry(QRect(70, 360, 51, 41));
    frame_3 = new QFrame(widget);
    frame_3->setObjectName("frame_3");
    frame_3->setGeometry(QRect(40, 410, 361, 221));
    frame_3->setFrameShape(QFrame::Shape::StyledPanel);
    frame_3->setFrameShadow(QFrame::Shadow::Raised);
    lineEdit_4 = new QLineEdit(frame_3);
    lineEdit_4->setObjectName("lineEdit_4");
    lineEdit_4->setGeometry(QRect(32, 150, 291, 41));
    lineEdit_4->setStyleSheet(QString::fromUtf8(""));
    lineEdit_4->setInputMethodHints(Qt::InputMethodHint::ImhDigitsOnly);
    lineEdit_5 = new QLineEdit(frame_3);
    lineEdit_5->setObjectName("lineEdit_5");
    lineEdit_5->setGeometry(QRect(30, 30, 291, 41));
    lineEdit_5->setStyleSheet(QString::fromUtf8(""));
    lineEdit_6 = new QLineEdit(frame_3);
    lineEdit_6->setObjectName("lineEdit_6");
    lineEdit_6->setGeometry(QRect(30, 90, 291, 41));
    lineEdit_6->setStyleSheet(QString::fromUtf8(""));
    pushButton_2 = new QPushButton(widget);
    pushButton_2->setObjectName("pushButton_2");
    pushButton_2->setGeometry(QRect(540, 680, 181, 41));
    pushButton_3 = new QPushButton(widget);
    pushButton_3->setObjectName("pushButton_3");
    pushButton_3->setGeometry(QRect(40, 131, 21, 20));
    QIcon icon1;
    icon1.addFile(QString::fromUtf8(":/Assets/padlock.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_3->setIcon(icon1);
    pushButton_3->setIconSize(QSize(20, 20));
    pushButton_4 = new QPushButton(widget);
    pushButton_4->setObjectName("pushButton_4");
    pushButton_4->setGeometry(QRect(38, 370, 31, 21));
    QIcon icon2;
    icon2.addFile(QString::fromUtf8(":/Assets/editing.png"), QSize(), QIcon::Normal, QIcon::Off);
    pushButton_4->setIcon(icon2);
    pushButton_4->setIconSize(QSize(20, 20));

    retranslateUi(stackWidget,system);
    QObject::connect(pushButton_2, &QPushButton::clicked, [=]() { {
            try {
                DoneButtonClick(system);
                stackWidget->hide();
                stackWidget->setCurrentWidget(profile);
                profile->setupUi(stackWidget,system);
                stackWidget->show();
            }
            catch (const exception& e) {
                QDialog* qdialog = new QDialog();
                Dialog dialog;
                dialog.setupUi(qdialog, e.what());
                qdialog->exec();
            }
        }
     });
    QMetaObject::connectSlotsByName(stackWidget);
    
}
    

void EditUser::DoneButtonClick(System* system) {
    QString CurrentPassword = lineEdit->text();
    QString NewPassword = lineEdit_2->text();
    QString firstName= lineEdit_5->text();
    QString lastName = lineEdit_6->text();
    QString number = lineEdit_4->text();
   /* bool isPhoneNumm = true;
    for (int i = 0; i < number.size(); i++) {
        if (number[i].isSymbol() || number[i].isSpace() || number[i].isLetter() || number[i].isMark()) {
            isPhoneNumm = false;
        }
    }
    if (NewPassword.isEmpty()) {
        throw exception("Enter A Password");
    }
    else if (NewPassword.length() < 8) {
        throw exception("Password Must Exceed 8 Characters");
    }
    else if (number.isEmpty()) {
        throw exception("Enter Your Phone Number");
    }
    else if (number.length() != 11) {
        throw exception("Enter Valid Phone Number");
    }
    else if (isPhoneNumm == false) {
        throw exception("Enter Valid Phone Number");
    }*/
    //else {
        system->EditProfile(firstName.toLocal8Bit().constData(), lastName.toLocal8Bit().constData(), number.toLocal8Bit().constData(), CurrentPassword.toLocal8Bit().constData(), NewPassword.toLocal8Bit().constData());
   // }
}

void  EditUser::retranslateUi(QStackedWidget* stackWidget,System* system)
{
    User* currentUser = system->GetUser(system->currentUserId);
    stackWidget->setWindowTitle(QCoreApplication::translate("EditUserClass", "EditUser", nullptr));
    label->setText(QCoreApplication::translate("EditUserClass", "Edit User", nullptr));
    pushButton->setText(QString());
    label_2->setText(QCoreApplication::translate("EditUserClass", "Change Password", nullptr));
    lineEdit->setPlaceholderText(QCoreApplication::translate("EditUserClass", " CurrentPassword", nullptr));
    lineEdit->setText(currentUser->GetPassword().c_str());
    lineEdit_2->setPlaceholderText(QCoreApplication::translate("EditUserClass", "  NewPassword", nullptr));
    lineEdit_2->setText(currentUser->GetPassword().c_str());
    label_3->setText(QCoreApplication::translate("EditUserClass", "Edit ", nullptr));
    lineEdit_4->setPlaceholderText(QCoreApplication::translate("EditUserClass", "  Edit Number", nullptr));
    lineEdit_4->setText(currentUser->GetMobileNumber().c_str());
    lineEdit_5->setPlaceholderText(QCoreApplication::translate("EditUserClass", "  Edit FirstName", nullptr));
    lineEdit_5->setText(currentUser->GetFirstName().c_str());
    lineEdit_6->setPlaceholderText(QCoreApplication::translate("EditUserClass", "  Edit LastName", nullptr));
    lineEdit_6->setText(currentUser->GetLastName().c_str());
    pushButton_2->setText(QCoreApplication::translate("EditUserClass", "Done", nullptr));
    pushButton_3->setText(QString());
    pushButton_4->setText(QString());
}


EditUser::~EditUser()
{}
