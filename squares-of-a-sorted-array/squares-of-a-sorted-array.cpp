class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int>result(nums.size());
        int low=0,high=nums.size()-1;
        while(low<=high){
            if(abs(nums[low])<abs(nums[high])){
                result[n]=nums[high]*nums[high];
                high--;
            }
            else{
                result[n]=nums[low]*nums[low];
                low++;
            }
            n--;
                
        }
        return result;
    }
};