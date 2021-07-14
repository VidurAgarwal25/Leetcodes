class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>a;
        a.push(-1);
        int m=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                a.push(i);
            }
            else{
                a.pop();
                if(a.empty())
                    a.push(i);
                else
                    m=max(m,i-a.top());
            }
        }
        return m;
    }
};