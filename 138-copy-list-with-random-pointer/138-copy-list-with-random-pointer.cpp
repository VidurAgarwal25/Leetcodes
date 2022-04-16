/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* h) {
        if(h==NULL)
        return h;
        Node *ori=h;
        Node*t=new Node(h->val);
        Node* p=t;
        Node* r=p;
        h=h->next;
        
        
        while(h!=NULL){
            t=new Node(h->val);
            p->next=t;
            p=p->next;
            h=h->next;
        }
        // Node* x=r;
        // while(x!=NULL){
        //     cout<<x->data<<" vidur ";
        //     x=x->next;
        // }
        p=r;
        
        Node* x=ori;
        while(ori!=NULL){
            Node* f=r;
            t=ori->random;
            if(t==NULL){
                p->random=NULL;
                p=p->next;
                ori=ori->next;
                continue;
            }
            Node* q=x;
            while(q!=t){
                q=q->next;
                f=f->next;
            }
            p->random=f;
            p=p->next;
            ori=ori->next;
        }
        return r;
    }
};