#include<iostream>
#include<fstream>
#include<cstring>

int main() {
    char string[80];
    std::cout<<"Enter the string: ";
    std::cin.getline(string, 80);

    int len = strlen(string);

    std::fstream file;
    file.open("TEXT", std::ios::in|std::ios::out); // Since here we are using reading or writing, a new file 
                                                   // will not be created, a new file is creatde when we open only
                                                   // for writing to the file.
    for(int i=0; i<len; i++) {
        file.put(string[i]);
    }

    file.seekg(0);

    char ch;
    std::cout<<"Reading the file contents: "<<'\n';
    while(file) { // If any error or eof is reached it results 0 and loop is stopped
        file.get(ch);
        std::cout<<ch;
    }
    std::cout<<'\n';
    return 0;
}
