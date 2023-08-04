#pragma once
#include "groundvehicle.h"

namespace race
{
    class Camel : public GroundVehicle
    {
    public:
        Camel();
        double time(double distance) const override;
    };
}
