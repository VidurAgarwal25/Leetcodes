class Solution {
public:
    bool f(string s,string p,int n,int m,vector<vector<int>>&dp){
        if(m==0&&n==0)
            return true;
        if(m>0&&n==0){
            for(int i=1;i<=m;i++){
                if(p[i-1]!='*')
                    return false;
            }
            return true;
        }
        if(m==0&&n>0)
            return false;
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(s[n-1]==p[m-1]||p[m-1]=='?')
            return dp[m][n]=f(s,p,n-1,m-1,dp);
        if(p[m-1]=='*'){
            return dp[m][n]=f(s,p,n,m-1,dp)||f(s,p,n-1,m,dp);
        }
        if(p[m-1]!=s[n-1])
        return dp[m][n]=false;
        
        return dp[m][n]=true;
    }
    bool isMatch(string s, string p) {
        int n=s.length();
        int m=p.length();
        vector<vector<bool>>dp(m+1,vector<bool>(n+1,-1));
        dp[0][0]=true;
        for(int i=1;i<=n;i++){
            dp[0][i]=false;
        }
        for(int i=1;i<=m;i++){
            bool flag=true;
            for(int j=1;j<=i;j++){
                if(p[j-1]!='*'){
                    flag=false;
                    break;
                }
            }
            dp[i][0]=flag;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s[j-1]==p[i-1]||p[i-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(p[i-1]=='*'){
                    dp[i][j]=dp[i-1][j]||dp[i][j-1];
                }
                else
                    dp[i][j]=false;
            }
        }
        return dp[m][n];
    }
};