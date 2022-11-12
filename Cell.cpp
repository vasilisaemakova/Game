#include "Cell.h"

bool Cell::isOnCell() const {
    return onCell_;
}

void Cell::setOnCell(bool onCell) {
    Cell::onCell_ = onCell;
}

bool Cell::isAvailable() const {
    return available_;
//    && event_->isAvailable(player);
}

void Cell::setAvailable(bool available) {
    available_ = available;
}

Cell::Cell() {
    onCell_ = false;
    available_ = true;
    event_ = nullptr;
    key_ = false;
}

void Cell::setEvent(Event *event)
{
    //event_ = nullptr;
    event_ = event;
}


Event *Cell::getEvent() const
{
    return event_;
}

Cell::~Cell() {
    delete event_;
}


/*
Cell::Cell(){
    //int symbol;
    //if (rand() %1 == 0){
        //symbol = visual[rand() %4];

    switch(symbol){
        case '#': {
        event_ = new (Wall);
        available_ = false;
        break;
    }
    case 'x': {
        event_ = new(Lock);
        available_ = true;
        break;
    }

    case '_': {
        event_ = new (Trap);
        available_ = true;

        break;
    }
    case ' ': {
        event_ = new (Clear_cell);
        available_ = true;
        break;
    }

        }
    }
}
*/