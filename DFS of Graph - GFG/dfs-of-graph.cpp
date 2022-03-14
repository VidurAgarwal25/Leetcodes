// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    // Function to return a list containing the DFS traversal of the graph.
    void dfsg(int n,vector<int>adj[],vector<int>&vis,vector<int>&dfs){
        dfs.push_back(n);
        vis[n]=1;
        for(auto it : adj[n]){
            if(vis[it]==0){
                
                dfsg(it,adj,vis,dfs);
            }
        }
    }
    public:
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        // Code here
        vector<int>vis(v,0);
        vector<int>dfs;
        for(int i=0;i<v;i++){
            if(!vis[i]){
        
                dfsg(i,adj,vis,dfs);
            }
        }
        return dfs;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends