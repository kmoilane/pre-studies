#include <iostream>

double askHeight()
{
    double height {};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;

    return height;
}

double calcFall(int seconds)
{
    constexpr double gravity {9.8};
    return gravity * (seconds * seconds) / 2;
}

void outputHeight(int second, double height)
{
    if (height > 0)
        std::cout << "At " << second << " seconds, the ball is at height: "
        << height << " meters\n";
    else if (height == 0)
        std::cout << "At " << second << " seconds, the ball is on the ground\n";
}

double calcHeight(double towerHeight, double fall)
{
    double height { towerHeight - fall };
    if (height < 0)
        height = 0;

    return height;
}

int main()
{
    double towerHeight {askHeight()};
    int i { 0 };
    while (i < 6)
    {
        outputHeight(i, calcHeight(towerHeight, calcFall(i)));
        i++;
    }

    return 0;
}
