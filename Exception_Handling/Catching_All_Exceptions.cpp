#include <iostream>

void test(int x)
{
    try
    {
        if (x == 0)
        {
            throw x;
        }
        if (x == 1)
        {
            throw 'x';
        }
        if (x == -1)
        {
            throw 1.0;
        }
    }
    catch (...)
    {
        std::cout << "Exception caught\n";
    }
}

int main()
{
    test(-1);
    test(1);
    test(0);
    return 0;
}
