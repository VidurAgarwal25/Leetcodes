class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else{
            int a=x,d,s=0;
            while(x!=0){
                d=x%10;
                if(s<INT_MIN/10||s>INT_MAX/10)
                    return false;
                s=s*10+d;
                x=x/10;
            }
            if(s==a)
                return true;
            else
                return false;
        }
    }
};