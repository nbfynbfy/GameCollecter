//
// Created by fuyu on 2021/5/16.
//

#include "QMainWindow"
#include "QLabel"
#include "QPushButton"
#include "GameConstData.h"
#include "iostream"

#ifndef GAMECOLLECTOR_COLLECTORWINDOW_H
#define GAMECOLLECTOR_COLLECTORWINDOW_H

namespace game_collector {

class CollectorWindow : public QMainWindow {
public:
    CollectorWindow() {
        Init();
    }

private:
    void Init();
    void InitSize();
    void InitTittle();
    void InitLabel();
    void InitTitleLabel();
    void InitButton();
    void InitSelectButton();
    void InitSettingButton();
    void InitExitButton();

    QLabel title_label_;
    QPushButton select_button_;
    QPushButton setting_button_;
    QPushButton exit_button_;
};

}; // namespace game_collector


#endif //GAMECOLLECTOR_COLLECTORWINDOW_H
