class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        for(int i=0;i<n-1;i++){
            int diff=prices[i+1]-prices[i];
            if(diff>0)
                profit+=diff;
        }
        return profit;
    }
};