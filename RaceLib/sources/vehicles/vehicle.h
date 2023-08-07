#pragma once
#include <iostream>

namespace race
{
    class Vehicle
    {
    protected:
        std::string name;
    public:
        virtual double time(double distance) const;

        bool operator<(const Vehicle& a) const;
        std::string getName() const;
    };

}
