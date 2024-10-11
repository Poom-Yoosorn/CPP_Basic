#ifndef ROBOT_H
#define ROBOT_H


#include <iostream>
#include <string>
using namespace std;

class Robot{
public:
    Robot(string name, int version_number);

    void init_hardware();
    void print_info();

private:
    string name;
    int version_number;
    double internal_temperature;

    void say_hi();
};

#endif