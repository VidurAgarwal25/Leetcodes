class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int i,j,s,previous1,previous2;
        for(int k=0;k<nums.size();k++){
            if(k>0&&nums[k]==nums[k-1])
                continue;
            i=k+1;j=nums.size()-1;
            while(i<j){
                s=nums[k]+nums[i]+nums[j];
                if(s==0){
                    vector<int>output;
                    output.push_back(nums[k]);
                    output.push_back(nums[i]);
                    output.push_back(nums[j]);
                    result.push_back(output);
                    previous1=nums[i];
                    previous2=nums[j];
                    
                    while(i<j&&nums[i]==previous1)
                    i++;
                    while(i<j&&nums[j]==previous2)
                    j--;                        
                }
                else if(s<0){
                    i++;
                }
                else{
                    j--;
                }
            }
        }
        return result;
    }
};