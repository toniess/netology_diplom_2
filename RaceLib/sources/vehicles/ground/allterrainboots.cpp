#include "allterrainboots.h"
#include "settings.h"
#include <cmath>

namespace race
{

    AllTerrainBoots::AllTerrainBoots()
    {
        name = "Ботинки-вездеходы";
    }

    double AllTerrainBoots::time(double distance) const
    {
        double moveTime = distance / BOOTS_SPEED;
        int restCount = std::ceil(moveTime / BOOTS_MOVE_TO_REST) - 1;
        if(restCount > 0)
        {
            moveTime += BOOTS_FIRST_REST;
            moveTime += --restCount * BOOTS_STANDART_REST;
        }
        return moveTime;
    }

}
