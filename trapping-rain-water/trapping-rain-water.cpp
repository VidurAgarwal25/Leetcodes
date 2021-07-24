class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        if(n<=2)
            return 0;
        vector<int>right;
        int h=0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>h)
                h=arr[i];
            right.push_back(h);
        }
        int j=n-2;
        int l=arr[0];
        int s=0,m;
        for(int i=1;i<n-1;i++){
            if(arr[i]>l)
                l=arr[i];
            m=min(l,right[j]);
            if(m-arr[i]>0)
                s+=m-arr[i];
            j--;
        }
        return s;
    }
};