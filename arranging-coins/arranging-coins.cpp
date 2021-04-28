class Solution {
public:
    int arrangeCoins(int n) {
        double i=0,s=0;
        
        while(s<=n){
            i++;
            s=s+i;
        }
        if((s-n)==0)
            return i;
        else
            return i-1;
    }
};