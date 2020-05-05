//
// LeetCode : First Bad Version
//
// Author : Nisarg Shah (@nisarg1499)
//
// Web : iamnisarg.in
//


class Solution {
public:
    int findComplement(int n) {
        
        int arr[33];
        int i;
        int answer = 0;

        for(i = 0 ; n > 0 ; i++){
            arr[i] = (n%2 == 0) ? 1 : 0;
            n = n/2;
        }

        for(i = i-1 ; i >= 0 ; i--){
            answer = answer + (int)(pow(2,i) + 0.5)*arr[i];
        }

        return answer;
    }
};
