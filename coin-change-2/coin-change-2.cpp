class Solution {
public:
    int change(int sum, vector<int>& c) {
        int n=c.size();
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0)
                dp[i][j]=0;
                if(j==0)
                dp[i][j]=1;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(c[i-1]<=j)
                dp[i][j]=dp[i-1][j]+dp[i][j-c[i-1]];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
};