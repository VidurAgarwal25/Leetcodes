class Solution {
public:
    string addStrings(string num1, string num2) {
        int l1=num1.length();
        int l2=num2.length();
        int d1,d2,s=0;int n1=l1-1,n2=l2-1,carry=0;
        string result="";char ch;
        while(n1>=0||n2>=0){
            if(n1>=0)
                d1=num1[n1]-'0';
            else
                d1=0;
            if(n2>=0)
                d2=num2[n2]-'0';
            else
                d2=0;
            s=d1+d2+carry;
            carry=s/10;
            s=s%10;
            ch=s+'0';
            result=ch+result;
            n1--;
            n2--;
        }
        if(carry==1){
            ch=carry+'0';
            result=ch+result;
        }
        return result;
    }
};