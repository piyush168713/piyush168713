#include<iostream>

using namespace std;

class test {
public:
    int num;
    test(int i) {
        num = i;
    }
    
    test* operator->() {
        return this;
    }
};

int main(){
    test T(5);
    test *ptr = &T;
    cout<<T.num<<endl;
    cout<<ptr->num<<endl;
    cout<<T->num<<endl; // same as below
    cout<<T.operator->()->num<<endl;// same as above
    return 0;
}