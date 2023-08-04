#pragma once
#include <iostream>
#include "vehicle.h"
#include <set>

namespace race
{
    class Results
    {
        struct ResultLine
        {
            std::string name;
            double time;
            bool operator < (const ResultLine& a) const
            {
                return time < a.time;
            }
        };
        std::set<ResultLine> results_;
    public:
        void add(Vehicle* v, double time);
        std::set<ResultLine>::iterator begin() const;
        std::set<ResultLine>::iterator end() const;

    };
}


