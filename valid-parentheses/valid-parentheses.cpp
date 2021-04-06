class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for(auto i:s){
            if(a.empty()){
                if(i=='('||i=='{'||i=='[')
                    a.push(i);
                else
                    return false;
            }
            else{
                if((i==')'&&a.top()=='(')||(i=='}'&&a.top()=='{')||(i==']'&&a.top()=='['))
            a.pop();
                else
                    a.push(i);
                                                                   
            }
        }
            if(a.empty())
                return true;
            else
                return false;
    }
};