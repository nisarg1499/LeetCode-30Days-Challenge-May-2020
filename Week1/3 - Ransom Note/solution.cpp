//
// LeetCode : First Bad Version
//
// Author : Nisarg Shah (@nisarg1499)
//
// Web : iamnisarg.in
//



class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int arr1[130] = {0};
        int arr2[130] = {0};
        int answer = 0;

        for(int i = 0 ; i < ransomNote.size() ; i++){
            arr1[int(ransomNote[i])]++;
        }

        for(int i = 0 ; i < magazine.size(); i++){
            arr2[int(magazine[i])]++;
        }

        for(int i = 97 ; i < 123 ; i++){
            if(arr1[i] >= 1){
                if(arr2[i] >= arr1[i]){
                    answer = answer + arr1[i];
                }
            }
        }

        if(answer == ransomNote.size()){
            return true;
        }
        else{
            return false;
        }
    }
};
