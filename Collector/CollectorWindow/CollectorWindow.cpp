//
// Created by fuyu on 2021/5/16.
//

#include "CollectorWindow.h"

namespace game_collector {

void CollectorWindow::Init() {
    InitSize();
    InitTittle();
    InitLabel();
    InitButton();
}

void CollectorWindow::InitSize() {
    setFixedSize(collector_window_width, collector_window_height);
}

void CollectorWindow::InitTittle() {
    setWindowTitle("小游戏收集器");
}

void CollectorWindow::InitLabel() {
    InitTitleLabel();
}

void CollectorWindow::InitTitleLabel() {
    QFont label_font("Timers", 40, QFont::Bold);
    QString title = "小游戏收集器";
    title_label_.setParent(this);
    title_label_.setText(title);
    title_label_.setFont(label_font);

    QFontMetrics fontMetrics(label_font);
    int width = fontMetrics.width(title), height = fontMetrics.height();
    title_label_.setGeometry((this->width() - width) / 2, collector_window_titlelabel_y, width, height);
//    std::cout << "width = " << width << ", height = " << height << std::endl;
}

void CollectorWindow::InitButton() {
    InitSelectButton();
    InitSettingButton();
    InitExitButton();
}

void CollectorWindow::InitSelectButton() {
    select_button_.setParent(this);
    select_button_.setText("选择游戏");
    select_button_.setFont(QFont( "Timers", 18 , QFont::Bold));
    select_button_.setGeometry((this->width() - collector_window_selectbutton_width) / 2,
                               collector_window_titlelabel_y + title_label_.height() + collector_window_button_interval,
                               collector_window_selectbutton_width, collector_window_selectbutton_height);
//    std::cout << "width = " << select_button_.width() << ", height = " << select_button_.heigh() << std::endl;
}

void CollectorWindow::InitSettingButton() {
    setting_button_.setParent(this);
    setting_button_.setText("设置");
    setting_button_.setFont(QFont( "Timers", 18 , QFont::Bold));
    setting_button_.setGeometry((this->width() - collector_window_settingbutton_width) / 2,
                                select_button_.y() + select_button_.height() + collector_window_button_interval,
                                collector_window_settingbutton_width, collector_window_settingbutton_height);
}

void CollectorWindow::InitExitButton() {
    exit_button_.setParent(this);
    exit_button_.setText("退出");
    exit_button_.setFont(QFont( "Timers", 18 , QFont::Bold));
    exit_button_.setGeometry((this->width() - collector_window_exitbutton_width) / 2,
                             setting_button_.y() + setting_button_.height() + collector_window_button_interval,
                             collector_window_exitbutton_width, collector_window_exitbutton_height);
}

} // namespace game_collector