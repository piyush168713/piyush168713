#include<iostream>
#include<fstream>


class A {
    int h;
    public:
    void setH(int a){
        h = a;
    }
    int getH() {
        return h;
    }

};

int main() {
    std::cout.setf(std::ios::fixed);
    std::ofstream outf("ITEM"); // Connects ITEM file to outf to add data to file, ofstream

    std::cout<<"Enter item name: ";
    char name[30];
    std::cin>>name; // Get name from keyboard

    outf << name << '\n'; // and write to file ITEM.

    std::cout<<"Enter item cost: ";
    float cost;
    std::cin>>cost; // Get cost from keyboard

    outf << cost << '\n'; // and write it to file ITEM.
    outf.close(); // Disconnect item from outf.

    std::ifstream inf("ITEM"); // connect file to inf to read data from file, ifstream

    inf >> name; // read name from ITEM
    inf >> cost; // read cost from ITEM

    std::cout<<'\n';

    std::cout<<"Item: "<<name<<std::endl;
    std::cout<<"cost: "<<cost<<std::endl;
    inf.close();

    // A a;
    // int h;
    // std::ofstream outfile("ITEM"); // outf is like cout
    // a.setH(5);
    // outfile<< a.getH() << '\n';
    // outfile.close();

    // std::ifstream infile("ITEM"); // inf is like cin
    // infile >> h;
    // std::cout<< h << '\n'; // See I got it from outside.
    // infile.close();

/* note- when a file is opened for writing only, a new file is created if no file of that name exists.
   If a file by that name exists already, then its contents are deleted and the file is presented as a 
   clean file. What, how to not delete contents, we will se that in a moment.
   */
    return 0;
}

/* A better example */

// int main() {
//     int x;
//     std::cin>>x;
//     std::ofstream outf("ITEM");
//     outf << x << '\n';
//     outf.close();
//     std::ifstream iof("ITEM");
//     iof >> x;
//     std::cout<<x<<'\n';
//     iof.close();
//     return 0;
// }