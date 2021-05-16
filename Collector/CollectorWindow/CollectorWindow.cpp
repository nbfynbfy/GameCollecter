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
    InitSelectGameWidget();
}

void CollectorWindow::InitBeginWidget() {
    begin_widget_.setParent(this);
    connect(&begin_widget_, &BeginWidget::ClickExitButton, this, &CollectorWindow::ExitWindow);
    connect(&begin_widget_, &BeginWidget::ClickSelectButton, this, &CollectorWindow::SelectGame);
    begin_widget_.show();
}

void CollectorWindow::InitSelectGameWidget() {
    select_game_widget_.setParent(this);
    select_game_widget_.hide();
}

void CollectorWindow::ShowBeginWidget() {
    begin_widget_.show();
}

void CollectorWindow::ExitWindow() {
    this->close();
}

void CollectorWindow::SelectGame() {
    select_game_widget_.show();
}

} // namespace game_collector