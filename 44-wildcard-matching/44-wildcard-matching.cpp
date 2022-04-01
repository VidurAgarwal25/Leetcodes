class Solution {
public:
    
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