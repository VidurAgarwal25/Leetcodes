class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<=1)
            return ;
        int n=nums.size()-2;
        int i,j,f=0;
        for(i=n;i>=0;i--){
            if(nums[i]<nums[i+1])
            {   
                f=1;
                break;
            }
        }
        if(f==0)
            sort(nums.begin(),nums.end());
        else
        {
        for(j=n+1;j>i;j--){
            if(nums[j]>nums[i])
                break;
        }
        int temp;
        temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        sort(nums.begin()+i+1,nums.end());
        }
    }
};