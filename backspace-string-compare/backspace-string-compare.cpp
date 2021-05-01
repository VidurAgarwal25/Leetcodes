class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>s1,s2;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'&&s1.size()!=0)
                s1.pop_back();
            else{
                if(s[i]!='#')
                s1.push_back(s[i]);
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#'&&s2.size()!=0)
                s2.pop_back();
            else{
                if(t[i]!='#')
                s2.push_back(t[i]);
            }
                
        }
        
        if(s1==s2)
            return true;
        else
            return false;
    }
};