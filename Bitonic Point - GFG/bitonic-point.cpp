// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	   // for(int i=1;i<n-1;i++){
	   //     if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
	   //     return arr[i];
	   // }
	   // if(arr[0]>arr[n-1])
	   // return arr[0];
	   // else
	   // return arr[n-1];
	   
	   int l=0,h=n-1,mid;
	   while(l<=h){
	       mid=(l+h)/2;
	       if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
	       return arr[mid];
	       if(arr[mid]>arr[mid+1]&&arr[mid]<arr[mid-1])
	       h=mid-1;
	       else
	       l=mid+1;
	   }
	   if(arr[0]>arr[n-1])
	   return arr[0];
	   if(arr[n-1]>arr[0])
	   return arr[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends