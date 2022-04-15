// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int findDist(Node* r, int a, int b) {
        // Your code here
        unordered_map<Node*,Node*>m;
        queue<Node*>q;
        if(r==NULL)
        return -1;
        q.push(r);
        m[r]=NULL;
        while(!q.empty()){
            
                Node* t=q.front();
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
        // cout<<m.size()<<" vidur ";
        q.empty();
        // cout<<q.size()<<" vidur ";
        unordered_map<Node*,bool>vis;
        Node* t;
        q.push(r);
        // cout<<q.size()<<" vidur ";
        while(!q.empty()){
            t=q.front();
            q.pop();
            if(t->data==a)
            break;
            if(t->left!=NULL)
            q.push(t->left);
            if(t->right!=NULL)
            q.push(t->right);
        }
        // cout<<t->data<<" vidur ";
        queue<Node*>k;
        // cout<<k.size()<<" agarwal ";
        k.push(t);
        // cout<<k.size()<<" agarwal ";
        vis[t]=true;
        int c=0;
        while(!k.empty()){
            int s=k.size();
            for(int i=0;i<s;i++){
                Node* p=k.front();
                if(p->data==b)
                return c;
                k.pop();
                if(p->left!=NULL&&vis[p->left]==false){
                    k.push(p->left);
                    vis[p->left]=true;
                }
                if(p->right!=NULL&&vis[p->right]==false){
                    k.push(p->right);
                    vis[p->right]=true;
                }
                if(m[p]!=NULL&&vis[m[p]]==false){
                    vis[m[p]]=true;
                    k.push(m[p]);
                }
            }
            c++;
            // cout<<c<<" vidur ";
        }
        return -1;
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        int n1, n2;
        scanf("%d %d ", &n1, &n2);
        Solution ob;
        cout << ob.findDist(root, n1, n2) << endl;
     
    }
    return 0;
}
  // } Driver Code Ends