#include<iostream>

template<class T>
class vector {
    T *v;
    int size;
public:
    vector(int m) {
        v = new T[size = m];
        for(int i=0; i<size; i++) {
            v[i] = 0;
        }
    }

    vector(T *a, int size) {
        v = new T[this->size = size];
        for(int i=0; i<size; i++) {
            v[i] = a[i];
        }
    }

    //Scaler Product
    T operator*(vector &y) {
        T sum =0;
        for(int i=0; i<size; i++) {
            sum += this->v[i] * y.v[i];
        }
        return sum;
    }

};

int main() {
    int x[4] = {4,5,9,6};
    int y[4] = {5,8,3,9};
    vector<int> v1(x,4);
    vector<int> v2(y,4);
    int sum = v1 * v2;

    std::cout<<"Sum is "<<sum<<'\n';


    return 0;
}