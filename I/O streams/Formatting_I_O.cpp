#include<iostream>
#include<cmath>

using namespace std; // Bad practice, don't use this if you are seeing this, I just use for sake of speed.

/* These are member functions are of class ios  */

int main() {
    cout.width(5); // sets width, characters will be printed at right end.
    cout<<1234<<endl;
    cout.precision(3); // no trailing zeros, one less than actual.
    cout<<sqrt(2)<<endl;
    cout<<1.5<<endl; // Unlike width precision retains setting in effect until it is reset.

/* Padding and filling  */
    cout.fill('*');
    cout.width(8);
    cout<<65646<<'\n';

/* set flags */

    cout.fill('*');
    cout.width(10);
    cout.setf(ios::left, ios::adjustfield);
    cout<<"TABlE"<<'\n';

    // cout.fill('$');
    // cout.precision(3);
    // cout.setf(ios::internal, ios::adjustfield);
    // cout.setf(ios::scientific, ios::floatfield);
    // cout.width(15);
    // cout<<-12.18118<<'\n';

    float f = 3.25;
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout<<f<<endl;
    return 0;
}