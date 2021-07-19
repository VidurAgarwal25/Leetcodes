class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s,m;
        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            m.insert(nums2[i]);
        }
        vector<int>res;
        for(auto i:s){
            if(m.find(i)!=m.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};