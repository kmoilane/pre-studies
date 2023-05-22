#include <iostream>
#include <string_view>


double getValue(std::string_view msg)
{
    double value { };
    std::cout << msg;
    std::cin >> value;

    return value;
}

double calcBmi(double weight, double length)
{
    return weight / (length * length);
}

int main()
{
    using namespace std::literals;

    double length { getValue("Enter your length in meters: "sv) };
    double weight { getValue("Enter your weight: "sv) };
    double bmi { calcBmi(weight, length) };
    double bmiLowerLimit { 19.0 };
    double bmiUpperLimit { 24.9 };

    std::cout << "Your BMI is: " << bmi << '\n';

    if (bmi < bmiLowerLimit)
        std::cout << "It's under the recommendation!\n";
    else if (bmi > bmiUpperLimit)
        std::cout << "It's over the recommendation!\n";
    else
        std::cout << "It's in the normal range!\n";

    return 0;
}
