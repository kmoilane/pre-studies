#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int firstInt;
    int secondInt;
    int sum;
    int difference;

    std::cout << "Enter first integer:\n";
    std::cin >> firstInt;

    std::cout << "Enter second integer:\n";
    std::cin >> secondInt;

    sum = firstInt + secondInt;
    difference = firstInt > secondInt ? firstInt - secondInt : secondInt - firstInt;

    std::cout << "Sum of " << firstInt << " and " << secondInt << " is " << sum << std::endl;
    std::cout << "Difference between " << firstInt << " and " << secondInt << " is " << difference << std::endl;

    vector<string> msg = {"Thank you", " for using ", "my ", "program!\n"};

    for (const string& word : msg)
    {
        cout << word;
    }
    

    return 0;
}