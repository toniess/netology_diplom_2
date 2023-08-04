#include "results.h"

namespace race
{
    void Results::add(Vehicle *v, double time)
    {
        results_.insert({v->name, time});
    }

    std::set<Results::ResultLine>::iterator Results::begin() const
    {
        return results_.begin();
    }

    std::set<Results::ResultLine>::iterator Results::end() const
    {
        return results_.end();
    }

}
