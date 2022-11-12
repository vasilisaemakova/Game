#include "MedicalEvent.h"

ReturnEvent MedicalEvent::make(Player *player) {
    int a = player->getHealth();
    a+=value;
    player->setHealth(a);
    return clean;
}

MedicalEvent::MedicalEvent(int value) : EventPlayer(value) {}
