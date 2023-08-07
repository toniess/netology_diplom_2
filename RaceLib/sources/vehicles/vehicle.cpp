#include <iostream>
#include "vehicle.h"

namespace race
{

double Vehicle::time(double distance) const
{
    return 0;
}

bool Vehicle::operator<(const Vehicle &a) const
{
    return name < a.name;
}

std::string Vehicle::getName() const
{
    return name;
}

}
