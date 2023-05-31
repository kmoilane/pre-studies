#include "./../includes/main.h"
#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void clearCin()
{
    std::cin.clear();
    ignoreLine();
}

/*
**  Takes int vector as a reference and returns the sum of all the values in it
*/

int calcSum(std::vector<int>& vect)
{
    int result { 0} ;

    for (size_t i = 0; i < vect.size(); ++i)
        result += vect[i];

    return result;
}

/*
**  Calculates the average of integer num based on divider, but instead of
**  integer division, does floating point division and returns a double.
*/

double calcAverage(int num, int divider)
{
    return static_cast<double>(num) / divider;
}

int minMaxDiff(int min, int max)
{
    return max - min;
}

int findMin(std::vector<int>& vect)
{
    int min { vect[0] };

    for (size_t i = {0}; i < vect.size(); ++i)
    {
        if (vect[i] < min)
            min = vect[i];
    }

    return min;
}

int findMax(std::vector<int>& vect)
{
    int max { vect[0] };

    for (size_t i = {0}; i < vect.size(); ++i)
    {
        if (vect[i] > max)
            max = vect[i];
    }

    return max;
}

/*
**  Used to find the most frequent value(s) inside an int vector
*/

std::vector<int> findMostFrequent(std::vector<int>& vect)
{
    std::vector<int>    mFVect { }; // Vector for most frequent value(s)
    int                 topCount { 0 };

    for (size_t i = 0; i < vect.size(); ++i)
    {
        int count { 1 };
        for (size_t j = i + 1; j < vect.size(); ++j)
        {
            if (vect[j] == vect[i])
                ++count;
        }
        if (count > topCount)
        {
            mFVect.clear();
            mFVect.push_back(vect[i]);
            topCount = count;
        }
        else if (count == topCount
            && std::find(mFVect.begin(), mFVect.end(), vect[i]) == mFVect.end())
        {
            mFVect.push_back(vect[i]);
        }
    }
    mFVect.shrink_to_fit();
    return mFVect;
}
