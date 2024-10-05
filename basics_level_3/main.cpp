#include <iostream>
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

    cout << "End of program." << endl;
    return 0;
}