class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>res;
        if(n==0)
            return 0;
        res.push_back(0);
        res.push_back(1);
        int i=1;
        while((2*i+1)<=n){
            res.push_back(res[i]);
            res.push_back(res[i]+res[i+1]);
            i++;
        }
        int lar=1;
       for(int i=2;i<res.size();i++)
           if(res[i]>lar)
               lar=res[i];
        return lar;
    }
};