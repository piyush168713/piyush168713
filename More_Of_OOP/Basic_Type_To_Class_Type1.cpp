//I will discuss 2 examples for it, first when we will convert char* to string type.
#include<iostream>
#include<string.h>
using namespace std;
class String {
    int length;
    char *p;
    public:
        String() {
            length = 0;
            p = 0; // Making it null.
        }
        String(char *name);
        String(const String&);
        ~String(){
            delete p;
        }
};

String :: String(char *name){
    length = strlen(name);
    p = new char [length+1]; // for null characters
    strcpy(p, name);
}

String:: String(const String& s){
    length = s.length;
    p = new char[length+1];
    strcpy(p, s.p);
}

int main() {
    String a,b;
    char *name1 = "Vyom";
    char *name2 = "Yadav";
    a = String(name1); 
    b = name2; // invoking the constructor implicitly.
    // Here both the times we are converting char* to String, basic type to class conversion.
    return 0;
}