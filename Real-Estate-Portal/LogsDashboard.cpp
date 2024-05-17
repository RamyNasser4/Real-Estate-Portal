#include "LogsDashboard.h"

LogsDashboard::LogsDashboard(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
void LogsDashboard::setupUi(QWidget* LogsDashboardClass,System* system)
{
    if (LogsDashboardClass->objectName().isEmpty())
        LogsDashboardClass->setObjectName("LogsDashboardClass");
    LogsDashboardClass->resize(801, 741);
    stackedWidget_2 = new QStackedWidget(LogsDashboardClass);
    stackedWidget_2->setObjectName("stackedWidget_2");
    stackedWidget_2->setGeometry(QRect(0, 0, 791, 701));
    stackedWidget_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
        "font-size:20px;\n"
        "}\n"
        ""));
    page_4 = new QWidget();
    page_4->setObjectName("page_4");
    label_141 = new QLabel(page_4);
    label_141->setObjectName("label_141");
    label_141->setGeometry(QRect(370, 0, 81, 61));
    label_141->setStyleSheet(QString::fromUtf8("QLabel\n"
        "{\n"
        "font-size:34px;\n"
        "font-weight:bold;\n"
        "color:#2B2A2A;\n"
        "}"));
    label_142 = new QLabel(page_4);
    label_142->setObjectName("label_142");
    label_142->setGeometry(QRect(300, 10, 61, 51));
    label_142->setStyleSheet(QString::fromUtf8("QLabel\n"
        "{\n"
        "font-size:34px;\n"
        "font-weight:bold;\n"
        "color:#2B2A2A;\n"
        "}"));
    label_142->setPixmap(QPixmap(QString::fromUtf8(":/Assets/data-collection.png")));
    label_142->setScaledContents(true);
    line_15 = new QFrame(page_4);
    line_15->setObjectName("line_15");
    line_15->setGeometry(QRect(30, 70, 731, 16));
    line_15->setFrameShape(QFrame::Shape::HLine);
    line_15->setFrameShadow(QFrame::Shadow::Sunken);
    scrollArea_7 = new QScrollArea(page_4);
    scrollArea_7->setObjectName("scrollArea_7");
    scrollArea_7->setGeometry(QRect(0, 190, 791, 201));
    scrollArea_7->setStyleSheet(
        "QScrollBar:vertical {"
        "border: 1px solid #999999;"
        "background: #F0F0F0;"
        "width: 15px;"
        "margin: 22px 0 22px 0;"
        "}"
        "QScrollBar::handle:vertical {"
        "background: #666666;"
        "min-height: 20px;"
        "border-radius: 7px;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
        "background: none;"
        "}"
        "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
        "background: none;"
        "}"
    );
    drawUsers(scrollAreaWidgetContents_7, system, scrollArea_7);
    label_147 = new QLabel(page_4);
    label_147->setObjectName("label_147");
    label_147->setGeometry(QRect(70, 90, 211, 31));
    frame_19 = new QFrame(page_4);
    frame_19->setObjectName("frame_19");
    frame_19->setGeometry(QRect(20, 140, 761, 41));
    frame_19->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
    frame_19->setFrameShape(QFrame::Shape::StyledPanel);
    frame_19->setFrameShadow(QFrame::Shadow::Raised);
    label_148 = new QLabel(frame_19);
    label_148->setObjectName("label_148");
    label_148->setGeometry(QRect(50, 3, 141, 31));
    label_149 = new QLabel(frame_19);
    label_149->setObjectName("label_149");
    label_149->setGeometry(QRect(240, 3, 141, 31));
    label_150 = new QLabel(frame_19);
    label_150->setObjectName("label_150");
    label_150->setGeometry(QRect(440, 3, 141, 31));
    label_151 = new QLabel(frame_19);
    label_151->setObjectName("label_151");
    label_151->setGeometry(QRect(600, 3, 131, 31));
    scrollArea_8 = new QScrollArea(page_4);
    scrollArea_8->setObjectName("scrollArea_8");
    scrollArea_8->setGeometry(QRect(0, 510, 791, 201));
    scrollArea_8->setStyleSheet(
        "QScrollBar:vertical {"
        "border: 1px solid #999999;"
        "background: #F0F0F0;"
        "width: 15px;"
        "margin: 22px 0 22px 0;"
        "}"
        "QScrollBar::handle:vertical {"
        "background: #666666;"
        "min-height: 20px;"
        "border-radius: 7px;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
        "background: none;"
        "}"
        "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
        "background: none;"
        "}"
    );
    drawProperties(scrollAreaWidgetContents_8, system, scrollArea_8);
    line_16 = new QFrame(page_4);
    line_16->setObjectName("line_16");
    line_16->setGeometry(QRect(30, 390, 731, 16));
    line_16->setFrameShape(QFrame::Shape::HLine);
    line_16->setFrameShadow(QFrame::Shadow::Sunken);
    label_155 = new QLabel(page_4);
    label_155->setObjectName("label_155");
    label_155->setGeometry(QRect(70, 410, 211, 31));
    frame_21 = new QFrame(page_4);
    frame_21->setObjectName("frame_21");
    frame_21->setGeometry(QRect(20, 460, 761, 41));
    frame_21->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
    frame_21->setFrameShape(QFrame::Shape::StyledPanel);
    frame_21->setFrameShadow(QFrame::Shadow::Raised);
    label_156 = new QLabel(frame_21);
    label_156->setObjectName("label_156");
    label_156->setGeometry(QRect(20, 3, 141, 31));
    label_157 = new QLabel(frame_21);
    label_157->setObjectName("label_157");
    label_157->setGeometry(QRect(240, 3, 141, 31));
    label_158 = new QLabel(frame_21);
    label_158->setObjectName("label_158");
    label_158->setGeometry(QRect(440, 3, 141, 31));
    label_159 = new QLabel(frame_21);
    label_159->setObjectName("label_159");
    label_159->setGeometry(QRect(600, 3, 131, 31));
    //user changes
    stackedWidget_2->addWidget(page_4);
    page_5 = new QWidget();
    page_5->setObjectName("page_5");
    label_160 = new QLabel(page_5);
    label_160->setObjectName("label_160");
    label_160->setGeometry(QRect(310, 0, 231, 61));
    label_160->setStyleSheet(QString::fromUtf8("QLabel\n"
        "{\n"
        "font-size:34px;\n"
        "font-weight:bold;\n"
        "color:#2B2A2A;\n"
        "}"));
    pushButton_11 = new QPushButton(page_5);
    pushButton_11->setObjectName("pushButton_11");
    pushButton_11->setGeometry(QRect(20, 10, 41, 41));
    pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "  border-radius: 5px;\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "}\n"
        "\n"
        "QPushButton:hover{\n"
        "background: #CCD0CD;\n"
        "\n"
        "}\n"
        "\n"
        ""));
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/Assets/back.png"), QSize(), QIcon::Selected, QIcon::Off);
    pushButton_11->setIcon(icon);
    pushButton_11->setIconSize(QSize(33, 31));
    line_17 = new QFrame(page_5);
    line_17->setObjectName("line_17");
    line_17->setGeometry(QRect(40, 70, 731, 16));
    line_17->setFrameShape(QFrame::Shape::HLine);
    line_17->setFrameShadow(QFrame::Shadow::Sunken);
    frame_22 = new QFrame(page_5);
    frame_22->setObjectName("frame_22");
    frame_22->setGeometry(QRect(30, 210, 301, 341));
    frame_22->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "background-color:white;\n"
        " width: 200px;\n"
        "        height: 200px;\n"
        "        border: 2px solid white;\n"
        "        border-radius: 50%;\n"
        "}"));
    frame_22->setFrameShape(QFrame::Shape::StyledPanel);
    frame_22->setFrameShadow(QFrame::Shadow::Raised);
    all_labels_7 = new QLabel(frame_22);
    all_labels_7->setObjectName("all_labels_7");
    all_labels_7->setGeometry(QRect(10, 90, 251, 41));
    all_labels_7->setStyleSheet(QString::fromUtf8(""));
    all_labels_8 = new QLabel(frame_22);
    all_labels_8->setObjectName("all_labels_8");
    all_labels_8->setGeometry(QRect(10, 210, 281, 41));
    all_labels_8->setStyleSheet(QString::fromUtf8("#all_labels{\n"
        "font-size:18px;\n"
        "}"));
    all_labels_25 = new QLabel(frame_22);
    all_labels_25->setObjectName("all_labels_25");
    all_labels_25->setGeometry(QRect(10, 150, 271, 41));
    all_labels_25->setStyleSheet(QString::fromUtf8(""));
    all_labels_9 = new QLabel(frame_22);
    all_labels_9->setObjectName("all_labels_9");
    all_labels_9->setGeometry(QRect(10, 30, 251, 41));
    all_labels_9->setStyleSheet(QString::fromUtf8(""));
    all_labels_26 = new QLabel(frame_22);
    all_labels_26->setObjectName("all_labels_26");
    all_labels_26->setGeometry(QRect(10, 270, 271, 41));
    all_labels_26->setStyleSheet(QString::fromUtf8(""));
    label_161 = new QLabel(page_5);
    label_161->setObjectName("label_161");
    label_161->setGeometry(QRect(360, 340, 71, 71));
    label_161->setPixmap(QPixmap(QString::fromUtf8(":/Assets/fast-forward.png")));
    label_161->setScaledContents(true);
    frame_23 = new QFrame(page_5);
    frame_23->setObjectName("frame_23");
    frame_23->setGeometry(QRect(450, 210, 301, 341));
    frame_23->setStyleSheet(QString::fromUtf8("QFrame{\n"
        "background-color:white;\n"
        " width: 200px;\n"
        "        height: 200px;\n"
        "        border: 2px solid white;\n"
        "        border-radius: 50%;\n"
        "}"));
    frame_23->setFrameShape(QFrame::Shape::StyledPanel);
    frame_23->setFrameShadow(QFrame::Shadow::Raised);
    all_labels_10 = new QLabel(frame_23);
    all_labels_10->setObjectName("all_labels_10");
    all_labels_10->setGeometry(QRect(10, 90, 251, 41));
    all_labels_10->setStyleSheet(QString::fromUtf8(""));
    all_labels_11 = new QLabel(frame_23);
    all_labels_11->setObjectName("all_labels_11");
    all_labels_11->setGeometry(QRect(10, 210, 281, 41));
    all_labels_11->setStyleSheet(QString::fromUtf8("#all_labels{\n"
        "font-size:18px;\n"
        "}"));
    all_labels_27 = new QLabel(frame_23);
    all_labels_27->setObjectName("all_labels_27");
    all_labels_27->setGeometry(QRect(10, 150, 271, 41));
    all_labels_27->setStyleSheet(QString::fromUtf8(""));
    all_labels_12 = new QLabel(frame_23);
    all_labels_12->setObjectName("all_labels_12");
    all_labels_12->setGeometry(QRect(10, 30, 251, 41));
    all_labels_12->setStyleSheet(QString::fromUtf8(""));
    all_labels_28 = new QLabel(frame_23);
    all_labels_28->setObjectName("all_labels_28");
    all_labels_28->setGeometry(QRect(10, 270, 271, 41));
    all_labels_28->setStyleSheet(QString::fromUtf8(""));
    stackedWidget_2->addWidget(page_5);
    //property details page
    page_6 = new QWidget();
    page_6->setObjectName("page_6");
    pushButton_12 = new QPushButton(page_6);
    pushButton_12->setObjectName("pushButton_12");
    pushButton_12->setGeometry(QRect(20, 10, 41, 41));
    pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
        "  border-radius: 5px;\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "}\n"
        "\n"
        "QPushButton:hover{\n"
        "background: #CCD0CD;\n"
        "\n"
        "}\n"
        "\n"
        ""));
    pushButton_12->setIcon(icon);
    pushButton_12->setIconSize(QSize(33, 31));
    label_162 = new QLabel(page_6);
    label_162->setObjectName("label_162");
    label_162->setGeometry(QRect(250, 0, 341, 61));
    label_162->setStyleSheet(QString::fromUtf8("QLabel\n"
        "{\n"
        "font-size:34px;\n"
        "font-weight:bold;\n"
        "color:#2B2A2A;\n"
        "}"));
    line_18 = new QFrame(page_6);
    line_18->setObjectName("line_18");
    line_18->setGeometry(QRect(40, 70, 731, 16));
    line_18->setFrameShape(QFrame::Shape::HLine);
    line_18->setFrameShadow(QFrame::Shadow::Sunken);
    frame_24 = new QFrame(page_6);
    frame_24->setObjectName("frame_24");
    frame_24->setGeometry(QRect(20, 80, 751, 291));
    frame_24->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
    frame_24->setFrameShape(QFrame::Shape::StyledPanel);
    frame_24->setFrameShadow(QFrame::Shadow::Raised);
    label_163 = new QLabel(frame_24);
    label_163->setObjectName("label_163");
    label_163->setGeometry(QRect(20, 40, 151, 151));
    label_163->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
    label_163->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
    label_163->setScaledContents(true);
    label_164 = new QLabel(frame_24);
    label_164->setObjectName("label_164");
    label_164->setGeometry(QRect(180, 60, 211, 21));
    label_165 = new QLabel(frame_24);
    label_165->setObjectName("label_165");
    label_165->setGeometry(QRect(180, 100, 201, 20));
    label_166 = new QLabel(frame_24);
    label_166->setObjectName("label_166");
    label_166->setGeometry(QRect(180, 140, 211, 21));
    label_167 = new QLabel(frame_24);
    label_167->setObjectName("label_167");
    label_167->setGeometry(QRect(400, 60, 231, 21));
    label_168 = new QLabel(frame_24);
    label_168->setObjectName("label_168");
    label_168->setGeometry(QRect(400, 100, 211, 21));
    label_169 = new QLabel(frame_24);
    label_169->setObjectName("label_169");
    label_169->setGeometry(QRect(400, 140, 331, 21));
    label_170 = new QLabel(frame_24);
    label_170->setObjectName("label_170");
    label_170->setGeometry(QRect(180, 180, 221, 21));
    label_171 = new QLabel(frame_24);
    label_171->setObjectName("label_171");
    label_171->setGeometry(QRect(400, 180, 211, 21));
    label_172 = new QLabel(frame_24);
    label_172->setObjectName("label_172");
    label_172->setGeometry(QRect(180, 20, 211, 21));
    label_173 = new QLabel(frame_24);
    label_173->setObjectName("label_173");
    label_173->setGeometry(QRect(400, 20, 231, 21));
    textEdit_3 = new QTextEdit(frame_24);
    textEdit_3->setObjectName("textEdit_3");
    textEdit_3->setGeometry(QRect(106, 208, 621, 81));
    textEdit_3->setReadOnly(true);
    label_174 = new QLabel(frame_24);
    label_174->setObjectName("label_174");
    label_174->setGeometry(QRect(20, 210, 91, 21));
    label_175 = new QLabel(page_6);
    label_175->setObjectName("label_175");
    label_175->setGeometry(QRect(380, 375, 31, 21));
    label_175->setPixmap(QPixmap(QString::fromUtf8(":/Assets/double down arrow.png")));
    label_175->setScaledContents(true);
    frame_25 = new QFrame(page_6);
    frame_25->setObjectName("frame_25");
    frame_25->setGeometry(QRect(20, 400, 751, 291));
    frame_25->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
    frame_25->setFrameShape(QFrame::Shape::StyledPanel);
    frame_25->setFrameShadow(QFrame::Shadow::Raised);
    label_176 = new QLabel(frame_25);
    label_176->setObjectName("label_176");
    label_176->setGeometry(QRect(20, 40, 151, 151));
    label_176->setStyleSheet(QString::fromUtf8("#label_2{color:black;}"));
    label_176->setPixmap(QPixmap(QString::fromUtf8(":/Assets/home128.png")));
    label_176->setScaledContents(true);
    label_177 = new QLabel(frame_25);
    label_177->setObjectName("label_177");
    label_177->setGeometry(QRect(180, 60, 211, 21));
    label_178 = new QLabel(frame_25);
    label_178->setObjectName("label_178");
    label_178->setGeometry(QRect(180, 100, 201, 20));
    label_179 = new QLabel(frame_25);
    label_179->setObjectName("label_179");
    label_179->setGeometry(QRect(180, 140, 211, 21));
    label_180 = new QLabel(frame_25);
    label_180->setObjectName("label_180");
    label_180->setGeometry(QRect(400, 60, 231, 21));
    label_181 = new QLabel(frame_25);
    label_181->setObjectName("label_181");
    label_181->setGeometry(QRect(400, 100, 211, 21));
    label_182 = new QLabel(frame_25);
    label_182->setObjectName("label_182");
    label_182->setGeometry(QRect(400, 140, 331, 21));
    label_183 = new QLabel(frame_25);
    label_183->setObjectName("label_183");
    label_183->setGeometry(QRect(180, 180, 221, 21));
    label_184 = new QLabel(frame_25);
    label_184->setObjectName("label_184");
    label_184->setGeometry(QRect(400, 180, 211, 21));
    label_185 = new QLabel(frame_25);
    label_185->setObjectName("label_185");
    label_185->setGeometry(QRect(180, 20, 211, 21));
    label_186 = new QLabel(frame_25);
    label_186->setObjectName("label_186");
    label_186->setGeometry(QRect(400, 20, 231, 21));
    textEdit_4 = new QTextEdit(frame_25);
    textEdit_4->setObjectName("textEdit_4");
    textEdit_4->setGeometry(QRect(106, 208, 621, 81));
    textEdit_4->setReadOnly(true);
    label_187 = new QLabel(frame_25);
    label_187->setObjectName("label_187");
    label_187->setGeometry(QRect(20, 210, 91, 21));
    stackedWidget_2->addWidget(page_6);

    retranslateUi(LogsDashboardClass);

    //stackedWidget_2->setCurrentIndex(2);
    QObject::connect(pushButton_11, &QPushButton::clicked, [=]() {
        stackedWidget_2->setCurrentWidget(page_4);
        });
    QObject::connect(pushButton_12, &QPushButton::clicked, [=]() {
        stackedWidget_2->setCurrentWidget(page_4);
        });

    QMetaObject::connectSlotsByName(LogsDashboardClass);
} // setupUi
void LogsDashboard::drawUsers(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea) {
    scrollAreaWidgetContents = new QWidget(scrollArea);
    vector<EditUserRequest*> editUserLogs = system->EditUserLogs;
    if (editUserLogs.size() != 0) {
        int i = 1;
        int currentCardY = 10;
        int totalHeight = 100 * editUserLogs.size();
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, totalHeight));
        for (auto it = editUserLogs.rbegin(); it != editUserLogs.rend(); ++it) {
            QFrame* userCard = new QFrame(scrollAreaWidgetContents);
            userCard->setObjectName("userCard" + i);
            userCard->setGeometry(QRect(20, currentCardY, 761, 41));
            userCard->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
            userCard->setFrameShape(QFrame::Shape::StyledPanel);
            userCard->setFrameShadow(QFrame::Shadow::Raised);
            QLabel* nationalID = new QLabel(userCard);
            nationalID->setObjectName("nationalID" + i);
            nationalID->setGeometry(QRect(50, 3, 141, 31));
            string strNationalID = "#" + (*it)->GetNationalId();
            nationalID->setText(strNationalID.c_str());
            QLabel* Name = new QLabel(userCard);
            Name->setObjectName("fName" + i);
            Name->setGeometry(QRect(240, 3, 141, 31));
            string strName = (*it)->GetNewFirstName() + " " + (*it)->GetNewLastName();
            Name->setText(strName.c_str());
            QPushButton* action = new QPushButton(userCard);
            action->setObjectName("action"+i);
            action->setGeometry(QRect(430, 8, 91, 24));
            action->setStyleSheet(QString::fromUtf8("QPushButton{\n"
                "  border-radius: 10px;\n"
                "  background: #699CCC;\n"
                "color:white;\n"
                "\n"
                "\n"
                "\n"
                "}\n"
                "\n"
                "QPushButton:hover{\n"
                "background: #CCD0CD;\n"
                "color:black;\n"
                "\n"
                "}\n"
                "\n"
                ""));
            action->setText("View Action");
            QLabel* Date = new QLabel(userCard);
            Date->setObjectName("Date" + i);
            Date->setGeometry(QRect(600, 3, 161, 31));
            time_t tDate = (*it)->GetTime();
            char buffer[26]; // Enough space to hold the string representation of time
            size_t bufferSize = sizeof(buffer);
            const char* format = "%Y-%m-%d %H:%M:%S" /**/;
            struct tm timeInfo;
            localtime_s(&timeInfo, &tDate);
            strftime(buffer, sizeof(buffer), format, &timeInfo);
            string strDate = buffer;
            Date->setText(strDate.c_str());
            QLabel* profileIcon = new QLabel(userCard);
            profileIcon->setObjectName("profileIcon" + i);
            profileIcon->setGeometry(QRect(7, 5, 31, 31));
            profileIcon->setPixmap(QPixmap(QString::fromUtf8("Assets/profile.png")));
            profileIcon->setScaledContents(true);
            string strOldFName = "First Name : " + (*it)->GetOldFirstName();
            string strOldLName = "Last Name : " + (*it)->GetOldLastName();
            string strOldMob = "Phone Number : " + (*it)->GetOldMobileNumber();
            string userID = "User ID : " + (*it)->GetNationalId();
            string passState = (*it)->GetPasswordChanged() ? "Password State : Changed " : "Password State : Unchanged";
            string strNewFName = "First Name : " + (*it)->GetNewFirstName();
            string strNewLName = "Last Name : " + (*it)->GetNewLastName();
            string strNewMob = "Phone Number : " + (*it)->GetNewMobileNumber();
            QObject::connect(action, &QPushButton::clicked, [=]() {
                all_labels_7->setText(QCoreApplication::translate("LogsDashboardClass", strOldFName.c_str(), nullptr));
                all_labels_8->setText(QCoreApplication::translate("LogsDashboardClass", strOldMob.c_str(), nullptr));
                all_labels_25->setText(QCoreApplication::translate("LogsDashboardClass", strOldLName.c_str(), nullptr));
                all_labels_9->setText(QCoreApplication::translate("LogsDashboardClass", userID.c_str(), nullptr));
                all_labels_26->setText(QCoreApplication::translate("LogsDashboardClass", "Password State :", nullptr));
                all_labels_10->setText(QCoreApplication::translate("LogsDashboardClass", strNewFName.c_str(), nullptr));
                all_labels_11->setText(QCoreApplication::translate("LogsDashboardClass", strNewMob.c_str(), nullptr));
                all_labels_27->setText(QCoreApplication::translate("LogsDashboardClass", strNewLName.c_str(), nullptr));
                all_labels_12->setText(QCoreApplication::translate("LogsDashboardClass", userID.c_str(), nullptr));
                all_labels_28->setText(QCoreApplication::translate("LogsDashboardClass", passState.c_str(), nullptr));
                stackedWidget_2->setCurrentWidget(page_5);
                });
            i++;
            currentCardY += 50;
        }
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }
    else {
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 791));
        /*QLabel* placeholder = new QLabel(scrollAreaWidgetContents);
        placeholder->setObjectName("placeholder");
        placeholder->setGeometry(QRect(130, 0, 501, 441));
        placeholder->setPixmap(QPixmap(QString::fromUtf8(":/Assets/9318694-removebg-preview.png")));*/
        QLabel* label1 = new QLabel(scrollAreaWidgetContents);
        label1->setObjectName("label_38");
        label1->setGeometry(QRect(270, 60, 321, 41));
        label1->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-size:30px;\n"
            "font-family:sans-serif;\n"
            "font-weight:600;\n"
            "}"));
        QLabel* label2 = new QLabel(scrollAreaWidgetContents);
        label2->setObjectName("label_39");
        label2->setGeometry(QRect(300, 100, 300, 26));
        label2->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-family:sans-serif;\n"
            "color:#808080;\n"
            "font-weight:600;\n"
            "font-size:15px;"
            "}"));
        label1->setText(QCoreApplication::translate("ListingsClass", "No Logs To Show", nullptr));
        label2->setText(QCoreApplication::translate("ListingsClass", "We couldn't find any logs ", nullptr));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }
}
void LogsDashboard::drawProperties(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea) {
    scrollAreaWidgetContents = new QWidget(scrollArea);
    vector<EditPropertyRequest*> editPropertyLogs = system->EditPropertyLogs;
    if (editPropertyLogs.size() != 0) {
        int i = 1;
        int currentCardY = 10;
        int totalHeight = 100 * editPropertyLogs.size();
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, totalHeight));
        for (auto it = editPropertyLogs.rbegin(); it != editPropertyLogs.rend(); ++it) {
            QFrame* propertyCard = new QFrame(scrollAreaWidgetContents);
            propertyCard->setObjectName("propertyCard" + i);
            propertyCard->setGeometry(QRect(20, currentCardY, 761, 41));
            propertyCard->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
            propertyCard->setFrameShape(QFrame::Shape::StyledPanel);
            propertyCard->setFrameShadow(QFrame::Shadow::Raised);
            QLabel* PropertyID = new QLabel(propertyCard);
            PropertyID->setObjectName("PropertyID" + i);
            PropertyID->setGeometry(QRect(20, 3, 141, 31));
            string strPropertyID = (*it)->GetPropertyId();
            PropertyID->setText(strPropertyID.c_str());
            QLabel* nationalID = new QLabel(propertyCard);
            nationalID->setObjectName("nationalID" + i);
            nationalID->setGeometry(QRect(240, 3, 161, 31));
            string strNationalID = "#" + (*it)->GetUserId();
            nationalID->setText(strNationalID.c_str());
            QPushButton* action = new QPushButton(propertyCard);
            action->setObjectName("action" + i);
            action->setGeometry(QRect(430, 8, 91, 24));
            action->setStyleSheet(QString::fromUtf8("QPushButton{\n"
                "  border-radius: 10px;\n"
                "  background: #699CCC;\n"
                "color:white;\n"
                "\n"
                "\n"
                "\n"
                "}\n"
                "\n"
                "QPushButton:hover{\n"
                "background: #CCD0CD;\n"
                "color:black;\n"
                "\n"
                "}\n"
                "\n"
                ""));
            action->setText("View Action");
            QLabel* Date = new QLabel(propertyCard);
            Date->setObjectName("Date" + i);
            Date->setGeometry(QRect(600, 3, 161, 31));
            time_t tDate = (*it)->GetTime();
            char buffer[26]; // Enough space to hold the string representation of time
            size_t bufferSize = sizeof(buffer);
            const char* format = "%Y-%m-%d %H:%M:%S" /**/;
            struct tm timeInfo;
            localtime_s(&timeInfo, &tDate);
            strftime(buffer, sizeof(buffer), format,&timeInfo );
            string strDate = buffer;
            Date->setText(strDate.c_str());
            string strOldLocation = "Location : " + (*it)->GetOldLocation();
            string strOldSqFootage = "Space : " + to_string((*it)->GetOldSquareFootage());
            string strOldBedrooms = "Bedrooms : " + to_string((*it)->GetOldNumberOfBedrooms());
            string strOldPrice = "Price : " + to_string((*it)->GetOldPrice());
            string strOldType = "Type : " + (*it)->GetOldPropertyType();
            string strOldCity = " City : " + (*it)->GetOldCity();
            string userID = "User ID :" + (*it)->GetUserId();
            string userName = "Username : " + system->GetUser((*it)->GetUserId())->GetName();
            string logPropertyID = "Property ID : " + (*it)->GetPropertyId();
            string strOldAddress = "Address Line : " + (*it)->GetOldAddressLine();
            string strOldDescription = (*it)->GetOldPropertyDescription();
            string strNewLocation = "Location : " + (*it)->GetNewLocation();
            string strNewSqFootage = "Space : " + to_string((*it)->GetNewSquareFootage());
            string strNewBedrooms = "Bedrooms : " + to_string((*it)->GetNewNumberOfBedrooms());
            string strNewPrice = "Price : " + to_string((*it)->GetNewPrice());
            string strNewType = "Type : " + (*it)->GetNewPropertyType();
            string strNewCity = " City : " + (*it)->GetNewCity();
            string strNewAddress = "Address Line : " + (*it)->GetNewAddressLine();
            string strNewDescription = (*it)->GetNewPropertyDescription();
            QObject::connect(action, &QPushButton::clicked, [=]() {
                label_164->setText(QCoreApplication::translate("LogsDashboardClass", strOldLocation.c_str(), nullptr));
                label_165->setText(QCoreApplication::translate("LogsDashboardClass", strOldSqFootage.c_str(), nullptr));
                label_166->setText(QCoreApplication::translate("LogsDashboardClass", strOldBedrooms.c_str(), nullptr));
                label_167->setText(QCoreApplication::translate("LogsDashboardClass", strOldPrice.c_str(), nullptr));
                label_168->setText(QCoreApplication::translate("LogsDashboardClass", strOldType.c_str(), nullptr));
                label_169->setText(QCoreApplication::translate("LogsDashboardClass", strOldCity.c_str(), nullptr));
                label_170->setText(QCoreApplication::translate("LogsDashboardClass", userID.c_str(), nullptr));
                label_171->setText(QCoreApplication::translate("LogsDashboardClass", userName.c_str(), nullptr));
                label_172->setText(QCoreApplication::translate("LogsDashboardClass", logPropertyID.c_str(), nullptr));
                label_173->setText(QCoreApplication::translate("LogsDashboardClass", strOldAddress.c_str(), nullptr));
                /*textEdit_3->setHtml(QCoreApplication::translate("LogsDashboardClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
                    "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
                    "p, li { white-space: pre-wrap; }\n"
                    "hr { height: 1px; border-width: 0; }\n"
                    "li.unchecked::marker { content: \"\\2610\"; }\n"
                    "li.checked::marker { content: \"\\2612\"; }\n"
                    "</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
                    "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully ffffffff Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully ffffffff</p"
                    "></body></html>", nullptr));*/
                textEdit_3->setText(strOldDescription.c_str());
                label_174->setText(QCoreApplication::translate("LogsDashboardClass", "Description :", nullptr));
                label_176->setText(QString());
                label_177->setText(QCoreApplication::translate("LogsDashboardClass", strNewLocation.c_str(), nullptr));
                label_178->setText(QCoreApplication::translate("LogsDashboardClass", strNewSqFootage.c_str(), nullptr));
                label_179->setText(QCoreApplication::translate("LogsDashboardClass", strNewBedrooms.c_str(), nullptr));
                label_180->setText(QCoreApplication::translate("LogsDashboardClass", strNewPrice.c_str(), nullptr));
                label_181->setText(QCoreApplication::translate("LogsDashboardClass", strNewType.c_str(), nullptr));
                label_182->setText(QCoreApplication::translate("LogsDashboardClass", strNewCity.c_str(), nullptr));
                label_183->setText(QCoreApplication::translate("LogsDashboardClass", userID.c_str(), nullptr));
                label_184->setText(QCoreApplication::translate("LogsDashboardClass", userName.c_str(), nullptr));
                label_185->setText(QCoreApplication::translate("LogsDashboardClass", logPropertyID.c_str(), nullptr));
                label_186->setText(QCoreApplication::translate("LogsDashboardClass", strNewAddress.c_str(), nullptr));
                /*textEdit_4->setHtml(QCoreApplication::translate("LogsDashboardClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
                    "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
                    "p, li { white-space: pre-wrap; }\n"
                    "hr { height: 1px; border-width: 0; }\n"
                    "li.unchecked::marker { content: \"\\2610\"; }\n"
                    "li.checked::marker { content: \"\\2612\"; }\n"
                    "</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
                    "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully ffffffff Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully ffffffff</p"
                    "></body></html>", nullptr));*/
                textEdit_4->setText(strNewDescription.c_str());
                label_187->setText(QCoreApplication::translate("LogsDashboardClass", "Description :", nullptr));
                stackedWidget_2->setCurrentWidget(page_6);
                });
            i++;
            currentCardY += 50;
        }
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }
    else {
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 780, 791));
        /*QLabel* placeholder = new QLabel(scrollAreaWidgetContents);
        placeholder->setObjectName("placeholder");
        placeholder->setGeometry(QRect(130, 0, 501, 441));
        placeholder->setPixmap(QPixmap(QString::fromUtf8(":/Assets/9318694-removebg-preview.png")));*/
        QLabel* label1 = new QLabel(scrollAreaWidgetContents);
        label1->setObjectName("label_38");
        label1->setGeometry(QRect(270, 50, 321, 41));
        label1->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-size:30px;\n"
            "font-family:sans-serif;\n"
            "font-weight:600;\n"
            "}"));
        QLabel* label2 = new QLabel(scrollAreaWidgetContents);
        label2->setObjectName("label_39");
        label2->setGeometry(QRect(300, 90, 300, 26));
        label2->setStyleSheet(QString::fromUtf8("QLabel{\n"
            "font-family:sans-serif;\n"
            "color:#808080;\n"
            "font-weight:600;\n"
            "font-size:15px;"
            "}"));
        label1->setText(QCoreApplication::translate("ListingsClass", "No Logs To Show", nullptr));
        label2->setText(QCoreApplication::translate("ListingsClass", "We couldn't find any logs ", nullptr));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }
}
void LogsDashboard::retranslateUi(QWidget* LogsDashboardClass)
{
    LogsDashboardClass->setWindowTitle(QCoreApplication::translate("LogsDashboardClass", "LogsDashboard", nullptr));
    label_141->setText(QCoreApplication::translate("LogsDashboardClass", "Logs", nullptr));
    label_142->setText(QString());
    label_147->setText(QCoreApplication::translate("LogsDashboardClass", "Users Logs :", nullptr));
    label_148->setText(QCoreApplication::translate("LogsDashboardClass", "# ID", nullptr));
    label_149->setText(QCoreApplication::translate("LogsDashboardClass", "Name", nullptr));
    label_150->setText(QCoreApplication::translate("LogsDashboardClass", "Action", nullptr));
    label_155->setText(QCoreApplication::translate("LogsDashboardClass", "Properties Logs :", nullptr));
    label_156->setText(QCoreApplication::translate("LogsDashboardClass", "Property ID", nullptr));
    label_157->setText(QCoreApplication::translate("LogsDashboardClass", "#User Id", nullptr));
    label_158->setText(QCoreApplication::translate("LogsDashboardClass", "Action", nullptr));
    label_159->setText(QCoreApplication::translate("LogsDashboardClass", "Date", nullptr));
    label_160->setText(QCoreApplication::translate("LogsDashboardClass", "User Changes", nullptr));
    pushButton_11->setText(QString());
    label_151->setText("Date");
    label_161->setText(QString());
    label_162->setText(QCoreApplication::translate("LogsDashboardClass", "Properties Changes", nullptr));
    pushButton_12->setText(QString());
    label_175->setText(QString());
} // retranslateUi

LogsDashboard::~LogsDashboard()
{}
