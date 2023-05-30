#include "main.h"
#include <iostream>

int main()
{
    double distance { };
    std::cout << "Let's calculate your fuel consumption cost for driving a car!"
        << "\nPlease enter the distance in kilometets: ";
    std::cin >> distance;

    double consumption { };
    std::cout << "Please enter the consumption/100km: ";
    std::cin >> consumption;

    int fuelType { };
    std::cout << "Please select the correct fuel type: \n1 = Gas\n2 = Diesel\n";
    std::cin >> fuelType;


    double pricePerKm = consumption * (fuelType == 1 ? gas : diesel) / 100;
    std::cout << "Cost for " << distance << "km is: " << pricePerKm * distance
        << "€\n";
    return 0;
}
