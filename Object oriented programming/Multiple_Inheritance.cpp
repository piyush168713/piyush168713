#include <iostream>
using namespace std;

class M
{
protected:
    int a;

public:
    void set_a(int x)
    {
        a = x;
    }
    int get_a()
    {
        return a;
    }
};

class N
{
protected:
    int a1;

public:
    void set_a1(int x) { a1 = x; }
    int get_a1() { return a1; }
};

class MN : public M, public N
{
    int total;

public:
    int find_total()
    {
        total = a + a1;
        return total;
    }
    void display()
    {
        cout << "The total is: " << total << "\n";
    }
};

int main()
{
    MN obj1;
    obj1.set_a(45);
    obj1.set_a1(47);
    obj1.find_total();
    obj1.display();

    return 0;
}