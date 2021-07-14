class Solution {
public:
    string convertToTitle(int cn) {
        int n=cn,x;
        string s="";
        while(n!=0){
            x=n%26;
            if(x==0)
            {
                s='Z'+s;
                n=n/26-1;
            }
            else{
                
                s=char(x+64)+s;
                n=n/26;
            }
        }
        return s;
    }
};