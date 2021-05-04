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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
            if(root!=NULL)
            q.push(root);
        while(!q.empty()){
            queue<TreeNode*> temp;
            vector<int> output;
            while(!q.empty()){
                TreeNode* r=q.front();
                output.push_back(r->val);
                if(r->left!=NULL)
                    temp.push(r->left);
                if(r->right!=NULL)
                    temp.push(r->right);
                q.pop();
            }
            q=temp;
            res.push_back(output);
        }
        return res;
    }
};