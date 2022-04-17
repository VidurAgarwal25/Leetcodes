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
//             1
//         2       3
//       4   5  -10  5 
    
    int f(TreeNode* h,int &res){
        if(h==NULL)
            return 0;
        int l=f(h->left,res);
        int r=f(h->right,res);
        int temp=max(max(l,r)+h->val,h->val);
        int ans=max(temp,l+r+h->val);
        res=max(res,ans);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        f(root,res);
        return res;
    }
};