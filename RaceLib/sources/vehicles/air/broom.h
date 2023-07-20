#pragma once

#include <airvehicle.h>

namespace race
{

    class Broom : public AirVehicle
    {
    public:
        Broom();
        double time(double distance) const override;
    };

}

