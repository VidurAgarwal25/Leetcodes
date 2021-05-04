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
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int s=0;
        return sum(root);
    }
    int sum(TreeNode* root){
        int s=0;
        if(root==NULL)
        return 0;
        
        if(root->left&&!root->left->left&&!root->left->right)
            s+=root->left->val;
        s+=sum(root->left);
        s+=sum(root->right);
        return s;    
    }
};