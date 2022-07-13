class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n=nums.size();
       int res=INT_MIN;
        int s=0;
       for(int i=0;i<n;i++){
           s+=nums[i];
           if(s<nums[i])
               s=nums[i];
           res=max(res,s);
       }
         return res;
    }
   
};