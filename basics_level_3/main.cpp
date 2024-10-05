#include <iostream>
using namespace std;
int main()
{
    cout << boolalpha;
    cout << (1 == 1) << endl;
    cout << (2 != 1) << endl;
    cout << (2 < 1) << endl;
    cout << (2 > 1) << endl;
    cout << (1 <= 1) << endl;
    cout << (1.01 >= 1) << endl;
    cout << ("hello" == "HELLO") << endl;


    cout << ((1.01 >= 1) || (2 > 3)) << endl; //or
    cout << ((1.01 >= 1) && (4 > 3)) << endl; //and


    double temp = 2.0;
    cout << ((temp >= 1) && (temp < 3)) << endl; //and


    return 0;
}