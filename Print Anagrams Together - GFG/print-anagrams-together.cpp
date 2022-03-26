// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        map<map<char,int>,vector<string>>m;
        string a;
        for(int i=0;i<s.size();i++){
            map<char,int>ma;
            a=s[i];
            for(int j=0;j<a.length();j++){
                char ch=a[j];
                ma[ch]++;
            }
            m[ma].push_back(a);
        }
        vector<vector<string>>res;
        for(auto i:m){
            vector<string>out;
            for(auto j:i.second){
                out.push_back(j);
            }
            res.push_back(out);
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
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends