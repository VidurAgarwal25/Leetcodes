class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,s,p;
        for(int i=0;i<nums.size();i++){
            s=0;
                for(int j=i;j<nums.size();j++){
                s=s+nums[j];
                        
                if(s>sum)
                    sum=s;
        
            }
            
        }
        return sum;
    }
};