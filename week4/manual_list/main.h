#ifndef MAIN_H
#define MAIN_H

#include <vector>

/*
**  Function Declarations
*/
    int calcSum(std::vector<int>& vect);
    int calcAverage(int num, int divider);
    int minMaxDiff(int min, int max);
    int greaterThan(int a, int b);
    int smallerThan(int a, int b);
    int getListLen();
    int getMin(std::vector<int>& vect);
    int getMax(std::vector<int>& vect);
    int getMostFrequent(std::vector<int>& vect);

    void getList(std::vector<int>& vect, int len);

#endif
