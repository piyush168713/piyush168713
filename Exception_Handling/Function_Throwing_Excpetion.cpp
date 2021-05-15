#include <iostream>

float divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        throw(b);
    }
}

int main()
{
    try
    {
        float f = divide(5, 0);
    }
    catch (int i)
    {
        std::cout << "Divide by zero\n";
    }

    return 0;
}