#include<iostream>
#include<iomanip>

// User Defined manipulators.
std::ostream &currency(std::ostream& output) {
    output<<"Rs";
    return output;
} 

std::ostream &form(std::ostream& output) {
    output.setf(std::ios::showpos);
    output.setf(std::ios::showpoint);
    output.fill('*');
    output.precision(2);
    output<<std::setiosflags(std::ios::fixed) << std::setw(10);
    return output;
}

int main() {

    std::cout<<std::setw(10)<<1234<<std::endl; // endl is also a manipulator.
    std::cout<<currency << form << 4894.5;
    return 0;
}