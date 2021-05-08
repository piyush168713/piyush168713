#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std; // For sake of speed

class INVENTORY
{
    char name[10];
    int code;
    float cost;

public:
    void readData();
    void writeData();
};

void INVENTORY::readData()
{
    std::cout << "Enter Name: ";
    std::cin.getline(name, 10);
    std::cout << "Enter Code: ";
    std::cin >> code;
    std::cout << "Enter Cost: ";
    std::cin >> cost;
}

void INVENTORY::writeData()
{
    cout<<setiosflags(ios::left)<<setw(10)<<name << setw(10)<< code <<setw(5)<< cost<<'\n';

}

int main()
{
    INVENTORY item[3];

    fstream file;
    file.open("STOCK.DAT", ios::in | ios::out);
    cout << "Enter details for three items \n";
    for (int i = 0; i < 3; i++)
    {
        item[i].readData();
        file.write((char *)&item[i], sizeof(item[i]));
        getchar();
    }

    file.seekg(0);

    cout<<"\nOUTPUT\n\n";
    for(int i=0; i<3; i++) {
        file.read((char *)&item[i], sizeof(item[i]));
        item[i].writeData();
    }
    file.close();
    return 0;
}
