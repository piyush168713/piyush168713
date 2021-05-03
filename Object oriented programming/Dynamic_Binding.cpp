#include<iostream>
using namespace std; // Bad Practice

class Base {
    public:
        void display() {cout<<"Display Base"<<endl;}
        virtual void show() {cout<<"show base"<<endl;}
};

class Derived: public Base {
    public:
        void display() {cout<<"Derived Class"<<endl;}
        void show() {cout<<"Derived class."<<endl;}
};

int main() {
    Base B;
    Derived D;
    Base *ptr = &B;
    // Will acess the member functions of Base class rn.
    ptr->display();
    ptr->show();
    // Changing the address to D.
    ptr = &D;
    ptr->display(); //Still access display() of base class as it is not virtual.
    ptr->show(); // Will access show() of derived class as it is virtual. 
    /*
    If you want to access display() of derived class you would have to type convert the pointer.
    Like this
    */
    ((Derived *)ptr)->display();
    return 0;
}