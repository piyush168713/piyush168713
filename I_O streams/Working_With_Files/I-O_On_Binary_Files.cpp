#include<iostream>
#include<fstream>
#include<iomanip>

const char* File_Name = "BINARY";

int main() {
    float height[4] = {175.5,185.6,188.5,170.6};

    std::ofstream outfile;
    outfile.open(File_Name);
    

    outfile.write((char *) height, sizeof(height)); // casr to (char *) is necessary.
    outfile.close();
    for(int i=0; i<4; i++) {
        height[i] = 0;
    }

    std::ifstream infile;
    infile.open(File_Name);
    infile.read((char*) height, sizeof(height));
    for(int i=0; i<4; i++) {
        std::cout.setf(std::ios::showpoint);
        std::cout.setf(std::ios::fixed);
        std::cout << std::setw(10) << std::setprecision(2) << height[i];
    }
    infile.close();
    return 0;
}