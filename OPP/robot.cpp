#include "robot.hpp"

Robot::Robot(string name, int version_number)
    : name(name), 
        version_number(version_number), 
        internal_temperature(30.0)
{
}


void Robot::init_hardware()
{
    cout << "Init hardware." << endl;
}

void Robot::print_info()
{
    say_hi();
    cout << "Version number : " << version_number << endl;
    cout << "Temperature : " << internal_temperature << endl;
}


void Robot::say_hi()
{
    cout << "Hello, my name is " << name << ", ready to help" << endl;
}