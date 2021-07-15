class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        string w="";
        int f=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
                if(f==0)
                    continue;
                else
                    break;
            }
        else{
            w=s[i]+w;
            f=1;
        }
        }
        int res=w.length();
        return res;
    }
};