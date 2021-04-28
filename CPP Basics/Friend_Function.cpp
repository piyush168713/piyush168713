#include<iostream>
using namespace std;
class item2;

class item{
    int x;
    public:
        void setValue(int a){
            x=a;
        }
    friend void max(item, item2);
};

class item2{
    int y;
    public:
        void setValue(int a){
            y=a;
        }
    friend void max(item, item2);
};

void max(item a, item2 b){
    if(a.x>b.y){
        cout<<"X is greater than Y";
    }
}

int main() {
    item a;
    item2 b;
    a.setValue(500);
    b.setValue(3);
    max(a,b);
    return 0;
}