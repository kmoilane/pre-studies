#include <iostream>

int main()
{
    int limit { 8 };    // First two will be printed before the loop
    int prev { 0 };     // We start from 0
    int next { 1 };     // Second number is 1
    int temp { 0 };     // Temp is needed for swapping the values

    std::cout << prev << ", " << next;
    for (int i { 0 }; i < limit; ++i)
    {
        std::cout << ", " << prev + next;
        temp = prev;
        prev = next;
        next = temp + prev;
    }

    std::cout << '\n';

    return 0;
}
