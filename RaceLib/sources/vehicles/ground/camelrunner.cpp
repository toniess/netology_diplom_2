#include "camelrunner.h"

#define CAMEL_RUNNER_SPEED 40
#define CAMEL_RUNNER_MOVE_TO_REST 10
#define CAMEL_RUNNER_FIRST_REST 5
#define CAMEL_RUNNER_SECOND_REST 6.5
#define CAMEL_RUNNER_STANDART_REST 8

namespace race{

    CamelRunner::CamelRunner()
    {
        name = "Верблюд-скороход";
    }

    double CamelRunner::time(double distance) const
    {
        double moveTime = distance / CAMEL_RUNNER_SPEED;
        int restCount = moveTime / CAMEL_RUNNER_MOVE_TO_REST;
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
