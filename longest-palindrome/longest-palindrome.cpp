class Solution {
public:
    int longestPalindrome(string s) {
        char ch;
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            ch=s[i];
            m[ch]++;
        }
        int x=0;
        for(auto i:m){
            x+=i.second/2*2;
            if(x%2==0&&i.second%2==1)
                x++;
        }
        return x;
    }
};
