//
// Created by fuyu on 2021/5/16.
//

#include "QWidget"
#include "GameConstData.h"
#include "QPushButton"
#include "QLabel"

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
    void InitLabel();
    void InitTitleLabel();
    void InitButton();
    void InitReturnButton();


    QPushButton return_button_;
    QLabel title_label_;
};

} // namespace game_collector


#endif //GAMECOLLECTOR_SELECTGAMEWIDGET_H
