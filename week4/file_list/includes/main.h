#ifndef MAIN_H
#define MAIN_H

#include <vector>
#include <iostream>
#include <string>

/*
**  Function Declarations
*/
    int                 calcSum(std::vector<int>& vect);
    int                 minMaxDiff(int min, int max);
    int                 getListLen();
    int                 findMin(std::vector<int>& vect);
    int                 findMax(std::vector<int>& vect);
    int                 getInputOption();

    void                getList(std::vector<int>& vect, int len);
    void                inputMethodController();
    void                parseFile(std::string fname);
    void                ignoreLine();
    void                printResults(std::vector<int>& vect);
    void                clearCin();
    
    double              calcAverage(int num, int divider);

    std::vector<int>    findMostFrequent(std::vector<int>& vect);

    std::string         getFileName();

#endif
