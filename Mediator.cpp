#include "Mediator.h"
#include "WallLockEvent.h"
#include "TrapEvent.h"
#include "KeyEvent.h"
#include "lab_3/Observer/GameObserver.h"
#include "lab_3/Logger/ConsoleLogger.h"
#include "lab_3/Logger/FileLogger.h"

#include <iostream>

void Mediator::createObservable() {
    auto* state_observer = new GameObserver;

    state_observer->addLevel(ObserverLevel::State);
    state_observer->addLevel(ObserverLevel::Error);
    state_observer->addLevel(ObserverLevel::Info);
    state_observer->addLogger(new ConsoleLogger());
    state_observer->addLogger(new FileLogger("logger.txt"));

    observable_.addObserver(state_observer);
}

Mediator::Mediator(size_t width, size_t height) /*: field_(width, height), controller_(&field_, &player_) */{
    //player_->setPos(2,2);
    createObservable();

    field_ = new Field(width, height);
    player_ = new Player();
    controller_ = new Controller(field_, player_, &observable_);

    field_->updateIsAvailable(false, 0, 1);
    field_->updateIsAvailable(false, 0, 4);
    field_->updateIsAvailable(false, 3, 4);
    field_->updateIsAvailable(false, 4, 2);

    field_->getCell(2,2).setEvent(new MedicalEvent(40));
    field_->getCell(2,3).setEvent(new TrapEvent(60));
    field_->getCell(3,1).setEvent(new TrapEvent(60));

    field_->getCell(4,4).setEvent(new WallLockEvent());
    field_->getCell(4,0).setEvent(new KeyEvent());
//    field_->getCell(1,3).setEvent()
}

void Mediator::start() {
    controller_->printField();
    std::string str = command_->read();
    while(str != "exit" && str != "e") {
        if (control(str))
            break;
        str = command_->read();
    }
}

bool Mediator::control(std::string str) {
    bool flag = false;
    if (str == "up" || str == "w") {
        flag = controller_->move(-1,0);
    } else if (str == "down" || str == "s") {
        flag = controller_->move(1,0);
    } else if (str == "left" || str == "a") {
        flag = controller_->move(0,-1);
    } else if (str == "right" || str == "d") {
        flag = controller_->move(0,1);
    }
    controller_->printField();

    return flag;
}
/*
void Mediator::createField(){
    Field field2 = Field();
    return field2;
}
*/

