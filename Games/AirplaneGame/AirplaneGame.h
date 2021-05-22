//
// Created by fuyu on 2021/5/22.
//

#include "iostream"
#include "QWidget"
#include "QLabel"
#include "GameWidget.h"

#ifndef GAMECOLLECTOR_AIRPLANEGAME_H
#define GAMECOLLECTOR_AIRPLANEGAME_H

namespace game_collector {

class AirplaneGame : public GameWidget {
public:
    AirplaneGame(QWidget* parent = nullptr) : GameWidget(parent) {
        std::cout << "AirplaneGame" << parent << std::endl;
    }
    ~AirplaneGame() {}

    void StartGame();

private:
    void Init();
    void InitLabel();

    QLabel game_label_;
};

} // game_collector


#endif //GAMECOLLECTOR_AIRPLANEGAME_H
