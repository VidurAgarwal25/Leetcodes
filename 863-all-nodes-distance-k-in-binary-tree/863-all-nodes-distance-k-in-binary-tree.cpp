/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void f(unordered_map<TreeNode*,TreeNode*>&m,TreeNode* r){
        queue<TreeNode*>q;
        q.push(r);
        m[r]=NULL;
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
            if(t->left!=NULL){
                q.push(t->left);
                m[t->left]=t;
            }
            if(t->right!=NULL){
                q.push(t->right);
                m[t->right]=t;
            }
        }
    }
    vector<int> distanceK(TreeNode* r, TreeNode* t, int k) {
        vector<int>res;
        if(r==NULL)
            return res;
        unordered_map<TreeNode*,TreeNode*>m;
        f(m,r);
        queue<TreeNode*>q;
        q.push(t);
        unordered_map<TreeNode*,bool>vis;
        vis[t]=true;
        int l=0;
        while(!q.empty()){
            if(l==k)
                break;
            l++;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* p=q.front();
                q.pop();
                cout<<p->val<<"vidur"<<" ";
                if(p->left!=NULL&&vis[p->left]==false){
                    vis[p->left]=true;
                    q.push(p->left);
                }
                if(p->right!=NULL&&vis[p->right]==false){
                    vis[p->right]=true;
                    q.push(p->right);
                }
                if(m[p]!=NULL&&vis[m[p]]==false){
                    vis[m[p]]=true;
                    q.push(m[p]);
                }
            }
        }
        while(!q.empty()){
            res.push_back(q.front()->val);
            q.pop();
        }
        return res;
    }
};