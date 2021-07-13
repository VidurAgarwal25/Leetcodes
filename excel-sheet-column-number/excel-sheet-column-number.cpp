class Solution {
public:
    int titleToNumber(string s) {
        int n=s.length();
        int m=0,i=0;
        while(i<n)
        m=(m*26)+(s[i++]-64);
        return m;
    }
};