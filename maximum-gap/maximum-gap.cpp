class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
            return 0;
        int m=0,diff;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>0;i--){
            diff=nums[i]-nums[i-1];
            m=max(diff,m);
        }
        return m;
    }
};