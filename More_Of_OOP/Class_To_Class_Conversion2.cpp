#include<iostream>

class two;

class one {
    int a1;
    public:
    one() {}
    one(int x) {a1=x;}
    operator two();
    void printData() {
        printf("\nValue is(one):%d\n", a1);
    }
};

class two {
    int a2;
    public:
    two() {}
    two(int x){a2=x;}
    void printData() {
        printf("\nValue is(two):%d\n", a2);
    }
};

one:: operator two() {
    two temp(a1); // As a2 has private access in two we cannot write temp.a2 = a1; So we use constructor instead.
    return (temp);
}

int main() {
    one a(54);
    two b(47);
    a.printData();
    b.printData();
    b = a; // We have casted a to the type two.
    a.printData();
    b.printData();
    return 0;
}
