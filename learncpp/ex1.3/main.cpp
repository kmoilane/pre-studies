#include <iostream>

char getOperator();

void printResult(int ans)
{
    std::cout << ans << '\n';
}

int calculate(int a, int b, char c)
{
    switch (c)
    {
        case '+':
            return(a + b);
        case '-':
            return(a - b);
        case '*':
            return(a * b);
        case '/':
            return(a / b);
        case '%':
            return(a % b);
        default:
            std::cerr << "Error, invalid operator!\n";
            return calculate(a, b, getOperator());
    }
}

int getInt()
{
    int n { };
    std::cout << "Enter integer: ";
    std::cin >> n;
    return n;
}

char getOperator()
{
    char c { };
    std::cout << "Enter operator +, -, *, / or %: ";
    std::cin >> c;
    return c;
}

int main()
{
    int     a { getInt() };
    int     b { getInt() };
    char    c { getOperator() };

    printResult(calculate(a, b, c));
    
    return 0;
}
