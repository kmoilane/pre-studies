#include <iostream>

double askDouble()
{
    double num {};
    std::cout << "Enter a double value: ";
    std::cin >> num;

    return num;
}

char askSymbol()
{
    char symbol {};
    std::cout << "Enter one of the following: +, -, * or /: ";
    std::cin >> symbol;

    return symbol;
}

int main()
{
    double a {askDouble()};
    double b {askDouble()};
    char symbol {askSymbol()};

    if (symbol == '+')
        std::cout << a << " + " << b << " is " << a + b << '\n';
    else if (symbol == '-')
        std::cout << a << " - " << b << " is " << a - b << '\n';
    else if (symbol == '*')
        std::cout << a << " * " << b << " is " << a * b << '\n';
    else if (symbol == '/')
        std::cout << a << " / " << b << " is " << a / b << '\n';

    return 0;
    
}
