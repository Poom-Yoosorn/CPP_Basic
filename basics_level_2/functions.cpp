#include <iostream>

void say_hello(std::string user_name, int user_age)
{
    std::cout << "Hello," << user_name << " your age is "<< user_age << std::endl;
}


int main()
{
    say_hello("Poom",54);
    say_hello("Mo",65);
    return 0;
}