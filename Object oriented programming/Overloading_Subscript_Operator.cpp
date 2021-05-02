#include<iostream>
using namespace std;

class arr{
    int a[5];
    int b;
    public: 
        arr(int *s) {
            for(int i =0;i<5; i++){
                a[i] = *(s+i); // or s[i]
            }
           // this->b = 5; // This keyword will be discussed later.
        }
        int operator[](int k){
            return (a[k]);
        }

};

int main() {
    int x[5] = {7,8,9,4,5};
    arr A = x; // same as arr A(x);
    for(int i=0; i<5; i++){
        cout<<x[i]<<"\t";
    }
    cout<<endl;
    // Another way to access it.
    for(int i=0; i<5; i++){
        cout<<A[i]<<"\t";
        //cout<<A.operator[](i)<<"\t"; // One and the same thing.
    }
}