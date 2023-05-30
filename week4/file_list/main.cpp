#include "./includes/main.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>

void printResults(std::vector<int>& vect)
{
    std::cout << "Sum is: " << calcSum(vect) << '\n';
    std::cout << "Average is: "
        << calcAverage(calcSum(vect), static_cast<int>(vect.size())) << '\n';
    std::cout << "Min value is: " << findMin(vect) << '\n';
    std::cout << "Max value is: " << findMax(vect) << '\n';
    std::cout << "Most frequent value(s): ";
    std::ranges::copy(findMostFrequent(vect),
        std::ostream_iterator<int>(std::cout, ", "));
    std::cout << "\nDifference between min and max is: "
        << minMaxDiff(findMin(vect), findMax(vect)) << '\n';
}

/*
**  Reads the file if it's able to open it and pushes numeric values to vector
**  as an integers. If unable to open the file, goes to prompt a new filename.
**  Stops reading when other than numeric or white space character is met.
*/

void parseFile(std::string fname)
{
    int num;
    std::vector<int> vect {};
    std::ifstream intFile;
    intFile.open(fname);
    if (intFile.is_open() && !intFile.fail())
    {
        while (intFile >> num)
        {
            vect.push_back(num);   
        }
        intFile.close();
        vect.shrink_to_fit();
        printResults(vect);
    }
    else
    {
        std::cout << "Error opening file \"" << fname
            << "\". Make sure it's in your current directory.\n";
        parseFile(getFileName());
    }
}

void inputMethodController()
{
    if (getInputOption() == 1)
    {
        std::vector<int> vect;
        getList(vect, getListLen());
        printResults(vect);
    }
    else
        parseFile(getFileName());
}

int main(int argc, char* argv[])
{
    if (argc == 1)
        inputMethodController();
    else if (argc == 2)
        parseFile(static_cast<std::string>(argv[1]));
    else
    {
        std::cout << "Too many arguments!\n";
        inputMethodController();
    }

    return 0;
}
