#include "camelrunner.h"
#include "settings.h"
#include <cmath>

namespace race{

    CamelRunner::CamelRunner()
    {
        name = "Верблюд-скороход";
    }

    double CamelRunner::time(double distance) const
    {
        double moveTime = distance / CAMEL_RUNNER_SPEED;
        int restCount = std::ceil(moveTime / CAMEL_RUNNER_MOVE_TO_REST) - 1;
        if(restCount > 0)
        {
            moveTime += CAMEL_RUNNER_FIRST_REST;
        }
        if(--restCount > 0)
        {
            moveTime += CAMEL_RUNNER_SECOND_REST;
            moveTime += --restCount * CAMEL_RUNNER_STANDART_REST;
        }
        return moveTime;
    }
}
