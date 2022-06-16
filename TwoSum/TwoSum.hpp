//
//  TwoSum.hpp
//  TwoSum
//
//  Created by Marvin Augustin on 9/27/21.
//

#ifndef TwoSum_hpp
#define TwoSum_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

#endif /* TwoSum_hpp */


class TwoSum{
 public:
    vector<int> values;//variable accessible to the cpp file but not required because already defined in cpp
    int target;//variable accessible to the cpp file but not required because already defined in cpp
    //TwoSum(std::vector<int> v, int t);
    
    vector<int> twoSum(vector<int>& nums, int target);
    
    //void find_Two();//For method with prints
    //void loop();//For method with prints
};

 


