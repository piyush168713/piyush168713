#include<iostream>
using namespace std;
class item{
    int number;
    public:
    static int count;
    public:
        void SetNumber(int a){
            number = a;
            count++;
        }
        static void ShowCount(){
            cout<<"The count is: "<<count/*<<number*/<<endl; // will show error ass non static refrence is realted to object and not class.
        }
};

int item:: count;
int main(){
    item x,y;
    x.SetNumber(10);
    item::ShowCount(); // static member functions can be accessed directly using class name as they are assocaited with clas and not object.
    y.SetNumber(5);
    item::ShowCount();
    cout<<item::count; // can also be refrenced using object but dosent imply any meaning.
    return 0;
}
