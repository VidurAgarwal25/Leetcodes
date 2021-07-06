class Solution {
public:
    int isValid(int i,int j,int n,int m){
        if(i>=0&&j>=0&&i<n&&j<m)
            return 1;
        else
            return 0;
    }
    int bfs(vector<vector<int>>& grid,vector<vector<int>>& vis,int i,int j){
            int newi,newj,s,area=1;
            int x[4]={0,1,0,-1};
            int y[4]={1,0,-1,0};
            for(int k=0;k<=3;k++){
                newi=i+x[k];
                newj=j+y[k];
                s=isValid(newi,newj,grid.size(),grid[0].size());
                if(s==1&&grid[newi][newj]==1&&vis[newi][newj]==0){
                    vis[newi][newj]=1;
                    area+=bfs(grid,vis,newi,newj);
                }
            }
        return area;
        }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        int c=0,m=0;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1&&vis[i][j]==0){
                    vis[i][j]=1;
                    m=max(m,bfs(grid,vis,i,j));
                }
            }
        }
        return m;
    }
};