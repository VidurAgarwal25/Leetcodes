class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> res;
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        int b=0,left,right,sum;
        for(int i=0;i<nums.size();i++){
            s=s-nums[i];
            left=i;
            right=nums.size()-i-1;
            sum=s-right*nums[i];
            sum+=left*nums[i]-b;
            b+=nums[i];
            res.push_back(sum);
        }
        return res;
    }
};