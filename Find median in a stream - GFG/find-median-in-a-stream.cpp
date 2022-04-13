// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue<int>mah;
    priority_queue<int,vector<int>,greater<int>>mih;
    void insertHeap(int &x)
    {
        if(mah.size()==0&&mih.size()==0){
            mah.push(x);
            return;
        }
        mah.push(x);
        int l=mah.size();
        int s=mih.size();
        if(abs(l-s)==2){
            int x=mah.top();
            mah.pop();
            mih.push(x);
            return ;
        }
        if(mah.top()>mih.top()){
            int x=mah.top();
            int y=mih.top();
            mah.pop();
            mih.pop();
            mah.push(y);
            mih.push(x);
            return ;
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        int l=mah.size();
        int s=mih.size();
        
        if(l==s)
        return (mah.top()+mih.top())/2.0;
        else
        {
            if(l>s)
                return mah.top();
            else
            return mih.top();
        }
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends