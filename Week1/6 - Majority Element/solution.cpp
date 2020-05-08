/*
 * LeetCode : Majority Element
 *
 * Author : Nisarg Shah (@nisarg1499)
 *
 * Web : iamnisarg.in
**/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
        vector<int> copy;
        vector<int>::iterator ip;
        int length = nums.size();
        length = length/2;
        int final = 0;
        copy = nums;

        ip = unique(copy.begin(), copy.begin() + copy.size()); 
        copy.resize(distance(copy.begin(), ip));

        for(int i = copy.size()-1 ; i >= 0 ; i--){
            if( count(nums.begin(), nums.end(), copy[i]) > length ){
                return copy[i];
            }
        }

        return final;
    }
};
