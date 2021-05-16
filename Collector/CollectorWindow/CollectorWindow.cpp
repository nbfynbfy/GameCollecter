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
    connect(&begin_widget_, &BeginWidget::ClickExitButton, this, &CollectorWindow::BeginWidgetExitWindow);
    connect(&begin_widget_, &BeginWidget::ClickSelectButton, this, &CollectorWindow::BeginWidgetToSelectGameWidget);
    begin_widget_.show();
}

void CollectorWindow::InitSelectGameWidget() {
    select_game_widget_.setParent(this);
    connect(&select_game_widget_, &SelectGameWidget::ReturnBeginWidget, this, &CollectorWindow::SelectGameWidgetToBeginWidget);
    select_game_widget_.hide();
}

void CollectorWindow::SelectGameWidgetToBeginWidget() {
    select_game_widget_.hide();
    begin_widget_.show();
}

void CollectorWindow::BeginWidgetExitWindow() {
    this->close();
}

void CollectorWindow::BeginWidgetToSelectGameWidget() {
    begin_widget_.hide();

    select_game_widget_.show();
}

} // namespace game_collector