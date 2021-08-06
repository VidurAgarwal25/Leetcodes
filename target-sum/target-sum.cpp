class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(nums[i]==0)
            count++;
        }
        sort(nums.begin(),nums.end());
        if(target>sum||(sum+target)%2!=0)
            return 0;
        int s1=(target+sum)/2;
        int dp[n+1][s1+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s1;j++){
                if(nums[i-1]<=j)
                    dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return pow(2,count)*dp[n][s1];
    }
};