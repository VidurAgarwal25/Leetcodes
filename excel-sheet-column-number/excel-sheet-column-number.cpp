class Solution {
public:
    int titleToNumber(string ct) {
        reverse(ct.begin(),ct.end());
        int len=ct.length();
        int p=0,x,s=0;
        for(int i=0;i<len;i++){
            x=ct[i]-64;
            s+=x*pow(26,p);
            p++;
        }
        return s;
    }
};