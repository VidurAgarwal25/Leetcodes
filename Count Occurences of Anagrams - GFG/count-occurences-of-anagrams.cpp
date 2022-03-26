// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string s, string l) {
	    // code here
	    int n=l.length();
	    int m=s.length();
	    vector<int>la(26,0);
	    vector<int>sa(26,0);
	    
	    if(n<m)
	    return 0;
	    int left=0,right=0;
	    int i=0;
	    while(i<m){
	        sa[s[i]-'a']++;
	        la[l[i]-'a']++;
	        i++;
	    }
	    right=i-1;
	    int ans=0;
	    while(right<n){
	        if(la==sa){
	            ans++;
	        }
	        left++;
	        right++;
	        if(right==n)
	        break;
	        la[l[left-1]-'a']--;
	        la[l[right]-'a']++;
	    }
	    return ans;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends