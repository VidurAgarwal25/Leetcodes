/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        if(root!=NULL)
            q.push(root);
        while(!q.empty()){
            queue<Node*> temp;
            Node*r;
            while(!q.empty()){
                r=q.front();
                if(r->left!=NULL)
                    temp.push(r->left);
                if(r->right!=NULL)
                    temp.push(r->right);
                q.pop();
            }
            q=temp;
            while(!temp.empty()){
                Node*t=temp.front();
                temp.pop();
                if(!temp.empty())
                    t->next=temp.front();
                else
                    t->next=NULL;
            }
        }
        return root;
    }
};