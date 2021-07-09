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
    int s=0;
    void num(TreeNode* root,int temp){
        if(root==NULL)
            return ;
        if(root->left==NULL&&root->right==NULL)
        {
            temp=temp*10+root->val;
            s+=temp;
            return ;
        }
        temp=temp*10+root->val;
        num(root->left,temp);
        num(root->right,temp);
        return ;
    }
    int sumNumbers(TreeNode* root) {
        num(root,0);
        return s;
    }
};