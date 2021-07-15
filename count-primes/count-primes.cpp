class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        int c=0;
        vector<int>res(n+1,1);
        for(long long int i=2;i<n;i++){
            if(res[i]){
            for(long long int j=i*i;j<n;j+=i){
                if(res[j])
                    res[j]=0;
            }
            }
            
        }
        for(int i=2;i<n;i++){
            if(res[i])
                c++;
        }
        return c;
    }
};