class Solution {
public:
    int coinChange(vector<int>& c, int sum) {
        int n=c.size();
        int dp[n+1][sum+1];
	    for(int i=0;i<=n;++i){
	        for(int j=0;j<=sum;++j){
	            if(j==0)
	                dp[i][j]=0;
	           else if(i==0)
	                dp[i][j]=1e5;
                else if(c[i-1]>j)
	                dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=min(1+dp[i][j-c[i-1]],dp[i-1][j]);
	        }
        }
	
	    if(dp[n][sum]>1e4)
	    return -1;
	    else
	    return dp[n][sum];
    }
};