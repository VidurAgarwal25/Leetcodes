class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>res;
        string x;int ch,s,count=0,f;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+")
            {
                res.push_back(res[count-1]+res[count-2]);
                count++;
            }
            else if(ops[i]=="D"){
                res.push_back(2*res[count-1]);
                count++;
            }
            else if(ops[i]=="C")
            {
                res.pop_back();
                count--;
            }
            else{
                x=ops[i];s=0;
                for(int j=0;j<x.length();j++){
                    if(x[j]!='-'){
                    ch=x[j]-'0';
                    s=s*10+ch;
                    }
                }
                if(x[0]=='-')
                    s*=-1;
                res.push_back(s);
                count++;
            }
                
        }
         s=0;
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
            s+=res[i];
        }
        return s;
    }
};