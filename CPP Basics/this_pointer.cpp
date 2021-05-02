#include <iostream>
#include <cstring>

using namespace std;

class Person
{
    char name[20];
    float age;

public:
    Person(const char *name, float age)
    {
        this->age = age;
        strcpy(this->name, name);
    }

    Person &greater(Person &x)
    {
        if (x.age >= age)
        {
            return x;
        }
        else
        {
            return *this; // '*this' and not 'this' because when I do int& x = y;
                          // here y is the varibale itself, I don't do &y(just 'this)
        }
    }

    void display()
    {
        cout << "Name is: " << this->name << "\n"; // this mean Person person;
                                                   // Person *this = &person;
        cout << "Age is: " << this->age << "\n";
    }
};

int main() {
    Person p1("Vyom", 18);
    Person p2("John", 17);
    Person p = p1.greater(p2);
    cout<<"The Elder Person is- "<<endl;
    p.display();

}