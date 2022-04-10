// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
#define mod 1000000007  //1000000007
class Solution {
  public:
    long long int f(int n,int m,int i,int j,vector<vector<long long int>>&dp){
        if(i==n-1&&j==m-1)
        return 1;
        if(i==n||j==m)
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        else
        return dp[i][j]=(f(n,m,i+1,j,dp)%mod+f(n,m,i,j+1,dp)%mod)%mod;
    }
    long long int numberOfPaths(int n, int m){
        // code here
        vector<vector<long long int>>dp(n,vector<long long int>(m,-1));
        long long int res=f(n,m,0,0,dp);
        return res%mod;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends