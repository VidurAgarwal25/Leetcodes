class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int** result=new int*[m];
        int x,y;
        for(int i=0;i<m;i++){
             result[i]=new int[n];
            for(int j=0;j<n;j++){
                result[i][j]=0;
            }
        }
        for(int k=0;k<indices.size();k++){
            x=indices[k][0];
            y=indices[k][1];
            for(int i=0;i<n;i++)
            result[x][i]++;
            for(int i=0;i<m;i++)
            result[i][y]++;
        }
    
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(result[i][j]%2==1)
                    count++;
            }
        }
        return count;

    }
};