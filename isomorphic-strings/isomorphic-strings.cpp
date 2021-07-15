class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m;
        int x=s.length();
        int y=t.length();
        if(x!=y)
            return false;
        set<char>res;
        for(int i=0;i<x;i++){
            if(m.find(s[i])==m.end())
            {
                m.insert({s[i],t[i]});
            }
            else{
                if(m[s[i]]!=t[i])
                    return false;
            }
        }
        char ch;
        for(auto i:m){
            ch=i.second;
            if(res.find(ch)!=res.end())
                return false;
            res.insert(ch);
        }
        return true;
    }
};