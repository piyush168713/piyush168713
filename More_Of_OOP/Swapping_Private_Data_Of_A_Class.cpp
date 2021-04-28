#include <iostream>
using namespace std;
class item2;
class item
{
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    void DisplayData() {
        cout<<x<<endl;
    }
    friend void SwapData(item &, item2 &);
}obj1;
class item2
{
    int y;

public:
    void SetData(int a)
    {
        y = a;
    }
    void DisplayData() {
        cout<<y<<endl;
    }
    friend void SwapData(item &, item2 &);
}obj2;

void SwapData(item &a, item2 &b)
{
    int temp = b.y;
    b.y = a.x;
    a.x = temp;
}

int main() {
    obj1.setData(10);
    obj2.SetData(15);
    obj1.DisplayData();
    obj2.DisplayData();
    SwapData(obj1, obj2);
    obj1.DisplayData();
    obj2.DisplayData();    
    return 0;
}