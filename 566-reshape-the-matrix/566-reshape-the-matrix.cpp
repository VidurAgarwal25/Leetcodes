class Solution {
public:

    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       
        int r0=mat.size();
        int c0=mat[0].size();
        if(r0*c0!=r*c)
            return mat;
        vector<vector<int>>res(r,vector<int>(c,0));
        int x=0,y=0;
        for(int i=0;i<r0;i++){
            for(int j=0;j<c0;j++){
                if(y==c){
                    y=0;
                    x++;
                }
                res[x][y]=mat[i][j];
                y++;
            }
        }
        return res;
    }
};