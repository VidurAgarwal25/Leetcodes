class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int x,m=0;
        set<char>c;
        for(int i=0;i<s.length();i++){
            x=0;
            for(int j=i;j<s.length();j++){
                if(c.find(s[j])==c.end()){
                    c.insert(s[j]);
                    x++;
                }
                else
                    break;
            }
            m=max(m,x);
            c.clear();
        }
        return m;
    }
};