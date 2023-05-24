#include "main.h"
#include <iostream>

double getDistance()
{
    double distance { };
    std::cout << "Let's calculate your fuel consumption cost for driving a car!"
        << "\nPlease enter the distance in kilometets: ";
    std::cin >> distance;

    return distance;
}

double getConsumption()
{
    double consumption { };
    std::cout << "Please enter the consumption/100km: ";
    std::cin >> consumption;

    return consumption;
}

int getFuelType()
{
    int fuelType { };
    std::cout << "Please enter the correct fuel type: "
        << "\n1 = Gas\n2 = Diesel\n3 = Electric\n";
    std::cin >> fuelType;

    if (fuelType == 1 || fuelType == 2 || fuelType == 3)
        return fuelType;
    if (std::cin.fail())
        std::cin.clear();
    return getFuelType();
}

double calcTotalConsumption(double distance, double consumption)
{
    return distance * consumption / 100; // consumption is per 100km
}

double calcCost(double totalConsumption, double price)
{
    return totalConsumption * price; // price is for liter or kWh
}

int main()
{
    double distance { getDistance() };
    double consumption { getConsumption() };
    int fuelType { getFuelType() };
    double totalConsumption { calcTotalConsumption(distance, consumption) };
    double cost { };

    switch (fuelType)
    {
        case 1:
            cost = calcCost(totalConsumption, gas);
            break;
        case 2:
            cost = calcCost(totalConsumption, diesel);
            break;
        case 3:
            cost = calcCost(totalConsumption, electricity);
            break;
        default:
            break;
    }

    std::cout << "Cost for " << distance << "km is: " << cost << "€\n";
    
    return 0;
}
