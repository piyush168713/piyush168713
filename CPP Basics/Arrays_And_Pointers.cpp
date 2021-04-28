#include <iostream>
using namespace std;
void part_two();
// arr and &arr[0] are the same.
int main()
{
    int arr[3] = {1, 25, 34};
    int *ptr;
    ptr = arr;
    //cout<<*(ptr+1);
    //cout << ptr[1];
    // This can be useful to access the array if we pass it onto a function with the help of pointers.
    part_two();
}
void part_two()
{
    int ar[5] = {1, 23, 43, 5, 2};
    int *ptr = ar;
    for(int i=0; i<5; i++){
        cout<<"Address of the array element: "<<ptr+i<<endl;
        cout<<"Value of the array element: "<<ptr[i]<<endl;
        *(ptr+i) += 5;
        cout<<"Value after an increment of 5: "<<ptr[i]<<endl;
    }
}