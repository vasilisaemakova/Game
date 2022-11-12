#pragma once
#include "Player.h"

class PlayerView {
private:
    Player* player;
public:
    PlayerView(Player *player);
    void printPlayer();
};
