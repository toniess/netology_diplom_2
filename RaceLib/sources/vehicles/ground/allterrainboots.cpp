#include "allterrainboots.h"
#include "settings.h"

namespace race
{

    AllTerrainBoots::AllTerrainBoots()
    {
        name = "Ботинки-вездеходы";
    }

    double AllTerrainBoots::time(double distance) const
    {
        double moveTime = distance / BOOTS_SPEED;
        int restCount = moveTime / BOOTS_MOVE_TO_REST;
        if(restCount > 0)
        {
            moveTime += BOOTS_FIRST_REST;
            moveTime += --restCount * BOOTS_STANDART_REST;
        }
        return moveTime;
    }

}
