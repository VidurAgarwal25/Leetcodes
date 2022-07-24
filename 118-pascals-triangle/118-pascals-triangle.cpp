class Solution {
public:
    /*
1                 0  
1 1               1
1 2 1             2   
1 3 3  1          3
1 4 6  4  1       4
1 5 10 10 5  1    5
    */
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                    res[i].push_back(1);
                else{
                    res[i].push_back(res[i-1][j-1]+res[i-1][j]);
                }
            }
        }
        return res;
    }
};