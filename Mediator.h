#pragma once

#include "GameLogic/Controller.h"
#include "CommandReader.h"
#include "Event/PlayerEvent/MedicalEvent.h"
#include "lab_3/Observable/GameObservable.h"

class Mediator {
private:
    GameObservable observable_;
    Player* player_;
    Field* field_;
    Controller* controller_;
    CommandReader* command_;
    //void createField();
    bool control(std::string str);
    void createObservable();

public:
    Mediator(size_t width, size_t height);
    void start();
};


