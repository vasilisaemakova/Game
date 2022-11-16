cmake_minimum_required(VERSION 3.20)
project(oop2_v)

set(CMAKE_CXX_STANDARD 14)

add_executable(oop2_v main.cpp GameLogic/Player.cpp GameLogic/Player.h Mediator.cpp Mediator.h Views/FieldView.cpp Views/FieldView.h GameLogic/Field.cpp GameLogic/Field.h Event/Event.h GameLogic/Controller.cpp GameLogic/Controller.h CommandReader.cpp CommandReader.h Views/CellView.cpp Views/CellView.h GameLogic/Cell.cpp GameLogic/Cell.h Event/PlayerEvent/EventPlayer.cpp Event/PlayerEvent/EventPlayer.h Event/PlayerEvent/TrapEvent.cpp Event/PlayerEvent/TrapEvent.h Event/ReturnEvent.h Event/PlayerEvent/MedicalEvent.cpp Event/PlayerEvent/MedicalEvent.h Event/FieldEvent/EventField.h Event/FieldEvent/KeyEvent.cpp Event/FieldEvent/KeyEvent.h Event/FieldEvent/WallLockEvent.cpp Event/FieldEvent/WallLockEvent.h Views/PlayerView.cpp Views/PlayerView.h
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
