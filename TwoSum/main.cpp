//
//  main.cpp
//  TwoSum
//
//  Created by Marvin Augustin on 9/23/21.
//

#include "TwoSum.hpp"

/*
int sum;
int target;
int i = 1;
int start = 0;
int counter =1;
vector<int> values;


void TwoSum(vector<int> v, int t){
    values = v;
    target = t;
}

void Solution(){
    
    for(i = start + 1; i < values.size(); i++)
    {
        sum = values[start] + values[i];
        if(sum == target){
            cout<< "[" << start << "," << i << "]" << "\n";
            break;
        }
        
        else if(start == values.size() - 2 && i == values.size() - 1 && sum != target)
        {
            cout << "Target not found\n";
            break;
        }
         
    }
        if(sum != target && i == values.size())
        {
            start++;
            Solution();
        }
}
 */

int main(int argc, const char * argv[]){
    
     //insert code here...
    
    vector<int> testValues = {2,7,11,15};
    int target = 9;
    TwoSum testObj(testValues, target);
    
    testObj.twoSum(testValues, target);

    //TwoSum(testValues, target);//In main class definition

    //testObj.Solution();//in main function call
    
     return 0;
}
