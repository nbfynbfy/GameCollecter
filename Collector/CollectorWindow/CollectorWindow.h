//
// Created by fuyu on 2021/5/16.
//

#include "QMainWindow"
#include "BeginWidget.h"

#ifndef GAMECOLLECTOR_COLLECTORWINDOW_H
#define GAMECOLLECTOR_COLLECTORWINDOW_H

namespace game_collector {

class CollectorWindow : public QMainWindow {
public:
    CollectorWindow() {
        Init();
    }

private slots:
    void OnClickExitButton();

private:
    void Init();
    void InitSize();
    void InitWidget();
    void InitBeginWidget();

    BeginWidget begin_widget_;
};

}; // namespace game_collector


#endif //GAMECOLLECTOR_COLLECTORWINDOW_H
