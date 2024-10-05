#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int user_age = 70;

    if (user_age <= 18) {
        cout << "You are officially an Child." << endl;
    }
    else if((user_age > 18) && (user_age < 27)){
        cout << "You are officially an Adult below 27." << endl;
    }
    else{
        cout << "You are officially an Adult Old." << endl;
    }


    // for (int i = 0; i < 10;i++){
    //     cout << "Hello" << i << endl;
    // }

    // int i = 0;
    // while(i < 10){
    //     cout << "Hello" << i << endl;
    //     i++;
    // }

//--------------------------------------------------------------------
    vector<double> temp_list = {-12.2,-14.6,15.5,78.3};
    for (int i = 0; i < temp_list.size(); i++){
        double temp = temp_list.at(i);
        cout << temp;
        if (temp < 0){
            cout << " lower than zero" << endl;
        }
        else{
            cout << endl;
        }
    }

    for ( double temp: temp_list){
        cout << temp << endl;
    }

//--------------------------------------------------------------------

    double temps[4] = {12.2,14.6,15.5,78.3};
    for (int i = 0; i < 4; i++){
        cout << temps[i] << endl;
    }
//--------------------------------------------------------------------
    return 0;
}