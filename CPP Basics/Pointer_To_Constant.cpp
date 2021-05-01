#include <iostream>
//READ CLOCKWISE SPIRAL RULE.

int main() {
    int a = 34;
    int b = 12;
    /*
     Here on side is const int* ptr but other side is int*, they both can be equated, this is
     called up gradation in C++. However down gradation is not permitted and will be discussed next.
    */
    const int* ptr = &a; // ptr is a pointer to a const int. 
    //*ptr = 48; // This will give error as it is a pointr to const int, its value cannot be changed through pointer.
    ptr = &b; // This can be done
/*------------------------------------------------------------------------------------------------------------------------*/
    int* const ptr2 = &b; // ptr2 is a const pointer to an int.
    *ptr2 = 47; // ok as it is a const pointer to an int and not pointer to a const int.
    // However this is not permitted.
    //ptr2 = &a; // Will show error.
/*-------------------------------------------------------------------------------------------------------------------------*/
    const int* const ptr3 = &b; // ptr3 is a const pointer to a const int.
    //Both these operations are invalid.
    //*ptr3 = 7;
    //ptr3 = &a;
/*--------------------------------------------------------------------------------------------------------------------------*/
    /*
    Down gradation.
    */
    const int x = 78;
    //int* p = &x;// This will give error as we cannot degrade from const int* to int*. 
    return 0;
}