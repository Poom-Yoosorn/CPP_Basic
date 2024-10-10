

#ifndef MY_VECTOR_FUNCTION_H
#define MY_VECTOR_FUNCTION_H


#include <iostream>
#include <vector>
using namespace std;

void add_zero_to_list(vector<int> &number_list, int zero_number);
void print_list(const vector<int> list);
void add_VectorA_To_VectorB(const vector<int> &Vector_A,
                            vector<int> &Vector_B);
int FindManyOcurranceInList (const vector<string> &VectorRaw, 
                            string DataToFind);




#endif