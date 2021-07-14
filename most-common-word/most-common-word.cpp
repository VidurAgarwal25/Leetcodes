class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
    
        char ch;
        string str="";
        unordered_map<string,int>m;
        for(int i=0;i<p.length();i++){
            ch=p[i];
            if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)||(ch>=48&&ch<=57)){
                str+=tolower(ch);
            }
            else {
                if(str!="")
                m[str]++;
                str="";
            }
        }
        if(str!="")
        m[str]++;
        int f=0;
        string res="";
        string r;
        int c;
        for(auto i:m){
            r=i.first;
            c=i.second;
            if((find(b.begin(),b.end(),r)==b.end())&&c>f){
                f=c;
                res=r;
            }
        }
        return res;
    }
};