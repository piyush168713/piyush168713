#include<iostream>
using namespace std;

int count;
class test{
    public:
        test() {
            count++;
            cout<<"Object number: "<<count<<endl;
        }
        ~test() {
            cout<<"Object number: "<<count<<" Destroyed"<<endl;
            count--;
        }
}x,y,z;

int main() {
    return 0;
}

