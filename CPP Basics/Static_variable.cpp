#include<iostream>
using namespace std;
class item{
    static int count;
    int number;
    public:
        void getdata(int a){
            number = a;
            count++;
        }
        void getCount(){
            cout<<"The count  is: "<<count<<endl;
        }
};
    int item:: count = 154; 

int main(){
    item x,y,z;
    x.getCount();
    y.getCount();
    z.getCount();

    x.getdata(100);
    y.getdata(200);
    z.getdata(300);

    x.getCount();
    y.getCount();
    z.getCount();
    return 0;
}