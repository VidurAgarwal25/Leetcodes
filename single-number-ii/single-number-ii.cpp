class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x;
        if(nums.size()<3)
            return nums[0];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i+=3){
            if(nums[i]!=nums[i+1]||nums[i]!=nums[i+2]||nums[i+1]!=nums[i+2])
            {
                x=nums[i];
                break;
            }
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2]||nums[nums.size()-2]!=nums[nums.size()-3]||nums[nums.size()-1]!=nums[nums.size()-3])
            x=nums[nums.size()-1];
        return x;
    }
};