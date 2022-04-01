// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long handShakes(int s){
        // code here
        if(s==2)
        return 1;
        // n-1 + n-2 + n-3 + ....+ 1 + 0
        
        long long n=s;
        return ((n-1)*n)/2;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.handShakes(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends