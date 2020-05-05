//
// LeetCode : First Bad Version
//
// Author : Nisarg Shah (@nisarg1499)
//
// Web : iamnisarg.in
//



class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int arr[150] = {0};
        int answer = 0;

        for(int i = 0 ; i < J.size() ; i++){
            arr[int(J[i])] = 1;
        }

        for(int i = 0 ; i < S.size() ; i++){
            if(arr[int(S[i])] >= 1)
                arr[int(S[i])] = arr[int(S[i])] + 1;
        }

        for(int i = 0 ; i < 140 ; i++){
            answer = answer + arr[i];
        }
        answer = answer - J.size();

        return answer;
    }
};
