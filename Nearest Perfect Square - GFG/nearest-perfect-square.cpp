//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> nearestPerfectSquare(int n) {
        vector<int>res;
        
        int i=0;
	    while(i*i<n){
	        i++;
	    }
	    if(i*i==n)
	    {
	        res.push_back(i*i);
	        res.push_back(0);
	        return res;
	    }
	    int rightdiff=(i*i)-n;
	    i--;
	    int leftdiff=n-(i*i);
        if(rightdiff<leftdiff){
            res.push_back(n+rightdiff);
            res.push_back(rightdiff);
            return res;
        }
        
            res.push_back(n-leftdiff);
            res.push_back(leftdiff);
            return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends