class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,r=nums.size()-1,temp;
        while(l<r){
            if(nums[l]%2==0&&nums[r]%2==0){
                l++;
            }
            else if(nums[l]%2!=0&&nums[r]%2!=0){
                r--;
            }
            else if(nums[l]%2!=0&&nums[r]%2==0){
                temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
                l++;
                r--;
            }
            else{
                l++;
                r--;
            }
        }
        return nums;
    }
};