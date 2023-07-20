#include "eagle.h"
#include "settings.h"


namespace race
{
    Eagle::Eagle()
    {
        name = "Орел";
    }

    double Eagle::time(double distance) const
    {
        distance *= decreaseRatio(EAGLE_RID);
        return distance / EAGLE_SPEED;
    }
}
