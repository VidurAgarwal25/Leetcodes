class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(),x;
        if(n==1)
            return 0;
        if(nums[0]>nums[1])
            x=0;
        for(int i=1;i<n-1;i++){
            if((nums[i]>nums[i-1])&&(nums[i]>nums[i+1])){
                x= i;
                break;
            }
        }
        if(nums[n-1]>nums[n-2])
            x=n-1;
        return x;
        
    }
};