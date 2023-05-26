#include <iostream>

void print_a_to_z_from_int()
{
    int asciiChar { 97 };

    while (asciiChar <= 122)
    {
        std::cout << static_cast<char>(asciiChar);
        if (asciiChar < 122)
            std::cout << ", ";
        else
            std::cout << '\n';
        ++asciiChar;
    }

    return;
}

void print_a_to_z_ascii()
{
    char c { 'a' };

    while (c <= 'z')
    {
        std::cout << static_cast<int>(c);
        if (c < 122)
            std::cout << ", ";
        else
            std::cout << '\n';
        ++c;
    }

    return;
}

int main()
{
    print_a_to_z_from_int();
    print_a_to_z_ascii();

    return 0;
}
