class Solution {
public:
    int isValid(int i,int j,int n,int m){
        if(i>=0&&j>=0&&i<n&&j<m)
            return 1;
        else
            return 0;
    }
    int dfs(vector<vector<char>>& grid,vector<vector<int>>& vis,int i,int j){
        int area=1,newi,newj,s;
        int x[4]={0,1,0,-1};
        int y[4]={1,0,-1,0};
        for(int k=0;k<4;k++){
            newi=i+x[k];
            newj=j+y[k];
            s=isValid(newi,newj,grid.size(),grid[0].size());
            if(s==1&&grid[newi][newj]=='1'&&vis[newi][newj]==0){
                vis[newi][newj]=1;
                area+=dfs(grid,vis,newi,newj);
            }
        }
        return area;
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int count=0,area;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'&&vis[i][j]==0){
                    vis[i][j]=1;
                    area=dfs(grid,vis,i,j);
                    if(area>0)
                    {
                        count++;
                        area=0;
                    } 
                }
            }
        }
        return count;
    }
};