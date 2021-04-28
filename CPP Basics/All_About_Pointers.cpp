#include<iostream>
int main(){
    using namespace std;
    // Basic '&' symbol is used to get the address of any variable.
    int a=10;
    int *ptr = &a;
    /*cout<<&a<<" "<<ptr;
    cout<<"\n"<<a<<" "<<*ptr<<endl;
    *ptr = 20;
    cout<<a<<" "<<*ptr<<endl; */
    // Double pointer
    int **ptr1 = &ptr;
    cout<<"The value of a: "<<a<<endl;
    cout<<"The value of a inside pointer: "<<*ptr<<endl;
    cout<<"The address of a: "<<&a<<endl;
    cout<<"The address of a stored in pointer: "<<ptr<<endl;
    cout<<"The address of pointer: "<<&ptr<<endl;
    cout<<"The value in double pointer: "<<ptr1<<endl;
    // The most simple logic I can give you is-
    // '&'- Gives the address of a varible.( It is called as the refrence variable, it gives the refrence ). Read it as address.
    // '*' - Gives the value stored at that address. As simple as that.
    return 0;
}