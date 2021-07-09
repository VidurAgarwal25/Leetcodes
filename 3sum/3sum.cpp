class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        int n=nums.size();
        int sum;
        if(n<3)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i!=0&&nums[i]==nums[i-1])
                continue;
            
           int j=i+1;
            int k=n-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    while(j<k&&nums[j]==nums[j+1])
                        j++;
                    while(j<k&&nums[k]==nums[k-1])
                        k--;
                    j++;
                    k--;
                }
                else if(sum<0)
                    j++;
                else
                    k--;
            }
        }
        return res;
    }
};
