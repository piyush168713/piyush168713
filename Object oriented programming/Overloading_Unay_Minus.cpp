#include<iostream>
using namespace std;
 class test {
     int x, y, z;
     public:
        void getData(int, int, int);
        void display();
        void operator-(); // overload unary minus
        friend test operator+(test&, test&);
 };
 void test::getData(int a, int b, int c){
     x=a;
     y=b;
     z=c;
 }
  void test:: display() {
      cout<<"x = "<<x<<endl;
      cout<<"y = "<<y<<endl;
      cout<<"z = "<<z<<endl;
  }
  void test::operator-() { // if used with objects.
      x = -x;
      y= -y;
      z= -z;
  }

  test operator+(test &A, test&B) {
      test temp;
      temp.x = A.x+B.x;
      temp.y = A.y+B.y;
      temp.z = A.z+B.z;
      return (temp); 
  }

   int main() {
       test S,P,Q;
       S.getData(4, -8, 9);
       P.getData(5,7,9);
       //S.display();
       //Q = S + P;
       Q = operator+(S, P); // same as above
       Q.display();
       //-S;
       //cout<<"After using operloaded operator"<<endl;
       //S.display();

       return 0;
   }