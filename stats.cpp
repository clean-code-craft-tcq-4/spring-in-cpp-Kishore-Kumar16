#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>& a) {
    //Implement statistics here
    Stats stat;
    double sum = 0;
    
    if(a.empty())
    {
        return stat;
    }
    
    stat.min = *min_element(a.begin(), a.end());
    stat.max = *max_element(a.begin(), a.end());
    
    //Calculate average
    for(double num:a)
    {
        sum = sum + num;
    }
    stat.average = sum / a.size();
    
    return stat;
}
