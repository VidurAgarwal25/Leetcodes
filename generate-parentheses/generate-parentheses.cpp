class Solution {
public:
    void par(int o,int c,string op,vector<string>&res){
        if(o==0&&c==0)
        {
            res.push_back(op);
            return ;
        }
        if(o!=0){
            string op1=op+'(';
            par(o-1,c,op1,res);
        }
        if(c>o){
            string op2=op+')';
            par(o,c-1,op2,res);
        }
        return ;
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        int o=n;
        int c=n;
        string op="";
        par(o,c,op,res);
        return res;
    }
};