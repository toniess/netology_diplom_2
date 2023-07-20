#include "centaur.h"
#include "settings.h"

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
