class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>m;
        vector<int>r;
        for(int i=0;i<mat.size();i++)
            r.push_back(i);
        int x;
        for(int i=0;i<mat.size();i++){
            x=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1)
                    x++;
                else
                    break;
            }
            m.push_back(x);
        }
        int t;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m.size()-1-i;j++){
                if(m[j]>m[j+1]){
                    t=m[j];
                    m[j]=m[j+1];
                    m[j+1]=t;
                    t=r[j];
                    r[j]=r[j+1];
                    r[j+1]=t;
                }
            }
        }
        vector<int>p;
        for(int i=0;i<k;i++){
            p.push_back(r[i]);
        }
        return p;
    }
};