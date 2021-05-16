//
// Created by fuyu on 2021/5/16.
//

#include "QMainWindow"
#include "BeginWidget.h"
#include "SelectGameWidget.h"

#ifndef GAMECOLLECTOR_COLLECTORWINDOW_H
#define GAMECOLLECTOR_COLLECTORWINDOW_H

namespace game_collector {

class CollectorWindow : public QMainWindow {
    Q_OBJECT
public:
    CollectorWindow() {
        Init();
    }

private slots:
    void BeginWidgetExitWindow();
    void BeginWidgetToSelectGameWidget();
    void SelectGameWidgetToBeginWidget();

private:
    void Init();
    void InitSize();
    void InitWidget();
    void InitBeginWidget();
    void InitSelectGameWidget();

    BeginWidget begin_widget_;
    SelectGameWidget select_game_widget_;
};

}; // namespace game_collector


#endif //GAMECOLLECTOR_COLLECTORWINDOW_H
