#pragma once

#include <groundvehicle.h>

namespace race {

    class AllTerrainBoots : public GroundVehicle
    {
    public:
        AllTerrainBoots();
        double time(double distance) const override;
    };

}

