// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int,vector<int>,greater<int>>q;
	    for(int i=0;i<n;i++){
	        q.push(arr[i]);
	        if(q.size()>k)
	        q.pop();
	    }
	    vector<int>res;
	    while(q.size()>0){
	        res.push_back(q.top());
	        q.pop();
	    }
	    int x;n=res.size();
	    for(int i=0;i<n/2;i++){
	        x=res[i];
	        res[i]=res[n-i-1];
	        res[n-i-1]=x;
	    }
	    return res;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends