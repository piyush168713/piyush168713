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
        String(const String&); // Copy Constructor.
        ~String(){
            delete p;
        }
        operator char*(); // It must not have any arguments.
        operator int();
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

String :: operator char*(){ // Format for Class to Basic Type Conversion
    return p;
}

String :: operator int(){
    return length;
}

int main() {
    String a("Vyom");
    char* name = a; // Converting from class type to basic type.
    // Mind that char* name = char*(a); is not valid, char* type is not allowed.
    int length = int (a); // This is valid.
    cout<<length<<endl;
    return 0;
}