#include <iostream>
#include <cstring>

class Error
{
    int err;
    char *err_desc;

public:
    Error(int err, const char *err_desc)
    {
        this->err = err;
        this->err_desc = new char[strlen(err_desc)];
        strcpy(this->err_desc, err_desc);
    }
};

int main() {

    try {
        std::cout<<"Press any key to get an exception: ";
        getchar();
        throw Error(99, "Hehe");

    }
    catch (Error e) {
        std::cout<<"ERRORRRR\n";
    }
    return 0;
}