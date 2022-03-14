class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>l;
        int m=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<m)
                m=prices[i];
            l.push_back(prices[i]-m);
        }
        m=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(l[i]>m)
                m=l[i];
        }
        return m;
    }
};