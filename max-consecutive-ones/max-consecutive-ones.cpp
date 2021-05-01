class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,x,max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            x=nums[i];
            if(x==1){
                count++;
            }
            else{
                count=0;
            }
            if(count>max)
                max=count;
        }
        return max;
    }
};