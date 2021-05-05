class Solution {
public:
    int binaryGap(int n) {
        if(n==1)
            return 0;
        int d;
        int lar=INT_MIN;
        vector<int>res;
        while(n!=0){
            d=n%2;
            res.push_back(d);
            n=n/2;
        }
        int prev=res.size()-1,diff,x=1;
        for(int i=res.size()-2;i>=0;i--){
            if(res[i]==1){
                diff=prev-i;
                if(diff>lar)
                    lar=diff;
                prev=i;
                x++;
            }
        }
        
        if(x>1)
            return lar;
        else
            return 0;
    }
};