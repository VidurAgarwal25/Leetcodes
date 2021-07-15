class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n=d.size();
        vector<int>res;
        int carry=1,s;
        for(int i=n-1;i>=0;i--){
            s=d[i]+carry;
            if(s==10){
                res.push_back(0);
                carry=1;
            }
            else
            {
                res.push_back(s);
                carry=0;
            }
        }
        if(carry==1)
            res.push_back(1);
        int temp;
        for(int i=0;i<res.size()/2;i++){
            temp=res[i];
            res[i]=res[res.size()-i-1];
            res[res.size()-i-1]=temp;
        }
        return res;
    }
};