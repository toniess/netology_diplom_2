#include "magiccarpet.h"
#include "settings.h"

namespace race
{
    MagicCarpet::MagicCarpet()
    {
        name = "Ковер-самолет";
    }

    double MagicCarpet::time(double distance) const
    {
        double ridRatio;
        if(distance < 1000)
        {
            ridRatio = decreaseRatio(CARPET_RID_LESS_1000);
        }
        else if (distance < 5000)
        {
            ridRatio = decreaseRatio(CARPET_RID_LESS_5000);
        }
        else if (distance < 10000)
        {
            ridRatio = decreaseRatio(CARPET_RID_LESS_10000);
        }
        else
        {
            ridRatio = decreaseRatio(CARPET_RID_MOREEQ_10000);
        }
        return distance * ridRatio / CARPET_SPEED;
    }
}
