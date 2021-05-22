//
// Created by fuyu on 2021/5/22.
//

#include "AirplaneGame.h"

namespace game_collector {

void AirplaneGame::StartGame() {
    Init();
    this->show();
}

void AirplaneGame::Init() {
    InitLabel();
}

void AirplaneGame::InitLabel() {
//    game_label_.setParent(this);
//    game_label_.setText("123");
}

} // game_collector
