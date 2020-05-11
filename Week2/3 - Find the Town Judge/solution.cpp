/*
 * LeetCode : Find the Town Judge
 *
 * Author : Nisarg Shah (@nisarg1499)
 *
 * Web : iamnisarg.in
**/



class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        int len = trust.size();
        int ans[1001];
        int t;
        int temp = 0;
        
        for(int i = 0 ; i < N+1 ; i++){
            ans[i] = 1;
        }
        
        for(int i = 0 ; i < len ; i++){
            ans[trust[i][0]] = 0;
        }
        
        for(int i = 1 ; i <= N ; i++){
            if(ans[i] == 1){
                t = i;
                break;
            }
        }
        if(t == -1){
            return t;
        }
        
        for(int i = 0 ; i < len ; i++){
            if(trust[i][1] == t){
                temp++;
            }
        }
        if(temp == N-1)
            return t;
        else
            return -1;
    }
};
