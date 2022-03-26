// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<int>s;
        s.push(0);
        vector<long long>res(n,0);
        for(int i=1;i<n;i++){
            while(s.size()>0&&arr[i]>arr[s.top()]){
                int pos=s.top();
                s.pop();
                res[pos]=arr[i];
            }
            s.push(i);
        }
        while(s.size()>0){
            int pos=s.top();
            res[pos]=-1;
            s.pop();
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends