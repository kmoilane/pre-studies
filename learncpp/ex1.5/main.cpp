#include <iostream>

int main()
{
    int i { 5 };

    while (i > 0)
    {
        int j { i };
        while (j > 0)
        {
            std::cout << j << ' ';
            --j;
        }
        std::cout << '\n';
        --i;
    }

    return 0;
}
