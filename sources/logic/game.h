#pragma once
#include "all_vehicles.h"
#include "results.h"

namespace race
{
    enum class RaceType
    {
        GROUND = 1,
        AIR = 2,
        BOTH = 3
    };
    enum class Registration
    {
        BOOTS = 1,
        CAMEL = 2,
        CAMEL_RUNNER = 3,
        CENTAUR = 4,
        BROOM = 5,
        EAGLE = 6,
        CARPET = 7,
        EXIT = 0
    };

    enum class GameStatus
    {
        CONTINUE = 1,
        EXIT = 2
    };

    class Game
    {
        RaceType raceType;
        double distance;
        std::set<Vehicle*> vehicles;

    public:
        GameStatus play();

    private:
        void greetUser();

        double inputDistance();

        RaceType chooseRaceType();

        void registration();

        Results execRace();

        void showResults(Results results);
        void cleanRegisterList();

        GameStatus wannaPlayMore();
    };
}
