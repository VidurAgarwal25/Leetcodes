class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>r;
        vector<int>t;
        int f;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==c)
                r.push_back(0);
            else{
                f=0;
             for(int j=i+1;j<s.length();j++){
                 if(s[j]==c){
                     r.push_back(abs(i-j));
                     f=1;
                     break;
                 }
             }
                if(f==0)
                    r.push_back(INT_MAX);
            }
        }
        if(s[s.length()-1]==c)
            r.push_back(0);
        else
            r.push_back(INT_MAX);
        string a=s;
        reverse(a.begin(),a.end());
        for(int i=0;i<a.length()-1;i++){
            if(a[i]==c)
                t.push_back(0);
            else{
                f=0;
             for(int j=i+1;j<a.length();j++){
                 if(a[j]==c){
                     t.push_back(abs(i-j));
                     f=1;
                     break;
                 }
             }
                if(f==0)
                    t.push_back(INT_MAX);
            }
        }
        if(a[a.length()-1]==c)
            t.push_back(0);
        else
            t.push_back(INT_MAX);
        for(int i=0;i<r.size();i++){
            r[i]=min(r[i],t[t.size()-i-1]);
        }
        return r;
    }
};