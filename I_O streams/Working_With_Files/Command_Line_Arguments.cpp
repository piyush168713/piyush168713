#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[]) // command line like ./Command_Line_Arguments A B, two files A and B will be made,
                                 // 1st will be the file name followed by file names, they are seperated by delimiter " ".
{
    int number[9] = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    if (argc != 3)
    {
        std::cout << "Error in arguments, they should be 3" << '\n';
    }

    std::ofstream fout1, fout2;
    fout1.open(argv[1]);

    if (fout1.fail())
    {
        std::cout << "Could not open the file: " << argv[1] << '\n';
        exit(1);
    }

    fout2.open(argv[2]);

    if (fout2.fail())
    {
        std::cout << "Could not open the file: " << argv[2] << '\n';
        exit(1);
    }

    for (int i = 0; i < 9; i++)
    {
        if (number[i] % 2 == 0)
        {
            fout2 << number[i] << " ";
        }
        else
        {
            fout1 << number[i] << " ";
        }
    }

    fout1.close();
    fout2.close();

    std::ifstream fin;
    char ch;
    for(int i=1; i<argc; i++) {
        fin.open(argv[i]);
        std::cout<<"Contents of "<<argv[i] << '\n';
        do {
            fin.get(ch);
            std::cout<<ch;
        }
        while(fin);
        std::cout<<"\n\n";
        fin.close();
    }

    return 0;
}