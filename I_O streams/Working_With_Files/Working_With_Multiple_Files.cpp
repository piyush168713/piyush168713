#include<iostream>
#include<fstream>

int main() {

    std::ofstream fout;
    fout.open("Country");

    fout << "India"<<'\n';
    fout<< "United States of America" << '\n';
    fout <<"Afghanistan" << "\n";

    fout.close();

    fout.open("Capital");

    fout << "Delhi" << '\n';
    fout << "Washington DC" << '\n';
    fout << "Kabul" << '\n';

    fout.close();

    std::ifstream iof;

    char (*ptr)[30] = new char[6][30];
    iof.open("Country");

    for(int i=0; i<3; i++) {
        iof.getline(*(ptr+i), 30);
        std::cout << *(ptr+i) << '\n';
    }

    iof.close();

    iof.open("Capital");

    for(int i=3; i<6; i++) {
        iof.getline(*(ptr+i), 30);
        std::cout << *(ptr+i) << '\n';
    }

    delete ptr;
    return 0;
}