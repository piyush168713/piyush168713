#include<iostream>

class invent2;
class invent {
    int age;
    const char* name;
    public:
    invent() {}
    invent(int, const char*);
    void operator=(invent2);
    void printData() {
       std::cout<<"Age is: "<<age<<std::endl;
       std::cout<<"Name is: "<<name<<std::endl;
    }
    void setName(const char* a) {
        name = a;
    }
};

class invent2 {
    int age;
    const char* name;
    public:
    invent2(){}
    invent2(int, const char*);
    int getAge(){return age;}
    const char* getName(){return name;}
};

invent:: invent(int a, const char* b){
    age = a;
    b = name;
}

invent2:: invent2(int a, const char* b) {
    age = a;
    name = b;
}

void invent:: operator=(invent2 a){
    age = a.getAge();
    name = a.getName();
}

 

int main() {
    invent a;
    invent2 b(15, "Vyom");
    //a.operator=(b); // Same as below.
    a = b;
    a.printData();
    return 0;
}