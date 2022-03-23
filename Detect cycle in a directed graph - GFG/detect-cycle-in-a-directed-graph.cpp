// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
 class Solution {

public:
    // Function to detect cycle in an undirected graph.
    bool cycledet(int n,vector<int>adj[],vector<int>&vis,vector<int>&dfs){
        vis[n]=1;
        dfs[n]=1;
        for(auto i:adj[n]){
            if(vis[i]==0){
                if(cycledet(i,adj,vis,dfs))
                return true;
            }
            else if(dfs[i]==1)
            return true;
        }
        dfs[n]=0;
        return false;
    }
    bool isCyclic(int v, vector<int> adj[]) {
        // Code here
        vector<int>vis(v,0);
        vector<int>dfs(v,0);
        for(int i=0;i<v;i++){
            if(vis[i]==0){
                if(cycledet(i,adj,vis,dfs))
                return true;
            }
        }
        return false;
    }
};


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends