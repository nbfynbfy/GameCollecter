//
// Created by fuyu on 2021/5/16.
//

#include "QWidget"
#include "QPushButton"
#include "QLabel"
#include "GameConstData.h"

#ifndef GAMECOLLECTOR_SELECTGAMEWIDGET_H
#define GAMECOLLECTOR_SELECTGAMEWIDGET_H

namespace game_collector {

class SelectGameWidget : public QWidget {
    Q_OBJECT
public:
    SelectGameWidget() {
        Init();
    }
    QPushButton* GetReturnButton() {return &return_button_;}

signals:
    void ReturnBeginWidget();

private slots:
    void OnClickPrevPageButton();
    void OnClickNextPageButton();
    void OnClickReturnButton();

private:
    void Init();
    void InitSize();
    void InitLabel();
    void InitTitleLabel();
    void InitButton();
    void InitPageButton();
    void InitPrevPageButton();
    void InitNextPageButton();
    void InitReturnButton();


    QPushButton return_button_;
    QPushButton prev_page_button_;
    QPushButton next_page_button_;
    QLabel title_label_;
};

} // namespace game_collector


#endif //GAMECOLLECTOR_SELECTGAMEWIDGET_H
