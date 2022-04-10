// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int f(vector<vector<int>> &a,int n,int m,int r,int c,vector<vector<int>> &dp){
    if(r<0||r==n||c==m)
    return 0;
    if(dp[r][c]!=-1)
    return dp[r][c];
    int ud=f(a,n,m,r-1,c+1,dp);
    int ri=f(a,n,m,r,c+1,dp);
    int ld=f(a,n,m,r+1,c+1,dp);
    return dp[r][c]=a[r][c]+max(max(ld,ri),ud);
}
    int maxGold(int n, int m, vector<vector<int>> a)
    {
        // code here
        int res=0;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            res=max(res,f(a,n,m,i,0,dp));
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends