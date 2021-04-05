
class Solution {
public:
    bool isPalindrome(string s) {
    int l=s.length();
        
        char c;
        string a="";
        for(int i=0;i<l;i++){
            if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57))               {
                c=s[i];
                if(s[i]>=65&&s[i]<=90)
                    c+=32;
                a+=c;
            }
                
            }   
        int l1=a.length();
        for(int i=0;i<l1/2;i++){            
                if(a[i]!=a[l1-i-1]){
                return false;            
        }
    }
        return true;
        
    }
    
};