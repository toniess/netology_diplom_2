#pragma once

#include <airvehicle.h>

namespace race
{

    class MagicCarpet : public AirVehicle
    {
    public:
        MagicCarpet();
        double time(double distance) const override;
    };

}

