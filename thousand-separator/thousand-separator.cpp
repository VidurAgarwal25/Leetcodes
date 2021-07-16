class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0)
            return "0";
        int d;
        string res="";
        char ch;
        int x=0;
        while(n>0){
            d=n%10;
            if(x!=0&&x%3==0)
                res='.'+res;
            ch=d+'0';
            res=ch+res;
            n=n/10;
            x++;
        }
        return res;
    }
};