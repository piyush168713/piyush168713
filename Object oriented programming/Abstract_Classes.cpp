#include<iostream>
using namespace std;

class vehicles { // Abstract class, must have atleast one virtual function.
    int maxSpeed;
    public:
        virtual void maxSpeed(); // In a good IDE, you can see 2 declrations.
};

class LMV: public vehicles {
    int speed;
public:
    void maxSpeed() {
        speed = 45;
    }
};

class HMV: public vehicles {
    int speed;
public:
    void maxSpeed() {
        speed = 35;
    }
}; 

// No need of a main function here, I am just demostrating the concept.