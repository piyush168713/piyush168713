#include<iostream>
using namespace std;
// Remember 0 based indexing.
int main() {
    int rows, cols;
    cout<<"The no of rows, cols: ";
    cin>>rows>>cols;
    int **ptr = new int*[rows]; // Array of pointers.
    for(int i=0; i<rows; i++){
        ptr[i] = new int[cols];
        // *(ptr + i) = new int[cols]; // one and the same thing, de refrencing it once, see dig on back of my book.
    }
    ptr[1][3] = 32;
    // *(*(ptr+1)+3) = 32; // one and the same thing.
    cout<<ptr[1][3]<<endl;
    return 0;
}