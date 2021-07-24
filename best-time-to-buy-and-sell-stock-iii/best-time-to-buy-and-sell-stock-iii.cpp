class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>profit(n,0);
        int maxp=prices[n-1];
        for(int i=n-2;i>=0;i--){
            if(prices[i]>maxp)
                maxp=prices[i];
            profit[i]=max(profit[i+1],maxp-prices[i]);
        }
        int minp=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<minp)
                minp=prices[i];
            profit[i]=max(profit[i-1],profit[i]+(prices[i]-minp));
        }
        return profit[n-1];
    }
};