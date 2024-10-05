#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void say_hello(string user_name, int user_age)
{
    cout << "Hello," << user_name << " your age is "<< user_age << endl;
}

void greet_user()
{
    string user_name;
    int user_age;

    cout << "Your Name : ";
    cin >> user_name;
    cout << "Your age : ";
    cin >> user_age;

    say_hello(user_name,user_age);
}


int AddTwoInt(int val1, int val2)
{
    return val1+val2;
}


double CalAverage(vector<double> raws_data)
{
    double sum_raws_data = accumulate(raws_data.begin(),
                                      raws_data.end(),
                                      0.0);

    return sum_raws_data/raws_data.size();
}


double CelsiusToFahrenheit(double TempCelsius)
{
    return (TempCelsius*1.8) + 32.0;
}



int main()
{
    greet_user();
    
//---------------------------------------------------------------------------------------
    int val1, val2;
    cout << "Enter value1 : ";
    cin >> val1;
    cout << "Enter value2 : ";
    cin >> val2;
    std::cout << val1 << " + " << val2 << " = " << AddTwoInt(val1,val2) << std::endl; 

//---------------------------------------------------------------------------------------
    vector<double> raws_data = {11.6, 14.7, 22.9, 20.0};
    cout << "Average of raws_data: " << CalAverage(raws_data) << endl;
//---------------------------------------------------------------------------------------


    double TempC;
    cout << "Temp C: ";
    cin >> TempC;
    cout << "Temp F: " << CelsiusToFahrenheit(TempC) << endl;
    return 0;
}