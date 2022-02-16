class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>a(n);
       for(int i=0;i<n;i++){
           a[i]=vector<int>(i+1,0);
           a[i][0]=1;
           a[i][i]=1;
           for(int j=1;j<i;j++){
               a[i][j]=a[i-1][j-1]+a[i-1][j];
           }
       }
        return a;
    }
};