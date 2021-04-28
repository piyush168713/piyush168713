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
// '->*' Used when pointer to object and pointer to member.
// ".*" Used when object and pointer to member
 int main(){
     M n;
     M *pointer_to_object = &n;
     // Pointer to a function can be useful when we have to create callback scenarios. 
     // When we have to pass the address of a function to another function.
     // Parenthesis are necessary.
     void (M::*pf)(int,int) = &M::set_x_y;
     (n.*pf)(10,20);
     (pointer_to_object->*pf)(11,100); // same as above, we have just used pointers here.
     cout<<sum(n)<<endl;
     return 0;
 }