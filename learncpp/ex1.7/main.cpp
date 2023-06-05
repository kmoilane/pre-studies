#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen { myConstants::gravity * seconds * seconds / 2};
    double heightNow { initialHeight - distanceFallen };

    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

void calculateAndPrintHeight(double initialHeight)
{
    int time { 0 };
    double height { calculateHeight(initialHeight, time) };

    while (height > 0.0)
    {
        std::cout << "At " << time << " seconds, the ball is at height: "
            << height << '\n';
        ++time;
        height = calculateHeight(initialHeight, time);
    }
    
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight {};
    std::cin >> initialHeight;

    calculateAndPrintHeight(initialHeight);

    return 0;
}
