class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        int pmax=nums[0],tempmax;
        int pmin=nums[0];
        int far=nums[0];
        for(int i=1;i<n;i++){
            int x=max(nums[i]*pmin,nums[i]);
            tempmax=max(pmax*nums[i],x);
            pmin=min(pmax*nums[i],min(pmin*nums[i],nums[i]));
            pmax=tempmax;
            if(pmax>far)
                far=pmax;
        }
        return far;
    }
};