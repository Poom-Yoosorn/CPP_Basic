#include <iostream>

void say_hello(std::string user_name, int user_age)
{
    std::cout << "Hello," << user_name << " your age is "<< user_age << std::endl;
}

int triple_number(int number)
{
    return number*3;
}

void print_triple_number(int number)
{
    std::cout << triple_number(number) << std::endl;
    return;
}



int main()
{
    say_hello("Poom",54);
    say_hello("Mo",65);
    print_triple_number(23);
    return 0;
}