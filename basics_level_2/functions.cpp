#include <iostream>
using namespace std;

namespace CalNum{
    int triple_number(int number)
    {
        return number*3;
    }

    void print_triple_number(int number)
    {
        cout << triple_number(number) << endl;
        return;
    }
};


void say_hello(string user_name, int user_age)
{
    cout << "Hello," << user_name << " your age is "<< user_age << endl;
}


int main()
{
    say_hello("Poom",54);
    say_hello("Mo",65);
    CalNum::print_triple_number(44);
    return 0;
}