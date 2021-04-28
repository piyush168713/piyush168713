#include<iostream>
using namespace std;
class M{
    int x;
    int y;
    public:
        void set_x_y(int a, int b){
            x=a;
            y=b;
        }
        friend int sum(M);
};

int sum(M m){
    int M::*px = &M::x;
    int M::*py = &M::y;
    M *pm = &m;
    int S = m.*px + pm->*py;
    return S;
}
 int main(){
     M n;
     void (M::*pf)(int,int) = &M::set_x_y;
     
     return 0;
 }