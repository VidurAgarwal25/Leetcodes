class Solution {
public:
    bool static comp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.first==b.first)
            return a.second>b.second;
        return a.first<b.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto i:m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),comp);
        vector<int>res;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].first;j++)
                res.push_back(v[i].second);
        }
        return res;
    }
};