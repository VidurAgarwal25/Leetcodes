class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,j,s,close_sum=INT_MAX;
        int res;
        for(int k=0;i<nums.size();k++){
            i=k+1;
            j=nums.size()-1;
            while(i<j){
                s=nums[k]+nums[i]+nums[j];
                if(s<target)
                    i++;
                else
                    j--;
               
               if(abs(s-target)<close_sum)
               {
                   close_sum=abs(s-target);
                   res=s;
                   
               }
            }
        }
        return res;
       }
};