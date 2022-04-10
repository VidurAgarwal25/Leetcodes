// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> a)
    {
        // code here
        int res=0;
        if(n==1){
            for(int i=0;i<m;i++){
                
                res+=a[0][i];
            }
            return res;
        }
        if(m==1){
            for(int i=0;i<n;i++){
                if(a[i][0]>res)
                res=a[i][0];
            }
            return res;
        }
        vector<vector<int>>dp(n,vector<int>(m));
        for(int j=m-1;j>=0;j--){
            for(int i=n-1;i>=0;i--){
                if(j==m-1){
                    dp[i][j]=a[i][j];
                }
                else if(i==n-1){
                    dp[i][j]=a[i][j]+max(dp[i-1][j+1],dp[i][j+1]);
                }
                else if(i==0){
                    dp[i][j]=a[i][j]+max(dp[i][j+1],dp[i+1][j+1]);
                }
                else{
                    dp[i][j]=a[i][j]+max(max(dp[i][j+1],dp[i+1][j+1]),dp[i-1][j+1]);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(dp[i][0]>res)
            res=dp[i][0];
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