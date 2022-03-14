class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        if(n==1)
            return 0;
        int res=0;
        for(int i=1;i<n;i++){
            if(p[i]>p[i-1])
                res+=p[i]-p[i-1];
        }
        return res;
    }
};