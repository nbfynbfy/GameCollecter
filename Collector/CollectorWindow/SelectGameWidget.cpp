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
    title_label_.setParent(this);
    title_label_.setText("选择游戏");
}

void SelectGameWidget::InitButton() {
    InitReturnButton();
}

void SelectGameWidget::InitReturnButton() {

}

} // namespace game_collector