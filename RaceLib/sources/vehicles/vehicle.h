#pragma once
#include <iostream>

namespace race
{
    class Vehicle
    {
    public:
        std::string name;
    public:
        virtual double time(double distance) const
        {
            return 0;
        }

        bool operator<(const Vehicle& a) const
        {
            return name < a.name;
        }
    };

}
