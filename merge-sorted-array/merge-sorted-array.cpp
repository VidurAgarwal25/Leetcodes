class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int> x(nums1.size());
        while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                x[k]=nums1[i];
                k++;
                i++;
            }
            else
            {
                x[k]=nums2[j];
                j++;
                k++;
            }
        }
        for(int p=i;p<m;p++)
        {
            x[k]=nums1[p];
            k++;
            
        }
        for(int p=j;p<n;p++){
            x[k]=nums2[p];
            k++;
        }
            
        for(int i=0;i<nums1.size();i++){
            nums1[i]=x[i];
        }
    }
};