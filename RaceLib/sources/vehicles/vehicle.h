#pragma once
#include <iostream>

namespace race
{
    class Vehicle
    {
    protected:
        std::string name;
    public:
        virtual double time(double distance) const = 0;
    };
}
