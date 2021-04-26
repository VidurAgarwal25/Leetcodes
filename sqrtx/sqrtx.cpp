class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1)
            return x;
        else{
            
            double i=1;
            while(i*i<=x){
                i++;
            }
            return i-1;
        }
    }
};