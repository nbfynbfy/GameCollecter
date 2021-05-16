//
// Created by fuyu on 2021/5/16.
//
#include "QApplication"
#include "CollectorWindow.h"

using namespace game_collector;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    CollectorWindow main_window;
    main_window.show();

    return app.exec();
}