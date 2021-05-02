#include <iostream>

typedef void (*FP)(int, int); // FP is a pointer passing int, int as argument and returning void.

void Add(int i, int j)
{
    std::cout << i << " + " << j << "=" << i + j << std::endl;
}

void Subtract(int i, int j)
{
    std::cout << i << " - " << j << "=" << i - j << std::endl;
}

int Multiply(int i, int j) {
    return i*j;
}

int Divide(int a, int b){
    return a/b;
}

int main() {


    FP ptr;

    ptr = &Add;
    ptr(1,2);
    ptr = &Subtract;
    ptr(8,5);

    int (*p)(int , int);

    int (&pq) (int, int) {Multiply};
    //pq = Divide; // won't work expression must be a modifiable value.
    
    //int(&pqr)(int, int); // This wont work, the refrence variable pqr requires an initializer.
    //pqr = Multiply;

    int q = pq(4,8);
    std::cout<<q<<std::endl;

    p = &Multiply;
    int c = p(4,5);
    int d = (*p)(4,5);
    std::cout<<c<<d;

    return 0;
}