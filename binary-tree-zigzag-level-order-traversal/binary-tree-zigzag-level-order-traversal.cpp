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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*>q;
        if(root!=NULL)
        q.push(root);
        int f=1,x;
        while(!q.empty()){
            vector<int> output;
            queue<TreeNode*> temp;
            TreeNode* r;
            while(!q.empty()){
                r=q.front();
                output.push_back(r->val);
                    if(r->left!=NULL)
                        temp.push(r->left);
                    if(r->right!=NULL)
                        temp.push(r->right);
                q.pop();
            }
            q=temp;
            if(f==-1)
            for(int i=0;i<output.size()/2;i++){
                x=output[i];
                output[i]=output[output.size()-i-1];
                output[output.size()-i-1]=x;
            }
            f*=-1;
            res.push_back(output);
        }
        return res;
    }
};