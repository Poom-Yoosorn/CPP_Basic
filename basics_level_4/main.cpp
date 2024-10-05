#include <iostream>
#include <vector>
using namespace std;

// //copy param to local,Write local but not put it back
// vector<int> add_zero_to_list(vector<int> number_list, int zero_number)
// {
//     for(int i = 0; i < zero_number; i++){
//         number_list.push_back(0);
//     }
//     cout << "C Size of number list: " << number_list.size() << endl;

//     return number_list;
// }



//in-out style
// void add_zero_to_list(vector<int> number_list, int zero_number)
// {
//     for(int i = 0; i < zero_number; i++){
//         number_list.push_back(0);
//     }
//     cout << "C Size of number list: " << number_list.size() << endl;

// }




//ref style
void add_zero_to_list(vector<int> &number_list, int zero_number)
{
    for(int i = 0; i < zero_number; i++){
        number_list.push_back(0);
    }
    cout << "C Size of number list: " << number_list.size() << endl;

}

//-------------------------------------------------------------------



void print_list(const vector<int> list)
{
    for (int number:list){
        cout << number << endl;
    }
}


int main()
{
    vector<int> list = {4,6,7};
    cout << "A Size of number list: " << list.size() << endl;
    add_zero_to_list(list,4);
    cout << "B Size of number list: " << list.size() << endl;
    return 0;
}