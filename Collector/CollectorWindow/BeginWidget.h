//
// Created by fuyu on 2021/5/16.
//

#include "QWidget"
#include "QLabel"
#include "QPushButton"
#include "GameConstData.h"
#include "iostream"

#ifndef GAMECOLLECTOR_BEGINWIDGET_H
#define GAMECOLLECTOR_BEGINWIDGET_H

namespace game_collector {

class BeginWidget : public QWidget {
    Q_OBJECT
public:
    BeginWidget() {
        Init();
    }

signals:
    void ClickExitButton();
    void ClickSelectButton();

private slots:
    void OnClickExitButton();
    void OnClickSelectButton();

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

} // namespace game_collector


#endif //GAMECOLLECTOR_BEGINWIDGET_H
