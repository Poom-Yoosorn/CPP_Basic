#include <iostream>
#include <vector>
#include <numeric>

int main()
{
//----Exercise1.1--------------------------------------------------------------
    std::string User_Name;
    int User_Age;

    std::cout << "Your Name : ";
    std::cin >> User_Name;

    std::cout << "Your age : ";
    std::cin >> User_Age;

    std::cout << "Your Name is " << User_Name 
              << ", Your age is " << User_Age << std::endl;

//----Exercise1.2---------------------------------------------------------
    int val1, val2;
    std::cout << "Enter value1 : ";
    std::cin >> val1;
    std::cout << "Enter value2 : ";
    std::cin >> val2;

    int sum_val1_val2 = val1+val2;
    std::cout << val1 << " + " << val2 << " = " << sum_val1_val2 << std::endl; 

//----Exercise1.3---------------------------------------------------------


    std::vector<double> raws_data = {11.6, 14.7, 22.9, 20};
    double sum_raws_data = std::accumulate(raws_data.begin(),
                                           raws_data.end(),
                                           0.0);
    double avg_raws_data = sum_raws_data/raws_data.size();

    std::cout << "Sum of raws_data: " << sum_raws_data << std::endl;
    std::cout << "Average of raws_data: " << avg_raws_data << std::endl;

    return 0;
}