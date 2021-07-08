class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int sum=0,a;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                {
                    a=4;
                    if((j-1)>=0&&grid[i][j-1]==1)
                        a--;
                    if((i-1)>=0&&grid[i-1][j]==1)
                        a--;
                    if((j+1)<m&&grid[i][j+1]==1)
                        a--;
                    if((i+1)<n&&grid[i+1][j]==1)
                        a--;
                     sum+=a;
                }
            }
        }
        return sum;
    }
};