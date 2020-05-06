//
// LeetCode : First Bad Version
//
// Author : Nisarg Shah (@nisarg1499)
//
// Web : iamnisarg.in



class Solution {
public:
    int firstUniqChar(string s) {
        
        int arr[27] = {0};
        int index = -1;
        int i;

        for(i = 0 ; i < s.size(); i++){
            arr[(int)s[i] - 97]++;
        }

        for(i = 0 ; i < s.size(); i++){
            if(arr[(int)s[i] - 97] == 1){
                index = i;
                break;
            }
        }

        return index;
    }
};
