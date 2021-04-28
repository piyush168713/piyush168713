#include<iostream>
using namespace std;
void checker(void *ptr, int ptrsize);
int main(){
    int a = 10;
    char c = 'a';
    checker(&a, 4);
    checker(&c, 1);
    /*
    NULL POINTER
    */
    int *ptr = NULL;
    int *pointer = 0; 
    return 0;
}
void checker(void *ptr, int ptrsize){
    if(ptrsize==sizeof(int)){
        int *ptr1 = (int*) ptr;
        (*ptr1)++;
        cout<<"It is an int pointer now, increased value: "<<*ptr1<<endl;
    }
    else if(ptrsize==sizeof(char))
    {
        char *ptr1 = (char*) ptr;
        (*ptr1)++;
        cout<<"It is a char pointer now, incremented value is: "<<*ptr1<<endl;
    }
}