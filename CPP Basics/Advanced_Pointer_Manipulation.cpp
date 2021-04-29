#include <iostream>
using namespace std;
void two_dim_array();

int main()
{
    two_dim_array();
    return 0;
}

void two_dim_array()
{
    int arr[2][3] = {{12, 23, 4}, {323, 43, 3}};
    int *ptr = &arr[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << &arr[i][j] << "|";
        }
        cout << "\n";
    }
    //ptr2 is a pointer to first element of arr. The first element of the array here is an array of 3 ints.
    int(*ptr2)[3] = arr;
    cout<<*(*(ptr2+1)+1)<<endl;
    //cout<<(*ptr2+1)<<endl;
    /* For loop for printing values using pointer.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(ptr2 + i) + j) << "|";
        }
        cout << endl;
    }
    */
}