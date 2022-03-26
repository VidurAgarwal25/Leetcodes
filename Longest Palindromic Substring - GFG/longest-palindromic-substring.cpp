// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string longestPalindrome(string s){
        // code here
        int n=s.length();
        if(n==1)
        return s;
        vector<vector<int>>dp(n,vector<int>(n));
        int m=INT_MIN;
        string res="";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    dp[i][j]=1;
                    if(j-i+1>m){
                        m=j-i+1;
                        res=s.substr(i,m);
                    }
                }
                if(j-i==1){
                    if(s[i]==s[j])
                    {
                        dp[i][j]=1;
                        if(j-i+1>m){
                            m=j-i+1;
                            res=s.substr(i,m);
                        }
                    }
                    else
                    dp[i][j]=0;
                }
            }
        }
        int p;
        for(int i=2;i<n;i++){
            for(int j=0;j<n-i;j++){
                p=j+i;
                if(s[j]==s[p]&&dp[j+1][p-1]==1){
                    dp[j][p]=1;
                    if(p-j+1>m){
                        m=p-j+1;
                        res=s.substr(j,m);
                    }
                }
                else
                dp[j+1][p-1]=0;
            }
        }
        return res;
    }
};

// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends