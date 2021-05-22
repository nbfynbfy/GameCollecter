//
// Created by fuyu on 2021/5/22.
//

#include "SelectGameButton.h"

namespace game_collector {

void SelectGameButton::OnClickSelectGameButton() {
    InitGameWidget();
    if (game_widget_) {
        emit HideParent();
        game_widget_->StartGame();
    }
}

void SelectGameButton::Init() {
    game_widget_ = nullptr;
    connect(this, &QPushButton::clicked, this, &SelectGameButton::OnClickSelectGameButton);
}

void SelectGameButton::InitGameWidget() {
    switch (button_index_) {
        case 1: {
            game_widget_ = new AirplaneGame(parentWidget()->parentWidget());
            break;
        }
        case 2: {
            break;
        }

    }
}

} // namespace game_collector
