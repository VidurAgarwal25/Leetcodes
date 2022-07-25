class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.length();i++){
            if(m.find(s[i])==m.end())
                m[s[i]]=i;
            else
                m[s[i]]=INT_MAX;
        }
        for(int i=0;i<s.length();i++){
            if(m[s[i]]==i)
                return i;
        }
         return -1;
    }
};