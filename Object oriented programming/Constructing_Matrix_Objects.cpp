#include<iostream>
#include<string.h>
using namespace std;
// The concept of this program has already been discussed in 2_D_Array_Traversal......
class matrix {
    int **p; // pointer to matrix;
    int d1, d2; // dimensions.
    public:
        matrix(int x, int y);
        void get_element(int i, int j, int value){
            p[i][j] = value;
        } 
        int &put_element(int i, int j){
            return p[i][j];
        }
};
matrix:: matrix(int x, int y){
    d1 = x;
    d2 = y;
    p = new int *[d1];
    for(int i=0; i<d1; i++){
        p[i] = new int[d2];
    }
}