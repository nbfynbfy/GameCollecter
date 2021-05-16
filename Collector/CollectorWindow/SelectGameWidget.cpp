//
// Created by fuyu on 2021/5/16.
//

#include "SelectGameWidget.h"

namespace game_collector {

void SelectGameWidget::Init() {
    InitSize();
    InitLabel();
    InitButton();
}

void SelectGameWidget::InitSize() {
    setFixedSize(collector_window_width, collector_window_height);
}

void SelectGameWidget::InitLabel() {
    InitTitleLabel();
}

void SelectGameWidget::InitTitleLabel() {
//    title_label_.setParent(this);
//    title_label_.setText("选择游戏");
}

void SelectGameWidget::InitButton() {
    InitPageButton();
    InitReturnButton();
}

void SelectGameWidget::InitPageButton() {
    InitPrevPageButton();
    InitNextPageButton();
}

void SelectGameWidget::InitPrevPageButton() {
    prev_page_button_.setParent(this);
    prev_page_button_.setText("<");
    prev_page_button_.setGeometry(selectgame_widget_pagebutton_interval,
                                  (this->height() - selectgame_widget_pagebutton_height) / 2,
                                  selectgame_widget_pagebutton_width, selectgame_widget_pagebutton_height);
    connect(&prev_page_button_, &QPushButton::clicked, this, &SelectGameWidget::OnClickPrevPageButton);
}

void SelectGameWidget::InitNextPageButton() {
    next_page_button_.setParent(this);
    next_page_button_.setText(">");
    next_page_button_.setGeometry(this->width() - selectgame_widget_pagebutton_interval - selectgame_widget_pagebutton_width,
                                  (this->height() - selectgame_widget_pagebutton_height) / 2,
                                  selectgame_widget_pagebutton_width, selectgame_widget_pagebutton_height);
    connect(&next_page_button_, &QPushButton::clicked, this, &SelectGameWidget::OnClickNextPageButton);
}

void SelectGameWidget::InitReturnButton() {
    return_button_.setParent(this);
    return_button_.setText("返回");
    return_button_.setGeometry(selectgame_widget_returnbutton_x, selectgame_widget_returnbutton_y,
                               selectgame_widget_returnbutton_width, selectgame_widget_returnbutton_height);
    connect(&return_button_, &QPushButton::clicked, this, &SelectGameWidget::OnClickReturnButton);
}

void SelectGameWidget::OnClickPrevPageButton() {

}

void SelectGameWidget::OnClickNextPageButton() {

}

void SelectGameWidget::OnClickReturnButton() {
    this->hide();
    emit ReturnBeginWidget();
}

} // namespace game_collector