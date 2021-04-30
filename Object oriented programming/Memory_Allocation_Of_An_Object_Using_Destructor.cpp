#include <iostream>
using namespace std;

class test
{
    int *a;

public:
    test(int size)
    {
        a = new int[size];
        cout << "Int array of size: " << size << " created.." << endl;
    }
    ~test()
    {
        delete a;
        cout << "Destructor freed up space" << endl;
    }
};

int main()
{
    test obj1(4);
    test obj2(13);
    return 0;
}