#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main() {
    int i,j;
    char str[] = "\nC++ is better than C";
    int len = strlen(str); // strlen does not include null character in size. so here len will be 21.
    char *substr = new char[len];
    cout<<"Enter the substring to be searched: "<<endl;
    fgets(substr, len, stdin);
    /*
    strcpsn explanation at https://www.cplusplus.com/reference/cstring/strcspn/
    */
    substr[strcspn(substr, "\n")] = 0; 
    //cin>>substr;
    
    int k, len2 = strlen(substr);
    for(i=0; i<len; i++){
        k=i;
        for(j=0; j<len2; j++){
            if(str[k] == substr[j]) {
                if(j == len2-1) {
                    cout<<"\nThe Substring is present in the main string\n";
                    exit(0);
                }
                k++;
            }
            else {
                break;
            }
        }
    }
if(i == len) {
    cout<<"\nThe substring is not present in the main string"<<endl;
}



    return 0;
}