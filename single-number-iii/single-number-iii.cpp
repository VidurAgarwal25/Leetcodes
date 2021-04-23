class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i=0;i<n-1;i+=2){
            if(nums[i]!=nums[i+1]){
                result.push_back(nums[i]);
                i--;
            }
                
        }
        if(nums[n-1]!=nums[n-2])
            result.push_back(nums[n-1]);
        return result;
    }
};