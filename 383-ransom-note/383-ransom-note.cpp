class Solution {
public:
    bool canConstruct(string ran, string magazine) {
        unordered_map<char,int>m;
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]]++;
        }
        for(int i=0;i<ran.size();i++){
            if(m.find(ran[i])==m.end()||m[ran[i]]==0)
                return false;
            m[ran[i]]--;
        }
        return true;
    }
};