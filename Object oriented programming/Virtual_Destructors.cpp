#include<iostream>
using namespace std;

class A {
    public:
    /*virtual*/ ~A() {
        cout<<"Base class destructor"<<endl;
    }

};

class B: public A {
    public:
    ~B() {
        cout<<"Derived class destructor"<<endl;
    }
};

int main() {
    A *ptr = new B();
    delete ptr; // destructor of base class will be called, this can result in memory leaks.
                // So to overcome that we declare base class constructor virtual.

    return 0;
}