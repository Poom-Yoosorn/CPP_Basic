#include "my_vector_function.hpp"


int main()
{
//-----------Exercise 4.1----------------------------------------  
    vector<int> listA = {4,6,7};
    vector<int> listB = {1,1,1};   
    add_VectorA_To_VectorB(listA,listB);

    // print_list(listB);

//------------Exercise 4.2---------------------------------------
    vector<string> listC = {"apple", "banana", "apple", "orange", "apple", "banana", "apple", "apple"};
    cout << "Number of occurances of 'apple' :"<< FindManyOcurranceInList(listC, "apple") << endl;


    return 0;
}