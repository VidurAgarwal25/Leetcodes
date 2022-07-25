class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        for(int i=0;i<t.length();i++){
            m[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end())
                return false;
            m[s[i]]--;
        }
        for(auto i:m){
            if(i.second!=0)
                return false;
        }
        return true;
    }
};