#include<iostream>

int main() {
    int a;
    char b;
    std::cin>>a>>b; // The stream will contain any character that is not number and will assign it to b, eg-451D
                    // a = 451, b = 'D';
    std::cout<<a<<" "<<b;
    return 0;

}