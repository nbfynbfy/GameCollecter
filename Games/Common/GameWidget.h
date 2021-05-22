//
// Created by fuyu on 2021/5/22.
//

#include "QWidget"

#ifndef GAMECOLLECTOR_GAMEWIDGET_H
#define GAMECOLLECTOR_GAMEWIDGET_H

namespace game_collector {

class GameWidget : public QWidget {
public:
    GameWidget(QWidget* parent = nullptr) : QWidget(parent) {

    }
    virtual ~GameWidget() {}
    virtual void StartGame() = 0;
};

} // namespace game_collector

#endif //GAMECOLLECTOR_GAMEWIDGET_H
