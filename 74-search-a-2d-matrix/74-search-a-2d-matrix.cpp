class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int lrow=0,hrow=a.size()-1,midrow; // 0  2
        int n=a[0].size();                  // 4
        int l,h,mid;
        while(lrow<=hrow){
            midrow=(lrow+hrow)/2;
            int low=a[midrow][0];
            int high=a[midrow][n-1];
            if(t<low){
                hrow=midrow-1;
            }
            else if(t>high){
                lrow=midrow+1;
            }
            else{
                l=0;
                h=n-1;
                while(l<=h){
                    mid=(l+h)/2;
                    if(t==a[midrow][mid])
                        return true;
                    else if(t>a[midrow][mid])
                        l=mid+1;
                    else
                        h=mid-1;
                }
                break;
            }
        }
        return false;
    }
};