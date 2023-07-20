#pragma once

#include <groundvehicle.h>

namespace race {

    class Centaur : public GroundVehicle
    {
    public:
        Centaur();
        double time(double distance) const override;
    };

}

