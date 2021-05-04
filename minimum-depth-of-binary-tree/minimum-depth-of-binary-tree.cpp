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
    int minDepth(TreeNode* root) {
        queue<TreeNode*>q;
        if(root!=NULL)
            q.push(root);
        int c=1;
        while(!q.empty()){
            queue<TreeNode*>temp;
            TreeNode* r;
            while(!q.empty()){
                r=q.front();
                if(r->left!=NULL){
                    temp.push(r->left);
                }
                if(r->right!=NULL){
                    temp.push(r->right);
                }
                if(r->left==NULL&&r->right==NULL)
                    return c;
                q.pop();
            }
            c++;
            q=temp;
        }
        return 0;
    }
};