#include "centaur.h"

#define CENTAUR_SPEED 15
#define CENTAUR_MOVE_TO_REST 8
#define CENTAUR_REST 2

namespace race{

    Centaur::Centaur()
    {
        name = "Кентавр";
    }

    double Centaur::time(double distance) const
    {
        double moveTime = distance / CENTAUR_SPEED;
        int restCount = moveTime / CENTAUR_MOVE_TO_REST;

        return moveTime + restCount * CENTAUR_REST;
    }
}
