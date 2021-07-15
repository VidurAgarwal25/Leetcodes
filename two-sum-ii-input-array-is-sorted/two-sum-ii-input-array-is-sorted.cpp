class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n-1;i++){
            if(i==0||nums[i]!=nums[i-1]){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target)
                {
                    res.push_back(i+1);
                    res.push_back(j+1);
                    break;
                }
            }
            }
        }
        return res;
    }
};