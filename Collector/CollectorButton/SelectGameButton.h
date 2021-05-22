//
// Created by fuyu on 2021/5/22.
//

#include "QPushButton"
#include "GameWidget.h"
#include "AirplaneGame.h"

#ifndef GAMECOLLECTOR_SELECTGAMEBUTTON_H
#define GAMECOLLECTOR_SELECTGAMEBUTTON_H

namespace game_collector {

class SelectGameButton : public QPushButton {
    Q_OBJECT
public:
    SelectGameButton(int button_index, QWidget* parent = nullptr) : button_index_(button_index), QPushButton(parent) {
        Init();
    }
    ~SelectGameButton() {}

signals:
    void HideParent();

private slots:
    void OnClickSelectGameButton();

private:
    void Init();
    void InitGameWidget();

    GameWidget* game_widget_;
    int button_index_;
};

} // game_collector


#endif //GAMECOLLECTOR_SELECTGAMEBUTTON_H
