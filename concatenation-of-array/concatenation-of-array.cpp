class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int i=1,j;
        while(i<=2){
            j=0;
            while(j<n){
                ans.push_back(nums[j]);
                j++;
            }
            i++;
        }
        return ans;
    }
};