// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&a,vector<int>&t,int n)
	{
	    // Code here
	    int x1=a[0]-1;
	    int y1=a[1]-1;
	    int x2=t[0]-1;
	    int y2=t[1]-1;
	    vector<vector<int>>dp(n,vector<int>(n,0));
	    queue<pair<int,int>>q;
	    q.push({x1,y1});
	    while(!q.empty()){
	        pair<int,int>p=q.front();
	        q.pop();
	        int i=p.first;
	        int j=p.second;
	        if(i-2>=0&&j+1<n&&dp[i-2][j+1]==0){
	            dp[i-2][j+1]=1+dp[i][j];
	            q.push({i-2,j+1});
	        }
	        if(i-1>=0&&j+2<n&&dp[i-1][j+2]==0){
	            dp[i-1][j+2]=1+dp[i][j];
	            q.push({i-1,j+2});
	        }
	        if(i+1<n&&j+2<n&&dp[i+1][j+2]==0){
	            dp[i+1][j+2]=1+dp[i][j];
	            q.push({i+1,j+2});
	        }
	        if(i+2<n&&j+1<n&&dp[i+2][j+1]==0){
	            dp[i+2][j+1]=1+dp[i][j];
	            q.push({i+2,j+1});
	        }
	        if(i+2<n&&j-1>=0&&dp[i+2][j-1]==0){
	            dp[i+2][j-1]=1+dp[i][j];
	            q.push({i+2,j-1});
	        }
	        if(i+1<n&&j-2>=0&&dp[i+1][j-2]==0){
	            dp[i+1][j-2]=1+dp[i][j];
	            q.push({i+1,j-2});
	        }
	        if(i-1>=0&&j-2>=0&&dp[i-1][j-2]==0){
	            dp[i-1][j-2]=1+dp[i][j];
	            q.push({i-1,j-2});
	        }
	        if(i-2>=0&&j-1>=0&&dp[i-2][j-1]==0){
	            dp[i-2][j-1]=1+dp[i][j];
	            q.push({i-2,j-1});
	        }
	    }
	    return dp[x2][y2];
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends