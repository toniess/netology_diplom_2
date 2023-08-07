#include "centaur.h"
#include "settings.h"
#include <cmath>

namespace race{

    Centaur::Centaur()
    {
        name = "Кентавр";
    }

    double Centaur::time(double distance) const
    {
        double moveTime = distance / CENTAUR_SPEED;
        int restCount = std::ceil(moveTime / CENTAUR_MOVE_TO_REST) - 1;

        return moveTime + restCount * CENTAUR_REST;
    }
}
