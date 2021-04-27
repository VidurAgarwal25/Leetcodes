class Solution {
public:
    int maxPower(string s) {
        int l=s.length();
        if(l==0||l==1)
            return l;
        int count,max=INT_MIN;
        for(int i=0;i<l-1;i++){
            count=1;
            for(int j=i+1;j<l;j++){
                if(s[i]==s[j])
                    count++;
                else
                {
                    if(count>max)
                        max=count;
                    count=0;
                    continue;
                }
            }
            if(count>max)
                max=count;
            
        }
        return max;
    }
};