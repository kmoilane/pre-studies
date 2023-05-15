#include <iostream>

using namespace std;

int sum(int a, int b)
{
    std::cout << "Sum of " << a << " and " << b << " is " << a + b << '\n';
    
    return 0;
}

/*
** Calculates the difference as an absolute value
*/
int difference(int a, int b)
{
    int diff {};

    diff = a > b ? a - b : b - a;
    std::cout << "Difference between " << a << " and " << b << " is " << diff
        << '\n';
    
    return 0;
}

int main()
{
    int a {};
    int b {};

    std::cout << "Enter the first integer:\n";
    std::cin >> a;

    std::cout << "Enter the second integer:\n";
    std::cin >> b;

    sum(a, b);
    difference(a, b);

    return 0;
}
