// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    // Function to check if a palindrome pair exists
    bool ispalin(string s){
        int l=s.length();
        if(l<=1)
        return true;
        for(int i=0;i<l/2;i++){
            if(s[i]!=s[l-i-1])
                return false;
        }
        return true;
    }
    bool palindromepair(int n, string arr[]) {
        // code here
        if(n<=1)
        return false;
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]=i;
        }
        for(int i=0;i<n;i++){
            string c=arr[i];
            for(int j=0;j<c.length();j++){
                string s1=c.substr(0,j+1);
                string s2=c.substr(j+1);
                if(ispalin(s1)){
                    reverse(s2.begin(),s2.end());
                    if(m.find(s2)!=m.end()&&m[s2]!=i){
                        return true;
                    }
                }
                if(ispalin(s2)){
                    reverse(s1.begin(),s1.end());
                    if(m.find(s1)!=m.end()&&m[s1]!=i)
                        return true;
                }
            }
        }
        return false;
    }

};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        string arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.palindromepair(N, arr) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends