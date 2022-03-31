// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int isPatternPresent(string s, string p) {
        // code here
        int f=0,g=0;
        if(p[0]=='^')
        f=1;
        if(p[p.length()-1]=='$')
        g=1;
        int lenp=p.length();
        int lens=s.length();
        if(f==1&&g==1){         //begin with and ends with
                if(lenp-2==lens){
                    for(int i=1;i<lenp-1;i++){
                        if(s[i-1]!=p[i])
                        return 0;
                    }
                }
                return 0;
        }
        else if(f==0&&g==1){         //ends with
            int x=lens-1;
            for(int i=lenp-2;i>=0;i--){
                if(s[x]!=p[i]){
                    return 0;
                }
                x--;
            }
            return 1;
        }
        else if(f==1&&g==0){         //begins with
            for(int i=1;i<lenp;i++){
                if(s[i-1]!=p[i]){
                    return 0;
                }
            }
            return 1;
        }
        else{         //substring
            if(lenp>lens)
            return 0;
            
            for(int i=0;i<lens;i++){
                if(s[i]==p[0]){
                    if(p==s.substr(i,lenp))
                    return 1;
                   
                }
            }
            return 0;
        }
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string P,S;

        cin>>P;
        cin>>S;

        Solution ob;
        cout << ob.isPatternPresent(S,P) << endl;
    }
    return 0;
}  // } Driver Code Ends