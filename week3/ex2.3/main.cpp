#include <iostream>

double getYearlyPrice()
{
    double price { };
    std::cout << "Enter the price of the yearly membership card: ";
    std::cin >> price;

    return price;
}

double getVisitPrice()
{
    double price { };
    std::cout << "Enter the price of a single visit: ";
    std::cin >> price;

    return price;
}

int getVisitAmount()
{
    int visits { };
    std::cout << "How many times do you go to the gym in a year?\n";
    std::cin >> visits;

    return visits;
}

double calcAnnualVisitsPrice(int visits, double price)
{
    return visits * price;
}

int main()
{
    double  cardPrice   = getYearlyPrice();
    double  visitPrice  = getVisitPrice();
    int     annualVisits = getVisitAmount();
    double  annualVisitsPrice = calcAnnualVisitsPrice(annualVisits, visitPrice);

    if (annualVisitsPrice > cardPrice)
        std::cout << "You should buy the membership card!\n";
    else
        std::cout << "You should buy single tickets!\n";

    return 0;
}
