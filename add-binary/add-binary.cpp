class Solution {
public:
    string addBinary(string a, string b) {
        int l1=a.length();
        int l2=b.length();
        l1--;l2--;
        int carry=0,s;
        char ch;
        string result="";
        int n1,n2;
        while(l1>=0||l2>=0){
            if(l1>=0)
                n1=a[l1]-'0';
            else
                n1=0;
            if(l2>=0)
                n2=b[l2]-'0';
            else
                n2=0;
            s=n1+n2+carry;
            if(s==2){
                s=0;
                carry=1;
            }
            else if(s==3){
                s=1;
                carry=1;
            }
            else
                carry=0;
            ch=s+'0';
            result=ch+result;
            l1--;l2--; 
        }
        if (carry==1)
            result='1'+result;
        return result;
    }
};