class Solution {
public:
    int reverse(int x) {
        int s=0,d,a=1,n=x;
     
        if(x<INT_MIN||x>INT_MAX)
            return 0;
        
            while(x!=0){
            d=x%10;
            if(s>INT_MAX/10||(s==INT_MAX/10&&d>7))
                return 0;
            if(s<INT_MIN/10||(s==INT_MIN/10&&d<-8))
                return 0;
            s=s*10+d;
                
            x=x/10;
        }
       
        return s;
    }
}; //INTMAX>s*10
    