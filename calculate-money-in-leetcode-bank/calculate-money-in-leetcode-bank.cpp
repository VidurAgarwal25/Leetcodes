class Solution {
public:
    int totalMoney(int n) {
        int s=1;
        int x=1,j=1;
        for(int i=2;i<=n;i++){
            if(i%7==1){
                j++;
                x=j;
            }
            else
                x++;
            s+=x;
            
        }
        return s;
    }
};