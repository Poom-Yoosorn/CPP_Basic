#include "my_vector_function.hpp"


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




//---------------------------------------------------------------------


void add_VectorA_To_VectorB(const vector<int> &Vector_A,vector<int> &Vector_B)
{
     for(int eachA : Vector_A){
        Vector_B.push_back(eachA);
    }
}

int FindManyOcurranceInList (const vector<string> &VectorRaw, string DataToFind)
{
    int count = 0;
    for(string rawData : VectorRaw){
        if (rawData == DataToFind){
            count++;
        }
    }

    return count;

}