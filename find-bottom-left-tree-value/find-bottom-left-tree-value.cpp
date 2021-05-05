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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>q;
        int x;
        if(root!=NULL){
            q.push(root);
            x=root->val;
        }
        while(!q.empty()){
            TreeNode* r;
            queue<TreeNode*>temp;
            while(!q.empty()){
                r=q.front();
                if(r->left!=NULL)
                {
                    temp.push(r->left);
                }
                if(r->right!=NULL)
                    temp.push(r->right);
                q.pop();
            }
            q=temp;
            if(!temp.empty()){
                TreeNode* t=temp.front();
                x=t->val;
            }
        }
        return x;
    }
};