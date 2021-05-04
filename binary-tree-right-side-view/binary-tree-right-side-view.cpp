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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*>q;
        if(root!=NULL)
        {
            q.push(root);
            res.push_back(root->val);
        }
        while(!q.empty()){
            TreeNode* r;
            queue<TreeNode*>temp;
            while(!q.empty()){
                r=q.front();
                if(r->left!=NULL)
                    temp.push(r->left);
                if(r->right!=NULL)
                    temp.push(r->right);
                q.pop();
            }
            q=temp;
            int c;
            while(!temp.empty()){
                r=temp.front();
                c=r->val;
                cout<<c<<" ";
                temp.pop();
            }
            res.push_back(c);
        }
        if(res.size()!=0)
            res.pop_back();
        return res;
    }
};