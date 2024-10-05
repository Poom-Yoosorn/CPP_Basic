#include <iostream>
#include <vector>

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


    double temperature_list[4] = { 34.2, 22.3 ,34.8 ,100.0};
    temperature_list[0] = 99.9;
    std::cout << temperature_list[0] << std::endl;
    std::cout << temperature_list[1] << std::endl;
    std::cout << temperature_list[2] << std::endl;
    std::cout << temperature_list[3] << std::endl;


    std::vector<double> temperatures = { 34.2, 22.3 ,34.8};
    temperatures.at(0) = 55.5;
    std::cout << temperatures.at(0) << std::endl;
    std::cout << temperatures.at(1) << std::endl;
    std::cout << temperatures.at(2) << std::endl;
    std::cout << temperatures.size() << std::endl;

    temperatures.push_back(17.4);
    std::cout << temperatures.size() << std::endl;
    std::cout << temperatures.at(3) << std::endl;
    
    std::string user_namess;
    std::cout << "What is your names? ";
    std::cin >> user_namess;
    std::cout << user_namess << std::endl;


    return 0;
}