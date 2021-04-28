// in practice, enumeration is used to define symbolic constants for a switch statement.
#include<iostream>
enum shape{
    circle=32,
    rectangle=39,
    triangle=74
};

int main() {
    std::cout<<"Enter the shape code: ";
    int code;
    std::cin>>code;
    if(code>=circle && code<=triangle){
     std::cout<<"Access Granted"<<std::endl;    
}
else{
    std::cout<<"Acess Denied"<<std::endl;
}
    return 0;
}