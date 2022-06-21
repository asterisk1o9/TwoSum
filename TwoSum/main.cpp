//
//  main.cpp
//  TwoSum
//
//  Created by Marvin Augustin on 9/23/21.
//

#include "TwoSum.hpp"



int main(int argc, const char * argv[]){
    
    vector<int> testValues = {2,7,11,15};
    int target = 13;
    
    TwoSum testObj;
    
    testObj.twoSumBrute(testValues, target);
    testObj.twoSumHash(testValues, target);

    
     return 0;
}
