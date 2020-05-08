/*
 * LeetCode : Cousins in Binary Tree
 *
 * Author : Nisarg Shah (@nisarg1499)
 *
 * Web : iamnisarg.in
**/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


int sibling(TreeNode* root, int a, int b){
    
    int ans1 = 0, ans2 = 0;
    if(root == NULL)
        return 0;
    
    if(root->left != NULL and root->right != NULL){
        ans1 = root->left->val == b && root->right->val == a;
        ans2 = root->left->val == a && root->right->val == b;
    }
    else{
        ans1 = 0;
        ans2 = 0;
    }
    
    return(ans1 || ans2 || sibling(root->right, a, b) || sibling(root->left, a, b));
    
}

int findLevel(TreeNode* root, int value, int level){
    
    int left=0, right=0;
    if(root == NULL)
        return 0;
    if(root->val == value)
        return level;
    
    if(root->left != NULL){
        left = findLevel(root->left, value, level+1);
    }
    if(root->right != NULL){
        right = findLevel(root->right, value, level+1);
    }
        
    if(right != 0)
        return right;
    else
        return left;
    
}

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if( ( findLevel(root, x, 1) == findLevel(root, y, 1) ) && !sibling(root, x, y) )
            return true;
        else
            return false;
    }
};
