/*
 * LeetCode : Check if it is a Straight Line
 *
 * Author : Nisarg Shah (@nisarg1499)
 *
 * Web : iamnisarg.in
**/


class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        
        float slope = 0;
        slope = ((float)c[1][1] - (float)c[0][1]) / ((float)c[1][0] - (float)c[0][0]);
        if(c.size() == 2){
            return true;
        }
        else{
            for(int i = 2 ; i < c.size() ; i++){
                if( ((float)c[i][1] - (float)c[i-1][1]) / ((float)c[i][0] - (float)c[i-1][0]) != slope ){
                    return false;
                }
            }
            return true;
        }
        
    }
};
