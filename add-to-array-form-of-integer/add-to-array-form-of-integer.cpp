class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int d,s,carry=0;
        vector<int>result;
        int x=0;
        for(int i=num.size()-1;i>=0;i--){
                if(k!=0){
                    d=k%10;
                    s=d+num[i]+carry;
                    k=k/10;
                }
            else{
                s=num[i]+carry;
            }
                carry=s/10;
            
                s=s%10;
            result.push_back(s);
        }
        if(k!=0){
            while(k!=0){
                d=k%10;
                s=d+carry;
                carry=s/10;
                  s=s%10;
                result.push_back(s);
                k=k/10;
            }
        }
        
        if(carry==1)
            result.push_back(1);
            int temp;
        int len=result.size();
            for(int i=0;i<len/2;i++){
                temp=result[i];
                result[i]=result[len-i-1];
                result[len-i-1]=temp;
            }
            return result;
        }
};