#include "main.h"
#include <iostream>
#include <vector>

int calcSum(std::vector<int>& vect)
{
    int result {0};

    for (size_t i = 0; i < vect.size(); ++i)
    {
        result += vect[i];
    }

    return result;
}

double calcAverage(int num, int divider)
{
    return static_cast<double>(num) / divider;
}

int minMaxDiff(int min, int max)
{
    return max - min;
}

int greaterThan(int a, int b)
{
    return (a > b);
}

int smallerThan(int a, int b)
{
    return (a < b);
}
