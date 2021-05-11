#include<iostream>

template<class T1=int, class T2=int> // Nothing, just default value is defined.
class Test {
    T1 a;
    T2 b;
public:
    Test(T1 x, T2 y) {
        a = x;
        b = y;
    }

    void show() {
        std::cout<<a<<" and "<<b<<'\n';
    }
};

int main() {
    
    Test<float, int> obj1(3.54,4);
    obj1.show();
    Test<> obj2(4,'a');
    obj2.show();
    return 0;
}