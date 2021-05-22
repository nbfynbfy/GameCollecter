//
// Created by fuyu on 2021/5/16.
//

#include "SelectGameWidget.h"

namespace game_collector {

void SelectGameWidget::UpdateButton() {
    UpdateGamesButton();
    UpdatePagesButton();
}

void SelectGameWidget::UpdateGamesButton() {
    for (int i = 0; i < vec_games_button_.size(); i++) {
        int index = vec_games_button_.size() * (cur_page_ - 1) + i;
        vec_games_button_[i]->setText(games_name[index].c_str());
    }
}

void SelectGameWidget::UpdatePagesButton() {
    prev_page_button_.setEnabled(cur_page_ != min_page_);
    next_page_button_.setEnabled(cur_page_ != max_page_);
}

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
    InitGamesButton();
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

void SelectGameWidget::InitGamesButton() {
    for (int y = return_button_.y() + return_button_.height() + selectgame_widget_gamebutton_interval;
         y + selectgame_widget_gamebutton_height < this->height() - selectgame_widget_gamebutton_interval;
         y += selectgame_widget_gamebutton_height + selectgame_widget_gamebutton_interval) {
        for (int x = prev_page_button_.x() + prev_page_button_.width() + selectgame_widget_gamebutton_interval;
             x + selectgame_widget_gamebutton_width < next_page_button_.x() - selectgame_widget_gamebutton_interval;
             x += selectgame_widget_gamebutton_width + selectgame_widget_gamebutton_interval) {
            auto* game_button = new SelectGameButton(vec_games_button_.size() + 1,this);
            vec_games_button_.push_back(game_button);
            QFont game_button_font("Timers", 40, QFont::Bold);
            game_button->setFont(game_button_font);
            game_button->setGeometry(x, y, selectgame_widget_gamebutton_width, selectgame_widget_gamebutton_height);
            connect(game_button, &SelectGameButton::HideParent, this, &SelectGameWidget::HideSelf);
//            std::cout << "x = " << x << ",y = " << y << std::endl;
        }
    }

    InitPageNum();
}

void SelectGameWidget::InitPageNum() {
    min_page_ = 1;
    max_page_ = (all_games_number + vec_games_button_.size() - 1) / vec_games_button_.size();
    cur_page_ = 1;
}

void SelectGameWidget::Delete() {
    DeleteButton();
}

void SelectGameWidget::DeleteButton() {
    for (int i = 0; i < vec_games_button_.size(); i++) {
        delete vec_games_button_[i];
    }
}

void SelectGameWidget::AddPage(int page_num) {
    cur_page_ += page_num;
    cur_page_ = std::max(std::min(cur_page_, max_page_), min_page_);
}

void SelectGameWidget::OnClickPrevPageButton() {
    AddPage(-1);
    UpdateButton();
}

void SelectGameWidget::OnClickNextPageButton() {
    AddPage(1);
    UpdateButton();
}

void SelectGameWidget::OnClickReturnButton() {
    this->hide();
    emit ReturnBeginWidget();
}

void SelectGameWidget::HideSelf() {
    this->hide();
}

} // namespace game_collector