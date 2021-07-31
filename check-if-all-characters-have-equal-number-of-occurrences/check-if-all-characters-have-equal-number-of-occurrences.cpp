class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        unordered_map<char,int>::iterator p;
        p=m.begin();

        for(auto i:m){
            if(i.second==p->second)
                continue;
            return false;
        }
        return true;
    }
};