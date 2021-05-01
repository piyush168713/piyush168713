#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void setRollNo(int x) { roll_no = x; }
    int getRollNo() { return roll_no; }
};

class test : virtual public student
{
protected:
    float sub1;
    float sub2;

public:
    void setMarks(float a, float b)
    {
        sub1 = a;
        sub2 = b;
        setRollNo(78);
    }
};

class sports : public virtual student
{
protected:
    int score;

public:
    void setScore(int a)
    {
        score = a;
        setRollNo(79);
    }
    int getScore() { return score; }
};

class result : public test, public sports
{
    float total;

public:
    float findTotal()
    {
        total = score + sub2 + sub1;
        return total;
    }
    void display()
    {
        cout << "The total is: " << total << endl;
    }
};

int main()
{
    result studen1;
    studen1.setScore(4);
    studen1.setMarks(45.2, 84.14);
    studen1.findTotal();
    studen1.display();
    cout<<studen1.getRollNo()<<endl; // one roll on instance is shared among both the classes.
    studen1.setRollNo(15);
    cout<<studen1.getRollNo()<<endl;
    return 0;
}