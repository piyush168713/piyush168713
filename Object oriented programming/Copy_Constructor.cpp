#include <iostream>
using namespace std;
class code
{
    int x;

public:
    code() {
        cout<<"Default const"<<endl;
    }
    code(int a) { x = a; 
        cout<<"Parameterized const"<<endl;
    }
    code(code &a)
    {
        x = a.x;
        cout << "Copy const called"<<endl;
    }   
};

int main() {
    code A(50); // parameterized const.
    code B(A); // copy const.
    code C = A; // copy const. (Explicit way)
    code D; // defalut const.
    D = A; // no copy const called as object was not initialized, it was created.
    return 0;
}