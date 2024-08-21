class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>indexing;
        vector<int> res;
        for(int i =0;i <nums.size();i++){
            int check = target - nums[i];

            if(indexing.find(check)!=indexing.end()){
                res.push_back(indexing[check]);
                res.push_back(i);
            }
            else{
                indexing[nums[i]] = i;
            }
        }
        return res;
    }
};