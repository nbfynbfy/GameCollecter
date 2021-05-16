//
// Created by fuyu on 2021/5/16.
//

#include "QWidget"
#include "GameConstData.h"
#include "QPushButton"

#ifndef GAMECOLLECTOR_SELECTGAMEWIDGET_H
#define GAMECOLLECTOR_SELECTGAMEWIDGET_H

namespace game_collector {

class SelectGameWidget : public QWidget {
public:
    SelectGameWidget() {
        Init();
    }
    QPushButton* GetReturnButton() {return &return_button_;}

private:
    void Init();
    void InitSize();
    void InitButton();
    void InitReturnButton();

    QPushButton return_button_;
};

} // namespace game_collector


#endif //GAMECOLLECTOR_SELECTGAMEWIDGET_H
