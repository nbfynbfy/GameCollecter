//
// Created by fuyu on 2021/5/16.
//

#include "QMainWindow"

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

};

}; // namespace game_collector


#endif //GAMECOLLECTOR_COLLECTORWINDOW_H
