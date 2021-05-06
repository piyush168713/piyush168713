#include<iostream>

//using namespace std;

int main() {
    /*
    char c;
    cin.get(c);

    while(c != '\n') {
        cout.put(c);
        cin.get(c);
    }
    */

    //Reading Strings with getline()

    /*
    char city[20];
    cout<<"Enter City Name"<<endl;
    cin>>city;
    cout<<"City Name: "<<city<<"\n\n";
    cout<<"Enter city name again: \n";
    cin.getline(city, 20); // getline(char*, std::streamsize_n)
    cout<<"City Name now: "<<city<<"\n\n"; // '\n' gets inputted in getline();
    cout<<"Enter City Name Again: ";
    cin.getline(city, 3); // It will terminate at size -3 (including null character).
    cout<<"City Name now: "<<city<<"\n\n";
    */

    // Getting output with cout.write();

    char* arr = new char[30];
    std::cin.getline(arr, 30);
    std::cout.write(arr, 5); // Displays only 5 characters.
    std::cout<<'\n';
    std::cout.write(arr, 100); // Undefined behaviour.
    std::cout<<'\n';

    return 0;
}