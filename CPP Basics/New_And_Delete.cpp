#include<iostream>
using namespace std;
int main(){
    int *arr;
    int size;
    cout<<"Enter the size of integer array: ";
    cin>>size;
    cout<<"Creating an array of size "<<size<<"..";
    arr = new int[size];
    return 0;
}