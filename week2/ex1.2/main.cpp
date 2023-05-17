#include <iostream>

double askForNumber()
{
    double n {};
    std::cout << "Enter any number: ";
    std::cin >> n;
    
    return n;
}

double sum(double a, double b)
{
    return a + b;
}

/*
** Calculates and returns the difference as an absolute value
*/
double difference(double a, double b)
{
    return a > b ? a - b : b - a;
}

int main()
{
    double a { };
    double b { };
    a = askForNumber();
    b = askForNumber();

    std::cout << "Sum of " << a << " and " << b << " is: " << sum(a, b) << '\n';
    std::cout << "Difference between " << a << " and " << b << " is: "
        << difference(a, b) << '\n';

    return 0;
}
