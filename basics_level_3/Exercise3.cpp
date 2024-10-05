#include <iostream>
#include <vector>
using namespace std;

int FindMax(vector<int> raw_list)
{
    int MaxRaw = 0;
    for (int raw : raw_list){
        if((raw > MaxRaw)){
            MaxRaw = raw;
        }
    }
    return MaxRaw;
}

int main()
{
    //---------------Exercise 3.1---------------------------
    vector<int> raw_list = {1,34,4,6};
    cout << "Max is : " << FindMax(raw_list) << endl;



    //---------------Exercise 3.2---------------------------
    vector<int> raw2_list;
    for(int i = 0;i < 5;i++)
    {
        int User_data;
        cout << "Give me Value" << i+1 << ": ";
        cin >> User_data;
        raw2_list.push_back(User_data);
        // cout << "Value is " << raw2_list.at(i) << endl;
    }
    cout << "Max is : " << FindMax(raw2_list) << endl;
    


    //---------------Exercise 3.3---------------------------
    vector<int> raw3_list;
    bool enable_Getdata = true;
    
    while(enable_Getdata){
        int User_data,i;
        cout << "Give me Value" << i+1 << " (0 to Stop): ";
        cin >> User_data;
        
        if(User_data == 0){
            enable_Getdata = false;
        }
        else{
            raw3_list.push_back(User_data);
            i++;
        }
        
    }

    cout << "Max is : " << FindMax(raw3_list) << endl;






    return 0;
}