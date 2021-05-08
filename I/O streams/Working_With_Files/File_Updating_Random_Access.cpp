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
    cout << setiosflags(ios::left) << setw(10) << name << setw(10) << code << setw(5) << cost << '\n';
}

int main()
{
    INVENTORY item;
    fstream inoutfile;

    inoutfile.open("STOCK.DAT", ios::ate | ios::in | ios::out | ios::binary);
    inoutfile.seekg(0, ios::beg); // go to beginning.

    cout << "CURRENT CONTENTS OF STOCK" << '\n';
    while (inoutfile.read((char *)&item, sizeof(item)))
    {
        item.writeData();
    }
    inoutfile.clear(); // clears the flags.

    /* ADD more items */

    cout << "\nAdd an item: \n";
    item.readData();
    char ch;
    cin.get(ch);
    inoutfile.write((char *)&item, sizeof item);

    // Display the append file

    inoutfile.seekg(0);
    cout << "CONTENTS OF APPENDED FILE\n";
    while (inoutfile.read((char *)&item, sizeof(item)))
    {
        item.writeData();
    }

    // Find the number of objects in the file.

    int last = inoutfile.tellg();
    int n = last / sizeof(item);

    cout << "Number of Objects: " << n << endl;
    cout << "Total bytes in file: " << last << endl;

/* Modify the details of an item */

    cout<<"Enter object number to be updated: ";
    int object;
    cin>>object;
    cin.get(ch);
    int location = (object-1) * sizeof(item);

    if(inoutfile.eof()) {
        inoutfile.clear();
    }
    inoutfile.seekp(location);
    cout<<"Enter the new values of objects \n";
    item.readData();
    cin.get(ch);

    inoutfile.write((char*)&item, sizeof item) << flush;

/* SHOW UPDATED FILE */
    cout<<"Contents of updated file: \n";
    while(inoutfile.read((char*)&item, sizeof item)) {
        item.writeData();
    }

    inoutfile.close();


    return 0;
}