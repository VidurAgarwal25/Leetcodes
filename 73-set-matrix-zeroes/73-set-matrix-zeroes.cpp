class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int m=a.size();
        int n=a[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==0){
                    for(int k=0;k<n;k++){
                        if(a[i][k]!=0){
                            a[i][k]=-9999;
                        }
                    }
                    
                    for(int k=0;k<m;k++){
                        if(a[k][j]!=0){
                            a[k][j]=-9999;
                        }
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==-9999)
                    a[i][j]=0;
            }
        }
    }
};