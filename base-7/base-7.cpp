class Solution {
public:
    string convertToBase7(int num) {
        int d;char ch;string result="";
        int x=num;
        if(num==0)
            return "0";
        if(num<0)
            num*=-1;
        while(num>0){
            d=num%7;
            ch=d+'0';
            result=ch+result;
            num=num/7;
        }
        if(x<0)
            result='-'+result;
        return result;
    }
};