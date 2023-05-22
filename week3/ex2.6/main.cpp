#include <iostream>

int main()
{
    int salary  { 1 };
    int total   { salary };
    int goal    { 10'000'000 };
    int days { 1 };

    while (total < goal)
    {
        salary *= 2;    // salary doubles every day
        total += salary;    
        ++days;
    }

    std::cout << "You reached " << total << " euros in " << days << " days!\n";
    return 0;
}
