class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>res;
        int x,f,d;
        for(int i=1;i<=n/2;i++){
            if(i%10!=0&&(n-i)%10!=0)
                {   
                    x=i;f=0;
                    while(x!=0){
                        d=x%10;
                        if(d==0){
                            f=1;
                            break;
                        }
                        x=x/10;
                    }
                    if(f==1)
                        continue;
                    x=n-i;f=0;
                    while(x!=0){
                        d=x%10;
                        if(d==0){
                            f=1;
                            break;
                        }
                        x=x/10;
                    }
                    if(f==1)
                        continue;
                res.push_back(i);
                res.push_back(n-i);
                break;
                }
            }
        return res;
    }
};