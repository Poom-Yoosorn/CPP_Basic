#include <iostream>

int a;

int main()
{
    const int secounds_per_hour = 3600;
    const double max_allowed_temperature = 76.8;

    int user_age = 2;
    double temp = 20.6;
    bool is_alive = true;
    std::string user_name = "Bob";
    
    std::cout << user_age << std::endl;
    std::cout << temp << std::endl;
    std::cout << is_alive << std::endl;
    std::cout << user_name << std::endl;
    std::cout << secounds_per_hour << std::endl;
    std::cout << max_allowed_temperature << std::endl;
    
    return 0;
}