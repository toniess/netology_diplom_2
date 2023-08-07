#include "broom.h"
#include "settings.h"

namespace race
{
    Broom::Broom()
    {
        name = "Метла";
    }

    double Broom::time(double distance) const
    {
        int percents = static_cast<int>(distance) / 1000 * BROOM_RID_PERCENT_PER_1000;
        distance *= decreaseRatio(percents);
        return distance / BROOM_SPEED;
    }
}
