#pragma once

#include <groundvehicle.h>

namespace race {

    class CamelRunner : public GroundVehicle
    {
    public:
        CamelRunner();
        double time(double distance) const;
    };

}
