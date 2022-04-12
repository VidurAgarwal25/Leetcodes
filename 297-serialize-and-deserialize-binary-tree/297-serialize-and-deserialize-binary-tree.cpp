/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* r) {
        if(r==NULL)
            return "";
        string s="";
        queue<TreeNode*>q;
        q.push(r);
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();
            if(t==NULL)
                s+="#,";
            else
                s+=to_string(t->val)+',';
            if(t!=NULL){
                q.push(t->left);
                q.push(t->right);
            }
        }
        
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* des(string &d){
        TreeNode* r;
        int f=0;
        queue<TreeNode*> q;
        
        int i=0;
        string n="";
        while(d[i]!=','){
            n+=d[i];
            i++;
        }
        int a=stoi(n);
        r=new TreeNode(a);
        q.push(r);
        
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            
            n="";
            d=d.substr(i+1);
            i=0;
            while(d[i]!=','){
                n+=d[i];
                i++;
            }
            if(n=="#")
            {
                temp->left=NULL;
            }
            else{
                a=stoi(n);
                TreeNode* t=new TreeNode(a);
                temp->left=t;
                q.push(t);
            }
            n="";
            d=d.substr(i+1);
            i=0;
            while(d[i]!=','){
                n+=d[i];
                i++;
            }
            
            if(n=="#"){
                temp->right=NULL;
            }
            else{
                a=stoi(n);
                TreeNode* t=new TreeNode(a);
                temp->right=t;
                q.push(t);
            }
        }
        return r;
    }
    
    TreeNode* deserialize(string d) {
        if(d.length()<=2)
        return NULL;
        return des(d);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));