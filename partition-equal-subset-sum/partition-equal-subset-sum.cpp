class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        if(s%2!=0)
            return false;
        
        else{
            s=s/2;
            bool dp[n+1][s+1];
            for(int i=0;i<=n;i++){
                for(int j=0;j<=s;j++){
                    if(i==0)
                        dp[i][j]=false;
                    if(j==0)
                        dp[i][j]=true;
                }
            }
            for(int i=1;i<=n;i++){
                for(int j=1;j<=s;j++){
                    if(nums[i-1]<=j)
                        dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                    else
                        dp[i][j]=dp[i-1][j];
                }
            }
            return dp[n][s];
        }
        
    }
};