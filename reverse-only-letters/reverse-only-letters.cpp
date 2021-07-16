class Solution {
public:
    string reverseOnlyLetters(string a) {
        string b=a;
        reverse(b.begin(),b.end());
        string d="";int x=0;
        char ch;
        int len=a.length();
        for(int i=0;i<len;i++){
            ch=a[i];
            if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
                while(true){
                    if((b[x]>=65&&b[x]<=90)||(b[x]>=97&&b[x]<=122))
                        break;
                    x++;
                }
                    
                d=d+b[x];
                x++;
            }
            else
                d=d+a[i];
        }
        return d;
    }
};