//
// Created by fuyu on 2021/5/16.
//

#include "SelectGameWidget.h"

namespace game_collector {

void SelectGameWidget::Init() {
    InitSize();
    InitButton();
}

void SelectGameWidget::InitSize() {
    setFixedSize(collector_window_width, collector_window_height);
}

void SelectGameWidget::InitButton() {
    InitReturnButton();
}

void SelectGameWidget::InitReturnButton() {

}

} // namespace game_collector