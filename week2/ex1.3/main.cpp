#include <iostream>

int main()
{
    // int types
    std::cout << "short is " << sizeof(short) << " bytes\n";
    std::cout << "int is " << sizeof(int) << " bytes\n";
    std::cout << "long is " << sizeof(long) << " bytes\n";
    std::cout << "long long is " << sizeof(long long) << " bytes\n\n";

    // float types
    std::cout << "float is " << sizeof(float) << " bytes\n";
    std::cout << "double is " << sizeof(double) << " bytes\n";
    std::cout << "long double is " << sizeof(long double) << " bytes\n\n";

    // char types
    std::cout << "char is " << sizeof(char) << " bytes\n";
    std::cout << "wchar_t is " << sizeof(wchar_t) << " bytes\n";
    std::cout << "char8_t is " << sizeof(char8_t) << " bytes\n";
    std::cout << "char16_t is " << sizeof(char16_t) << " bytes\n";
    std::cout << "char32_t is " << sizeof(char32_t) << " bytes\n\n";

    // bool type
    std::cout << "bool is " << sizeof(bool) << " bytes\n";

    return 0;
}
