// In the first example I discussed char* to class Type, now I will discuss int to class type.
#include<iostream>
using namespace std; // Bad practice, I am doing for saving time.

class Time{
    int minutes;
    int hours;
    public:
        Time(int t){
            hours = t/60;
            minutes = t%60;
        }
        Time(){}
};

int main() {
    Time t1;
    int duration = 85; // minutes.
    t1 = duration; // int to class type.
}