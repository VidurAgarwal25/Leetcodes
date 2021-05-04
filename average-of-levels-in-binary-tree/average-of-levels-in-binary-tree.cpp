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
    vector<double> averageOfLevels(TreeNode* r) {
        vector<double>avg;
        queue<TreeNode*>q;
        q.push(r);
        
        TreeNode* root;
        while(!q.empty()){
            double s=0.0;int c=0;
            queue<TreeNode*>temp;
            while(!q.empty()){
            root=q.front();
                s+=root->val;
            if(root->left!=NULL)
                temp.push(root->left);
            if(root->right!=NULL)
                temp.push(root->right);
            q.pop();
            c++;
        }
            q=temp;
            avg.push_back(s/(c*1.0));
    }
        
        return avg;
        
    }
    
};