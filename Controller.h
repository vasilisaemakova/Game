#pragma once

#include "Cell.h"
#include "Player.h"
#include "Field.h"
#include "PlayerView.h"
#include "lab_3/Observable/GameObservable.h"

class Controller {
private:
    Field* field_;
    Player* player_;
    PlayerView* playerView_;
    GameObservable* observable_;
public:
    Controller(Field* field, Player* player, GameObservable* observable);
    bool move(int x, int y);
//    void down();
//    void left();
//    void right();
    void printField();
    bool canMove(int x, int y);

};
