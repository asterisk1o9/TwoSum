//
//  TwoSum.cpp
//  TwoSum
//
//  Created by Marvin Augustin on 9/27/21.
//

#include "TwoSum.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int sum;
int target;
int i = 1;
int start = 0;
int counter =1;
//vector<int> values;


TwoSum::TwoSum(vector<int> v, int t){
    values = v;
    target = t;
}
 
void TwoSum::Solution(){
    
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
 



/*
//WORK WITH PRINT STATEMENTS
void TwoSum::loop(){
    
    for(i = start + 1; i < values.size(); i++)
    {
        cout << "The value of start is " << start << " \n";
        cout << "The value of i is " << i << "\n";
        sum = values[start] + values[i];
        cout << "Sum= " << values[start] << "+" << values[i] << "= " << sum << "\n";
        cout << "\n";
        if(sum == target){
            cout<< start << " " << i << "\n";
            break;
        }
        
        else if(start == values.size() - 2 && i == values.size() - 1 && sum != target)
        {
            cout << "Target not found\n";
            break;
        }
         
    }
    counter++;
    cout<< "counter: " << counter << " \n";
    TwoSum::find_Two();
}
*/
/*
void TwoSum::find_Two(){
            
            if(sum != target && i == values.size())
            {
                cout << "\n";
                cout << "Second method occurs \n";
                cout << "\n";
                start++;
                i--;
                cout << "The value of i is now " << i << "\n";
                TwoSum::loop();
            }
            
}
*/

