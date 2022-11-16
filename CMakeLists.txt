cmake_minimum_required(VERSION 3.20)
project(oop2_v)

set(CMAKE_CXX_STANDARD 14)

add_executable(oop2_v main.cpp Player.cpp Player.h Mediator.cpp Mediator.h FieldView.cpp FieldView.h Field.cpp Field.h Event/Event.h Controller.cpp Controller.h CommandReader.cpp CommandReader.h CellView.cpp CellView.h Cell.cpp Cell.h EventPlayer.cpp EventPlayer.h TrapEvent.cpp TrapEvent.h ReturnEvent.h MedicalEvent.cpp MedicalEvent.h EventField.h KeyEvent.cpp KeyEvent.h WallLockEvent.cpp WallLockEvent.h PlayerView.cpp PlayerView.h
        lab_3/Logger/Logger.h
        lab_3/Logger/ConsoleLogger.h
        lab_3/Logger/ConsoleLogger.cpp
        lab_3/Logger/FileLogger.h
        lab_3/Logger/FileLogger.cpp
        lab_3/Enums/ObserverLevel.h
        lab_3/Observer/Observer.h
        lab_3/Observer/GameObserver.h
        lab_3/Observer/GameObserver.cpp
        lab_3/Observable/Observable.h
        lab_3/Observable/GameObservable.h
        lab_3/Observable/GameObservable.cpp
        )
