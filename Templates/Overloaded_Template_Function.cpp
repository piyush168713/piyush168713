#include<iostream>

using namespace std;

template<class T>
void display(T x) {
    cout<<"Overloaded function 1: "<<x<<endl;
}

template<class T, class T1>
void display(T x, T1 y) {
    cout<<"Overloaded function 2: "<<x<<" "<<y<<endl;
}

void display(int x) {
    cout<<"Normal Function: "<<x<<endl;
}

int main() {
    display(100);
    display(12.34);
    display(100,45.6);
    display('C');
    return 0;
}
// NOTE NO AUTOMATIC TYPE CONVERSIONS TAKE PLACEC OVER HERE.