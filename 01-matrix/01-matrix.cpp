class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int a,b;
        vector<vector<int>>dist(mat.size(),vector<int>(mat[0].size(),-1));
        queue<pair<int,int>>q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};
        while(!q.empty()){
            pair<int,int>p=q.front();
            q.pop();
            for(int t=0;t<4;t++){
                pair<int,int>neighbor={p.first+x[t],p.second+y[t]};
                a=neighbor.first;
                b=neighbor.second;
                if(a<0||a>=mat.size()||b<0||b>=mat[0].size())
                    continue;
                else{
                    if(dist[a][b]==-1){
                        dist[a][b]=dist[p.first][p.second]+1;
                        q.push(neighbor);
                    }
                }
            }
        }
        return dist;
    }
};