#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void get_no() { cout << roll_no << endl; }
    void set_no(int a) { roll_no = a; }
};

class test : public student // Ist level inheritance.
{
protected:
    float sub1;
    float sub2;

public:
    void set_marks(float a, float b)
    {
        sub1 = a;
        sub2 = b;
    }
    void get_marks() { cout << sub1 << " " << sub2 << endl; }
};

class result : public test // IInd levle inheritance.
{
    float total;

public:
    void display()
    {
        total = sub1 + sub2;
        cout <<"Total marks are: "<< total << endl;
    }
};

int main()
{
    result student1;
    student1.set_no(64464);
    cout<<"The Roll no is: ";
    student1.get_no();
    student1.set_marks(54.7, 84.6);
    student1.display();

    return 0;
}
