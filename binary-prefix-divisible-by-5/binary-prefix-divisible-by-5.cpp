class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool>result;
        long num=0;
        for(int i=0;i<A.size();i++){
            num=num*2+A[i];
            if(num%5==0)
                result.push_back(true);
            else
                result.push_back(false);
            num=num%5;
        }
        return result;
    }
};
 