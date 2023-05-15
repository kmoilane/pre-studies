#include <iostream>

int sum(double a, double b)
{
    std::cout << "Sum of " << a << " and " << b << " is; " << a + b << '\n';

    return 0;
}

/*
** Calculates the difference as an absolute value
*/
int difference(double a, double b)
{
    double diff { };

    diff = a > b ? a - b : b - a;
    std::cout << "Difference between " << a << " and " << b << " is: " << diff
        << '\n';

    return 0;
}

int main()
{
    double a { };
    double b { };

    std::cout << "Enter the first number (any number):\n";
    std::cin >> a;

    std::cout << "Enter the second number (any number):\n";
    std::cin >> b;

    sum(a, b);
    difference(a, b);

    return 0;
}
