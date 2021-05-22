//
// Created by fuyu on 2021/5/16.
//

#include "QWidget"
#include "QLabel"
#include "GameConstData.h"
#include "vector"
#include "iostream"
#include "algorithm"

#include "SelectGameButton.h"

#ifndef GAMECOLLECTOR_SELECTGAMEWIDGET_H
#define GAMECOLLECTOR_SELECTGAMEWIDGET_H

namespace game_collector {

class SelectGameWidget : public QWidget {
    Q_OBJECT
public:
    SelectGameWidget() {
        Init();
    }
    ~SelectGameWidget() {
        Delete();
    }

    void UpdateButton();
    void UpdateGamesButton();
    void UpdatePagesButton();

signals:
    void ReturnBeginWidget();

private slots:
    void OnClickPrevPageButton();
    void OnClickNextPageButton();
    void OnClickReturnButton();
    void HideSelf();

private:
    void Init();
    void InitSize();
    void InitLabel();
    void InitTitleLabel();
    void InitButton();
    void InitGamesButton();
    void InitPageButton();
    void InitPrevPageButton();
    void InitNextPageButton();
    void InitReturnButton();
    void InitPageNum();

    void Delete();
    void DeleteButton();

    void AddPage(int page_num);

    int max_page_;
    int min_page_;
    int cur_page_;
    QPushButton return_button_;
    QPushButton prev_page_button_;
    QPushButton next_page_button_;
    std::vector<SelectGameButton*> vec_games_button_;
    QLabel title_label_;
};

} // namespace game_collector


#endif //GAMECOLLECTOR_SELECTGAMEWIDGET_H
