#include <iostream>
#include <string>
using namespace std;

class Robot{
public:
    Robot(string name, int version_number)
        : name(name), 
          version_number(version_number), 
          internal_temperature(30.0)
    {
    }

 
    void init_hardware()
    {
        cout << "Init hardware." << endl;
    }

   void print_info()
    {
        say_hi();
        cout << "Version number : " << version_number << endl;
        cout << "Temperature : " << internal_temperature << endl;
    }

private:
    string name;
    int version_number;
    double internal_temperature;

   void say_hi()
    {
        cout << "Hello, my name is " << name << ", ready to help" << endl;
    }};




int main()
{
    Robot robot1("R2D2", 3);
    Robot robot2("C3PO", 1);
    robot1.init_hardware();
    robot1.print_info();
    robot2.print_info();

    
    // cout << robot1.version_number << endl;
    return 0;
}