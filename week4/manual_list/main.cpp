#include "main.h"
#include <iostream>
#include <vector>

int getListLen()
{
    int len { };
    while (true)
    {
        std::cout << "Enter the number of integers in the list: ";
        std::cin >> len;
        if (len > 0)
            return len;
    }
}

int getMin(std::vector<int>& vect)
{
    int min { vect[0] };

    for (size_t i = {0}; i < vect.size(); ++i)
    {
        if (smallerThan(vect[i], min))
            min = vect[i];
    }

    return min;
}

int getMax(std::vector<int>& vect)
{
    int max { vect[0] };

    for (size_t i = {0}; i < vect.size(); ++i)
    {
        if (greaterThan(vect[i], max))
            max = vect[i];
    }

    return max;
}

int getMostFrequent(std::vector<int>& vect)
{
    int mostFrequent { vect[0] };
    int topCount { 1 };
    int count { };

    for (size_t i = 0; i < vect.size(); ++i)
    {
        count = 0;
        for (size_t j = i + 1; j < vect.size(); ++j)
        {
            if (vect[j] == vect[i])
            {
                ++count;
            }
        }
        if (count > topCount)
            mostFrequent = vect[i];
    }
    return mostFrequent;
}

void getList(std::vector<int>& vect, int len)
{
    int number {};

    std::cout << "Type the list of integers and press enter after each one.\n";
    
    for (int i = 0; i < len; ++i)
        {
            std::cin >> number;
            vect.push_back(number);
        }
    vect.shrink_to_fit();
}

int main()
{
    int listLength { getListLen() };
    std::vector<int> numbers;
    
    getList(numbers, listLength);

    int totalSum { calcSum(numbers) };
    int min { getMin(numbers) };
    int max { getMax(numbers) };
    std::cout << "Sum is: " << totalSum << '\n';
    std::cout << "Average is: " << calcAverage(totalSum, listLength) << '\n';
    std::cout << "Min value is: " << min << '\n';
    std::cout << "Max value is: " << max << '\n';
    std::cout << "Most frequent value is: " << getMostFrequent(numbers) << '\n'; 
    std::cout << "Difference between min and max is: " << minMaxDiff(min, max)
        << '\n';

    return 0;
}
