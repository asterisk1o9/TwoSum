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

//BRUTE FORCE
vector<int> TwoSum::twoSumBrute(vector<int>& nums, int target){
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
            twoSumBrute(nums, target);//recall our function to start at the new positions
        }
    return {start, i};
}

vector<int> TwoSum::twoSumHash(vector<int>& nums, int target){
    
    vector<int> target_indices;//second vector to hold our indices
    
    unordered_map<int, int> hash_table;//new map
    for(int i = 0; i <nums.size(); i++){//for loop to go through our original vector
        //int second_integer = target - nums.at(i);
        int second_integer = target - nums[i];//setting our second integer to the difference between our target and current position at i in nums
        if(hash_table.find(second_integer)!= hash_table.end()){//if we found the number before reaching the end
            target_indices.push_back(hash_table.find(second_integer)->second);//find the second_integer within the hash table and since our tbales has pairs(x,y) once we find our second integer find second which is our y
            target_indices.push_back(i);//push back our current i index
            break;//end the loop, we found our indices
        }
        else{
            //hash_table[nums.at(i)] = i;
            hash_table[nums[i]] = i;//put the value of i and its index in the map
        }
    }
    for(auto e : target_indices){
        cout << e << " ";
    }
    cout << "\n";
    
    return target_indices;
}
