#pragma once

#include <QWidget>
#include "ui_LogsDashboard.h"
#include "System.h"
class LogsDashboard : public QWidget
{
	Q_OBJECT

public:
    QStackedWidget* stackedWidget_2;
    QWidget* page_4;
    QLabel* label_141;
    QLabel* label_142;
    QFrame* line_15;
    QScrollArea* scrollArea_7;
    QWidget* scrollAreaWidgetContents_7;
    QFrame* frame_18;
    QLabel* label_143;
    QLabel* label_144;
    QLabel* label_145;
    QLabel* label_146;
    QPushButton* pushButton_9;
    QLabel* label_147;
    QFrame* frame_19;
    QLabel* label_148;
    QLabel* label_149;
    QLabel* label_150;
    QLabel* label_151;
    QScrollArea* scrollArea_8;
    QWidget* scrollAreaWidgetContents_8;
    QFrame* frame_20;
    QLabel* label_152;
    QLabel* label_153;
    QLabel* label_154;
    QPushButton* pushButton_10;
    QFrame* line_16;
    QLabel* label_155;
    QFrame* frame_21;
    QLabel* label_156;
    QLabel* label_157;
    QLabel* label_158;
    QLabel* label_159;
    QWidget* page_5;
    QLabel* label_160;
    QPushButton* pushButton_11;
    QFrame* line_17;
    QFrame* frame_22;
    QLabel* all_labels_7;
    QLabel* all_labels_8;
    QLabel* all_labels_25;
    QLabel* all_labels_9;
    QLabel* all_labels_26;
    QLabel* label_161;
    QFrame* frame_23;
    QLabel* all_labels_10;
    QLabel* all_labels_11;
    QLabel* all_labels_27;
    QLabel* all_labels_12;
    QLabel* all_labels_28;
    QWidget* page_6;
    QPushButton* pushButton_12;
    QLabel* label_162;
    QFrame* line_18;
    QFrame* frame_24;
    QLabel* label_163;
    QLabel* label_164;
    QLabel* label_165;
    QLabel* label_166;
    QLabel* label_167;
    QLabel* label_168;
    QLabel* label_169;
    QLabel* label_170;
    QLabel* label_171;
    QLabel* label_172;
    QLabel* label_173;
    QTextEdit* textEdit_3;
    QLabel* label_174;
    QLabel* label_175;
    QFrame* frame_25;
    QLabel* label_176;
    QLabel* label_177;
    QLabel* label_178;
    QLabel* label_179;
    QLabel* label_180;
    QLabel* label_181;
    QLabel* label_182;
    QLabel* label_183;
    QLabel* label_184;
    QLabel* label_185;
    QLabel* label_186;
    QTextEdit* textEdit_4;
    QLabel* label_187;
	LogsDashboard(QWidget *parent = nullptr);
    void setupUi(QWidget* LogsDashboardClass, System* system);
    void drawUsers(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea);
    void drawProperties(QWidget* scrollAreaWidgetContents, System* system, QScrollArea* scrollArea);
    void retranslateUi(QWidget* LogsDashboardClass);
	~LogsDashboard();

private:
	//Ui::LogsDashboardClass ui;
};
