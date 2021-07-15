class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        int a=n,d,sum;
        while(n!=1){
            sum=0;
            while(a!=0){
                d=a%10;
                sum+=d*d;
                a=a/10;
            }
            if(s.find(sum)!=s.end())
                return false;
            s.insert(sum);
            a=sum;
            n=sum;
        }
        return true;
    }
};