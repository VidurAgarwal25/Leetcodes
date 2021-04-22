class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        int x;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]!=nums[i+1]){
                x=nums[i];
                break;
            }
        }
        if(nums[nums.size()-1]!=nums[nums.size()-2])
            x=nums[nums.size()-1];
        return x;
    }
};
