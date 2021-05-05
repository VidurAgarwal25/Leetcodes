class Solution {
public:
    void connect(vector<vector<char>>& board,int i,int j,vector<vector<int>>& visited,int m,int n){
        if(i<0||i>=m||j<0||j>=n||board[i][j]=='X'||visited[i][j]==1)
            return;
        visited[i][j]=1;
        int r[]={-1,0,1,0};
        int c[]={0,1,0,-1};
        for(int t=0;t<4;t++){
           int x=r[t]+i;
           int y=c[t]+j;
            connect(board,x,y,visited,m,n);
        }
    }
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> visited(m,vector<int>(n,0));
        for(int i=0;i<n;i++){
            if(board[0][i]=='O')
                connect(board,0,i,visited,m,n);
        }
        for(int i=0;i<n;i++){
            if(board[m-1][i]=='O')
                connect(board,m-1,i,visited,m,n);
        }
        for(int i=0;i<m;i++){
            if(board[i][0]=='O')
                connect(board,i,0,visited,m,n);
        }
        for(int i=0;i<m;i++){
            if(board[i][n-1]=='O')
                connect(board,i,n-1,visited,m,n);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visited[i][j]==0&&board[i][j]=='O')
                    board[i][j]='X';
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<visited[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};