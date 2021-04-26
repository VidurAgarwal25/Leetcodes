class Solution {
public:
    int addDigits(int num) {
        int d,s;
        if(num<=9)
            return num;
        else{
            while(num>9){
                s=0;
            while(num!=0){
             d=num%10;
             s=s+d;
             num=num/10;
            }
            num=s;
        }
            return num;
        }
    }
};