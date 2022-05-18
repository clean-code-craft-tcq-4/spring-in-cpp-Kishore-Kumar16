#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>& a) {
    //Implement statistics here
    Stats stat;
    
    if(a.empty())
    {
        return stat;
    }
    
    stat.min = *min_element(a.begin(), a.end());
    stat.max = *max_element(a.begin(), a.end());
    
    //Calculate average
    auto const count = static_cast<double>(a.size());
    stat.average = (a.begin(), a.end()) /count;
    
    return stat;
}
