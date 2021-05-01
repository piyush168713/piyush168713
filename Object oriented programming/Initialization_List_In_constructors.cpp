#include<iostream>
using namespace std;

class alpha {
    int x;
public:
    alpha(int i): x(i) { // Initializer List in constructors.
        cout<<"alpha initialized"<<endl;
    }
    //alpha() {} // If we add a no arg const then it is called autmatically in derived class.
    void show_x() {
        cout<<"x = "<<x<<endl;
    }
};

class beta {
    float y;
public:
    beta(float f): y(f) { // Initializer List in constructors.
        cout<<"beta initialized"<<endl;
    }
    //beta() {y = 23;} // If we add no arg const the is is called automatically in derived class.
    void show_y() {
        cout<<"y = "<<y<<endl;
    }
};

class gamma: public beta, public alpha {
    int m,n;
public:
    gamma(int a, float b, int c):
    alpha(a*2), beta(b*8), m(c), n(m*5) // Objects are assigned value in the order of declaration, following will not work
                                        // alpha(a*2), beta(b*8), m(n*46), n(c) because n has not been initialized yet.
    {
     cout<<"gamma initialized"<<endl;  
    }
};

int main() {
    gamma A(45, 4.54, 16);
    return 0;
}
