class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=INT_MIN,d;
        int minval=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minval)
                minval=prices[i];
            else
            {
                if(prices[i]-minval>profit)
                    profit=prices[i]-minval;
            }
        }
        if(profit>0)
            return profit;
        else
            return 0;
    }
};