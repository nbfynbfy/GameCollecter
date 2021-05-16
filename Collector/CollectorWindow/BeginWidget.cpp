//
// Created by fuyu on 2021/5/16.
//

#include "BeginWidget.h"

namespace game_collector {

void BeginWidget::Init() {
    InitSize();
    InitTittle();
    InitLabel();
    InitButton();
}

void BeginWidget::InitSize() {
    setFixedSize(collector_window_width, collector_window_height);
}

void BeginWidget::InitTittle() {
    setWindowTitle("小游戏收集器");
}

void BeginWidget::InitLabel() {
    InitTitleLabel();
}

void BeginWidget::InitTitleLabel() {
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

void BeginWidget::InitButton() {
    InitSelectButton();
    InitSettingButton();
    InitExitButton();
}

void BeginWidget::InitSelectButton() {
    select_button_.setParent(this);
    select_button_.setText("选择游戏");
    select_button_.setFont(QFont( "Timers", 18 , QFont::Bold));
    select_button_.setGeometry((this->width() - collector_window_selectbutton_width) / 2,
                               collector_window_titlelabel_y + title_label_.height() + collector_window_button_interval,
                               collector_window_selectbutton_width, collector_window_selectbutton_height);
//    std::cout << "width = " << select_button_.width() << ", height = " << select_button_.heigh() << std::endl;
}

void BeginWidget::InitSettingButton() {
    setting_button_.setParent(this);
    setting_button_.setText("设置");
    setting_button_.setFont(QFont( "Timers", 18 , QFont::Bold));
    setting_button_.setGeometry((this->width() - collector_window_settingbutton_width) / 2,
                                select_button_.y() + select_button_.height() + collector_window_button_interval,
                                collector_window_settingbutton_width, collector_window_settingbutton_height);
    connect(&select_button_, &QPushButton::clicked, this, &game_collector::BeginWidget::OnClickSelectButton);
}

void BeginWidget::InitExitButton() {
    exit_button_.setParent(this);
    exit_button_.setText("退出");
    exit_button_.setFont(QFont( "Timers", 18 , QFont::Bold));
    exit_button_.setGeometry((this->width() - collector_window_exitbutton_width) / 2,
                             setting_button_.y() + setting_button_.height() + collector_window_button_interval,
                             collector_window_exitbutton_width, collector_window_exitbutton_height);
    connect(&exit_button_, &QPushButton::clicked, this, &BeginWidget::OnClickExitButton);
}

void BeginWidget::OnClickExitButton() {
    emit ClickExitButton();
}

void BeginWidget::OnClickSelectButton() {
    emit ClickSelectButton();
    this->hide();
}
    
} // namespace game_collector