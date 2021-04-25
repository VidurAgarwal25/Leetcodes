class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
        for(int i=0;i<n-1;i++)
            {
                if(nums[i]==nums[i+1]){
                    for(int j=i+1;j<n;j++){
                        nums[j-1]=nums[j];
                    }
                    n--;i--;
                }
            }
        return n;
    }
};