#include <vector>
#include <iostream>
#include <cmath>
#include <math.h>
#include <bits/stdc++.h>
#include <numeric>

using namespace std;

struct Stats{
    double average, min, max;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<double>& );
}
