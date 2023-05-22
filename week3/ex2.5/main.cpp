#include <iostream>

long int getPersonNum()
{
    int num { };

    std::cout << "Enter your Finnish person number (3 letters): ";
    std::cin >> num;

    return num;
}

bool isEven(long int num)
{
    return ((num % 2) == 0);
}

int main()
{
    long int personNum { getPersonNum() };

    if (isEven(personNum))
        std::cout << "You are female\n";
    else
        std::cout << "You are male\n";
        
    return 0;
}
