#include<iostream>

template<class T> // Multiple parameters can also be there.
void swap(T&x, T&y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 4;
    int b = 3;
    std::cout<<"a is: "<<a<<", b is: "<<b<<'\n';
    swap(a, b); // You can write like this or swap<int>(a,b); This case is not with classes, there you have to specify.
    std::cout<<"a is: "<<a<<", b is: "<<b<<'\n';
    return 0;
}