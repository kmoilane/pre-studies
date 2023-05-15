#include <iostream>

int main()
{
    const double pi = 3.14159265358979323846;

    double area { };
    double c    { }; // circumference of the circle
    double d    { }; // diameter of the circle
    double r    { }; // radius of the circle
    
    std::cout << "Enter the diameter of the circle: \n";
    std::cin >> d;

    r = d / 2;

    area = pi * r * r;
    c = pi * d;

    std::cout << "Area of the circle is: " << area
        << "\nCircumference of the circle is: " << c << '\n';

    return 0;
}
