#include "camel.h"
#include "settings.h"


namespace race
{

    Camel::Camel(){
        name = "Верблюд";
    }

    double Camel::time(double distance) const
    {
        double moveTime = distance / CAMEL_SPEED;
        int restCount = moveTime / CAMEL_MOVE_TO_REST;
        if(restCount > 0)
        {
            moveTime += CAMEL_FIRST_REST;
            moveTime += --restCount * CAMEL_STANDART_REST;
        }
        return moveTime;
    }
}
