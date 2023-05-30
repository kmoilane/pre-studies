#include "./../includes/main.h"
#include <iostream>
#include <vector>
#include <limits>

/*
**  Prompts the user for the length of integer list to be used in the
**  manual input option. Returns the length as an int.
*/
int getListLen()
{
    int len { };
    while (true)
    {
        std::cout << "Enter the number of integers in the list: ";
        std::cin >> len;
        if(!std::cin)
            clearCin();
        else if (len > 0)
            return len;
        std::cout << "Invalid number, try again!\n";
    }
}

/*
**  Prompts the user for a filename and returns it as a std::string.
**  Used for file input.
*/

std::string getFileName()
{
    std::string fname;
    std::cout << "Enter the filename:\n";
    std::getline(std::cin >> std::ws, fname);
    return fname;
}

/*
**  Prompts user for a list of integers, one by one, for a len amount of time.
**  len is the user given length for the list. Takes the vector as an reference
**  and fills it with the user given numbers.
*/

void getList(std::vector<int>& vect, int len)
{
    int number {};

    std::cout << "Type the list of integers and press enter after each one.\n";
    
    for (int i = 0; i < len; ++i)
    {
        std::cin >> number;
        if(!std::cin)
        {
            clearCin();
            std::cout << "Not an int, try again!\n";
            --i;
        }
        else
            vect.push_back(number);
    }
    vect.shrink_to_fit();
}

/*
**  Asks the user for 1 or 2 (manual or file input). This determines how user
**  provides the list. Returns value to the caller, which handles the input.
*/

int getInputOption()
{
    while (true)
    {
        int option { };
        std::cout << "Select how you want to provide a list of integers:\n";
        std::cout << "1 = Manually\n2 = File\n";
        std::cin >> option;

        if(!std::cin)
            clearCin();

        else if (option == 1 || option == 2)
        {
            ignoreLine();
            return option;
        }

        std::cout << "Invalid input! Try again.\n";
    }
}
