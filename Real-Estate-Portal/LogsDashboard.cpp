#include "LogsDashboard.h"

LogsDashboard::LogsDashboard(QWidget *parent)
	: QWidget(parent)
{
	//ui.setupUi(this);
}
void LogsDashboard::setupUi(QWidget* LogsDashboardClass)
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
    scrollArea_7->setWidgetResizable(true);
    scrollAreaWidgetContents_7 = new QWidget();
    scrollAreaWidgetContents_7->setObjectName("scrollAreaWidgetContents_7");
    scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 789, 199));
    frame_18 = new QFrame(scrollAreaWidgetContents_7);
    frame_18->setObjectName("frame_18");
    frame_18->setGeometry(QRect(20, 10, 761, 41));
    frame_18->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
    frame_18->setFrameShape(QFrame::Shape::StyledPanel);
    frame_18->setFrameShadow(QFrame::Shadow::Raised);
    label_143 = new QLabel(frame_18);
    label_143->setObjectName("label_143");
    label_143->setGeometry(QRect(50, 3, 141, 31));
    label_144 = new QLabel(frame_18);
    label_144->setObjectName("label_144");
    label_144->setGeometry(QRect(240, 3, 141, 31));
    label_145 = new QLabel(frame_18);
    label_145->setObjectName("label_145");
    label_145->setGeometry(QRect(600, 3, 131, 31));
    label_146 = new QLabel(frame_18);
    label_146->setObjectName("label_146");
    label_146->setGeometry(QRect(7, 5, 31, 31));
    label_146->setPixmap(QPixmap(QString::fromUtf8("Assets/profile.png")));
    label_146->setScaledContents(true);
    pushButton_9 = new QPushButton(frame_18);
    pushButton_9->setObjectName("pushButton_9");
    pushButton_9->setGeometry(QRect(430, 8, 91, 24));
    pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
    scrollArea_7->setWidget(scrollAreaWidgetContents_7);
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
    scrollArea_8->setWidgetResizable(true);
    scrollAreaWidgetContents_8 = new QWidget();
    scrollAreaWidgetContents_8->setObjectName("scrollAreaWidgetContents_8");
    scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 789, 199));
    frame_20 = new QFrame(scrollAreaWidgetContents_8);
    frame_20->setObjectName("frame_20");
    frame_20->setGeometry(QRect(20, 10, 761, 41));
    frame_20->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
    frame_20->setFrameShape(QFrame::Shape::StyledPanel);
    frame_20->setFrameShadow(QFrame::Shadow::Raised);
    label_152 = new QLabel(frame_20);
    label_152->setObjectName("label_152");
    label_152->setGeometry(QRect(20, 3, 141, 31));
    label_153 = new QLabel(frame_20);
    label_153->setObjectName("label_153");
    label_153->setGeometry(QRect(240, 3, 161, 31));
    label_154 = new QLabel(frame_20);
    label_154->setObjectName("label_154");
    label_154->setGeometry(QRect(600, 3, 131, 31));
    pushButton_10 = new QPushButton(frame_20);
    pushButton_10->setObjectName("pushButton_10");
    pushButton_10->setGeometry(QRect(430, 8, 91, 24));
    pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
    scrollArea_8->setWidget(scrollAreaWidgetContents_8);
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
    frame_24->setGeometry(QRect(20, 90, 751, 291));
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
    label_175->setGeometry(QRect(380, 385, 31, 21));
    label_175->setPixmap(QPixmap(QString::fromUtf8(":/Assets/double down arrow.png")));
    label_175->setScaledContents(true);
    frame_25 = new QFrame(page_6);
    frame_25->setObjectName("frame_25");
    frame_25->setGeometry(QRect(20, 410, 751, 291));
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

    stackedWidget_2->setCurrentIndex(2);


    QMetaObject::connectSlotsByName(LogsDashboardClass);
} // setupUi
void LogsDashboard::retranslateUi(QWidget* LogsDashboardClass)
{
    LogsDashboardClass->setWindowTitle(QCoreApplication::translate("LogsDashboardClass", "LogsDashboard", nullptr));
    label_141->setText(QCoreApplication::translate("LogsDashboardClass", "Logs", nullptr));
    label_142->setText(QString());
    label_143->setText(QCoreApplication::translate("LogsDashboardClass", "#12345678901234", nullptr));
    label_144->setText(QCoreApplication::translate("LogsDashboardClass", "Ahmed", nullptr));
    label_145->setText(QCoreApplication::translate("LogsDashboardClass", "012345678900", nullptr));
    label_146->setText(QString());
    pushButton_9->setText(QCoreApplication::translate("LogsDashboardClass", "View Change", nullptr));
    label_147->setText(QCoreApplication::translate("LogsDashboardClass", "Users Logs :", nullptr));
    label_148->setText(QCoreApplication::translate("LogsDashboardClass", "# ID", nullptr));
    label_149->setText(QCoreApplication::translate("LogsDashboardClass", "Name", nullptr));
    label_150->setText(QCoreApplication::translate("LogsDashboardClass", "Action", nullptr));
    label_151->setText(QCoreApplication::translate("LogsDashboardClass", "Date", nullptr));
    label_152->setText(QCoreApplication::translate("LogsDashboardClass", "12345678901234", nullptr));
    label_153->setText(QCoreApplication::translate("LogsDashboardClass", "# 1234567890", nullptr));
    label_154->setText(QCoreApplication::translate("LogsDashboardClass", "19/33/34", nullptr));
    pushButton_10->setText(QCoreApplication::translate("LogsDashboardClass", "View Change", nullptr));
    label_155->setText(QCoreApplication::translate("LogsDashboardClass", "Properties Logs :", nullptr));
    label_156->setText(QCoreApplication::translate("LogsDashboardClass", "Property ID", nullptr));
    label_157->setText(QCoreApplication::translate("LogsDashboardClass", "#User Id", nullptr));
    label_158->setText(QCoreApplication::translate("LogsDashboardClass", "Action", nullptr));
    label_159->setText(QCoreApplication::translate("LogsDashboardClass", "Date", nullptr));
    label_160->setText(QCoreApplication::translate("LogsDashboardClass", "User Changes", nullptr));
    pushButton_11->setText(QString());
    all_labels_7->setText(QCoreApplication::translate("LogsDashboardClass", "First Name :", nullptr));
    all_labels_8->setText(QCoreApplication::translate("LogsDashboardClass", "Phone Number : 12345678900", nullptr));
    all_labels_25->setText(QCoreApplication::translate("LogsDashboardClass", "Second Name :", nullptr));
    all_labels_9->setText(QCoreApplication::translate("LogsDashboardClass", "User ID :", nullptr));
    all_labels_26->setText(QCoreApplication::translate("LogsDashboardClass", "Password State :", nullptr));
    label_161->setText(QString());
    all_labels_10->setText(QCoreApplication::translate("LogsDashboardClass", "First Name :", nullptr));
    all_labels_11->setText(QCoreApplication::translate("LogsDashboardClass", "Phone Number : 12345678900", nullptr));
    all_labels_27->setText(QCoreApplication::translate("LogsDashboardClass", "Second Name :", nullptr));
    all_labels_12->setText(QCoreApplication::translate("LogsDashboardClass", "User ID :", nullptr));
    all_labels_28->setText(QCoreApplication::translate("LogsDashboardClass", "Password State :", nullptr));
    pushButton_12->setText(QString());
    label_162->setText(QCoreApplication::translate("LogsDashboardClass", "Properties Changes", nullptr));
    label_163->setText(QString());
    label_164->setText(QCoreApplication::translate("LogsDashboardClass", "Location :", nullptr));
    label_165->setText(QCoreApplication::translate("LogsDashboardClass", "Space :", nullptr));
    label_166->setText(QCoreApplication::translate("LogsDashboardClass", "Bedrooms :", nullptr));
    label_167->setText(QCoreApplication::translate("LogsDashboardClass", "Price : ", nullptr));
    label_168->setText(QCoreApplication::translate("LogsDashboardClass", "Type :", nullptr));
    label_169->setText(QCoreApplication::translate("LogsDashboardClass", "Building Number: ", nullptr));
    label_170->setText(QCoreApplication::translate("LogsDashboardClass", "User ID :", nullptr));
    label_171->setText(QCoreApplication::translate("LogsDashboardClass", "User Name :", nullptr));
    label_172->setText(QCoreApplication::translate("LogsDashboardClass", "Property ID : ", nullptr));
    label_173->setText(QCoreApplication::translate("LogsDashboardClass", "Apartmant number :", nullptr));
    textEdit_3->setHtml(QCoreApplication::translate("LogsDashboardClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
        "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
        "p, li { white-space: pre-wrap; }\n"
        "hr { height: 1px; border-width: 0; }\n"
        "li.unchecked::marker { content: \"\\2610\"; }\n"
        "li.checked::marker { content: \"\\2612\"; }\n"
        "</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully ffffffff Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully ffffffff</p"
        "></body></html>", nullptr));
    label_174->setText(QCoreApplication::translate("LogsDashboardClass", "Description :", nullptr));
    label_175->setText(QString());
    label_176->setText(QString());
    label_177->setText(QCoreApplication::translate("LogsDashboardClass", "Location :", nullptr));
    label_178->setText(QCoreApplication::translate("LogsDashboardClass", "Space :", nullptr));
    label_179->setText(QCoreApplication::translate("LogsDashboardClass", "Bedrooms :", nullptr));
    label_180->setText(QCoreApplication::translate("LogsDashboardClass", "Price : ", nullptr));
    label_181->setText(QCoreApplication::translate("LogsDashboardClass", "Type :", nullptr));
    label_182->setText(QCoreApplication::translate("LogsDashboardClass", "Building Number: ", nullptr));
    label_183->setText(QCoreApplication::translate("LogsDashboardClass", "User ID :", nullptr));
    label_184->setText(QCoreApplication::translate("LogsDashboardClass", "User Name :", nullptr));
    label_185->setText(QCoreApplication::translate("LogsDashboardClass", "Property ID : ", nullptr));
    label_186->setText(QCoreApplication::translate("LogsDashboardClass", "Apartmant number :", nullptr));
    textEdit_4->setHtml(QCoreApplication::translate("LogsDashboardClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
        "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
        "p, li { white-space: pre-wrap; }\n"
        "hr { height: 1px; border-width: 0; }\n"
        "li.unchecked::marker { content: \"\\2610\"; }\n"
        "li.checked::marker { content: \"\\2612\"; }\n"
        "</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully ffffffff Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully Life's a journey, not a destination. Embrace the adventure, cherish the moments, and live fully ffffffff</p"
        "></body></html>", nullptr));
    label_187->setText(QCoreApplication::translate("LogsDashboardClass", "Description :", nullptr));
} // retranslateUi

LogsDashboard::~LogsDashboard()
{}
