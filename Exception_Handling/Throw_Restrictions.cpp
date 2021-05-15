#include <iostream>

void test(int x) throw(int, double)
{
    if (x == 0)
        throw 'x';

    else if (x == 1)
        throw x;
    else if (x == -1)
        throw 1.0;
    std::cout << "End of function block\n";
}

int main()
{
    try
    {
        test(0); // This will cause abnormal termination.
        test(1);
        test(-1);
    }
    catch (char c)
    {
        std::cout << "Character exception\n";
    }
    catch (int i)
    {
        std::cout << "integer exception\n";
    }
    catch (double d)
    {
        std::cout << "Double exception\n";
    }

    return 0;
}