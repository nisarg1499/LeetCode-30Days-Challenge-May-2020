/*
 * LeetCode : Valid Perfect Square
 *
 * Author : Nisarg Shah (@nisarg1499)
 *
 * Web : iamnisarg.in
**/



class Solution {
public:
    bool isPerfectSquare(int n) {
        
        int l = 1, r = n;
        
        while(l <= r){
            int mid = l + (r-l)/2;
            
            long m = (long)mid*mid;
            if(m == n)
                return true;
            else if(m < n){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return false;
    }
};
