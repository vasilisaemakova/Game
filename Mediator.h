#pragma once
#include "Controller.h"
#include "CommandReader.h"
#include "MedicalEvent.h"

class Mediator {
private:
    Player* player_;
    Field* field_;
    Controller* controller_;
    CommandReader* command_;
    //void createField();
    bool control(std::string str);

public:
    Mediator(size_t width, size_t height);
    void start();
};


