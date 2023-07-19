#pragma once
#include "../groundvehicle.h"

namespace race
{
    class Camel : public GroundVehicle
    {
        Camel();
        double time(double distance) const;
    };
}
