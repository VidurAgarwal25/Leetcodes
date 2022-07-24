class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int mi=INT_MAX;
        int pr;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mi){
                mi=prices[i];
            }
            pr=prices[i]-mi;
            if(pr>p)
                p=pr;
        }
        return p;
    }
};