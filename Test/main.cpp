//find_address.cpp -- using the & operator to find addresses
#include <iostream>
int main()
{
    using namespace std;
    int dounts = 6;
    double cups = 4.5;
    cout << "value = " << dounts << cups << "\t";;
    cout << "address = " << &dounts << endl;
    //NOTE: YOU may need to use unsigned (donuts)
    //and unsigned (&cups)
    cout << "cups value = " << cups << cups << "\t";;
    cout << "and cups address = " << &cups << endl;
    return 0; 
}
