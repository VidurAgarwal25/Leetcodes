class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>count;
        for(int i=1;i<=nums.size();i++){
            count[i]++;
        }
        for(int i=0;i<nums.size();i++){
            count[nums[i]]--;
        }
        for(auto i:count){
            if(i.second==1)
            res.push_back(i.first);
        }
        return res;
    }
};