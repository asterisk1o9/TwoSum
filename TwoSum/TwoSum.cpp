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
//vector<int> values;


TwoSum::TwoSum(vector<int> v, int t){
    values = v;
    target = t;
}
 

//BRUTE FORCE
vector<int> TwoSum::twoSum(vector<int>& nums, int target){
    for(i = start + 1; i < nums.size(); i++)//i is always greater then our starting position
    {
        sum = nums[start] + nums[i];//add the first and second position
        if(sum == target){
            cout<< "[" << start << "," << i << "]" << "\n";//if we found the numbers that add to target then print
            break;//stop the loop
        }
        
        else if(start == nums.size() - 2 && i == nums.size() - 1 && sum != target)
        {
            cout << "Target not found\n";//if start is equal to the second to last position and i is equal to the last position and the target is not found the print not found
            break;
        }
         
    }
        if(sum != target && i == nums.size())
        {
            start++;//if we've gone through every position at i up to the size of the vector move our starting position up 1
            twoSum(nums, target);//recall our function to start at the new positions
        }
    return {start, i};
}
