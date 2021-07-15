class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),val;
        int start,end,count=0;
        for(int i=2;i<n;i++){
            start=0;
            end=i-1;
            while(start<end){
                val=nums[start]+nums[end];
                if(val>nums[i]){
                    count+=end-start;
                    end--;
                }
                else{
                    start++;
                }
            }
        }
        return count;
    }
};