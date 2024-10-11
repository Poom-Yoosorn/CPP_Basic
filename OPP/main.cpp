
#include "robot.hpp"
using namespace std;


int main()
{
    Robot robot1("R2D2", 3);
    Robot robot2("C3PO", 1);
    // robot1.init_hardware();
    // robot1.print_info();
    // robot2.print_info();

    RoboticArm arm("Javis", 100, 300.0);
    arm.print_info();
    arm.pick_object(1,2);
    arm.place_object(3,4);

    
    // cout << robot1.version_number << endl;
    return 0;
}