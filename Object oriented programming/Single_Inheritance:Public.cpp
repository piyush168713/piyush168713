#include<iostream>
using namespace std;

class B {
    int a; // Private, not inheritable.
    public:
        int b;
        void set_ab();
        int get_a();
        void show_a();

};

class D : public B {
    int c;
    public:
        void mul();
        void display();
};

void B:: set_ab() {
    a = 5; b = 10;
}

int B::get_a() {
    return a;
}

void B:: show_a() {
    cout<<"a = "<<a<<endl;
}

void D:: mul() {
    c = b*get_a(); // b and get_a() both are inherited by D.
}

void D:: display(){
    cout<<"a = "<<get_a()<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}

int main() {
    D d;
    d.set_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 54;
    d.mul();
    d.display();

    return 0;
}