#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter values of a and b \n";
    std::cin >> a;
    std::cin >> b;
    int x = a - b;
    try
    {
        if (x != 0)
        {
            std::cout << "Result" << a / x << '\n';
        }
        else
        {
            throw(x);
        }
    }
    catch (int i)
    {
        std::cout << "Dividing by zero huh" << '\n';
    }
    return 0;
}
