//
// Created by fuyu on 2021/5/16.
//

#include "CollectorWindow.h"

namespace game_collector {

void CollectorWindow::Init() {
    InitSize();
    InitWidget();
}

void CollectorWindow::InitSize() {
    setFixedSize(collector_window_width, collector_window_height);
}

void CollectorWindow::InitWidget() {
    InitBeginWidget();
}

void CollectorWindow::InitBeginWidget() {
    begin_widget_.setParent(this);
    connect(begin_widget_.GetExitButton(), &QPushButton::clicked, this, &CollectorWindow::OnClickExitButton);
}

void CollectorWindow::OnClickExitButton() {
    this->close();
}

} // namespace game_collector