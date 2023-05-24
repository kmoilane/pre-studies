/* ************************************************************************** */
/*     _                    _ _                                               */
/*    | |                  (_) |                                              */
/*    | | ___ __ ___   ___  _| | __ _ _ __   ___                              */
/*    | |/ / '_ ` _ \ / _ \| | |/ _` | '_ \ / _ \                             */
/*    |   <| | | | | | (_) | | | (_| | | | |  __/                             */
/*    |_|\_\_| |_| |_|\___/|_|_|\__,_|_| |_|\___|                             */
/*                                                                            */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    constexpr double pi = 3.14159265358979323846;

    double area { };
    double c    { }; // circumference of the circle
    double d    { }; // diameter of the circle
    double r    { }; // radius of the circle
    
    std::cout << "Enter the diameter of the circle: \n";
    std::cin >> d;

    r = d / 2;          // radius is diameter / 2
    area = pi * r * r;  // area is π * r²
    c = pi * d;         // circumference is π * d

    std::cout << "Area of the circle is: " << area
        << "\nCircumference of the circle is: " << c << '\n';

    return 0;
}
