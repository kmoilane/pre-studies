#ifndef MAIN_H
#define MAIN_H

    /*
    **  Const variables
    */
    const double gas { 1.899 };             // €/liter
    const double diesel { 1.714 };          // €/liter
    const double electricity { 0.0725 };    // €/kWh (7.25c/kwH)

    /*
    **  Function Declarations
    */
    double getDistance();
    double getConsumption();
    double calcTotalConsumption(double distance, double consumption);
    double calcCost(double totalConsumption, double price);

    int getFuelType();

#endif
