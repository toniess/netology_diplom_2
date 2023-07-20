#pragma once

#include <airvehicle.h>

namespace race
{

    class Eagle : public AirVehicle
    {
    public:
        Eagle();
        double time(double distance) const override;
    };

}

