#include <iostream>
using namespace std;

// Pass by value
int square1(int n){
    // Address of n in square 1 is not as same as address of n in main.
    cout<<"\nAddress of n1 in square1: "<<&n<<endl;
    // clone modified inside function
    n *=n;
    return n;
}
// Pass by refrence with pointer arguments.
void square2(int *n){
    //Address of n in square2 is same as n2 in main
    cout<<"The addres of n2 in square2: "<<n<<endl;
    //Explicit de-refrencing to get the value pointed-to 
    *n *= *n;
}
// Pass by refrence with refrence arguments
void square3(int &n){
    //Address of n in square3 is the same as n3 in main
    cout<<"address of n3 in square3: "<<&n<<endl;
    // Implicit de refrencing (without '*')
    n *= n;
    // same as *(&n) *= *(&n);
}
void geeks()
{
    //Call-by-Value
    int n1=8;
    cout << "address of n1 in main(): " << &n1 <<endl;
    int a = square1(n1);
    cout << "Square of n1: " << a <<endl;
    square1(n1);
    cout << "No change in n1: " << n1 <<endl;
      
    //Call-by-Reference with Pointer Arguments
    int n2=8;
    cout << "address of n2 in main(): " << &n2 <<endl;
    square2(&n2);
    cout << "Square of n2: " << n2 <<endl;
    cout << "Change reflected in n2: " << n2 <<endl;
      
    //Call-by-Reference with Reference Arguments
    int n3=8;
    cout << "address of n3 in main(): " << &n3 <<endl;
    square3(n3);
    cout << "Square of n3: " << n3 <<endl;
    cout << "Change reflected in n3: " << n3 <<endl;
      
      
}
//Driver program
int main()
{
    geeks();
    return 0;
}