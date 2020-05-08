/*
 * LeetCode : Cousins in Binary Tree
 *
 * Author : Nisarg Shah (@nisarg1499)
 *
 * Web : iamnisarg.in
**/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int l = 1;
        int r = n;
        int ans = 0;
        while(l <= r){
            int m = l + (r - l) / 2;

            if(isBadVersion(m) == 0){
                l = m + 1;
                ans = m;
            }
            else{
                r = m - 1;
                ans = m;
            }
            
            if(l == r){
                if(isBadVersion(l) == 0){
                    ans = l + 1;
                    break;
                }
            }
        }
        return ans;
    }
};
