class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int> result(m+n);
        int i=0,j=0,k=0,mid;
        double median;
        while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                result[k]=nums1[i];
                k++;
                i++;
            }
            else{
                result[k]=nums2[j];
                k++;
                j++;
            }
        }
        for(int p=i;p<m;p++){
            result[k]=nums1[p];
            k++;
        }
        for(int p=j;p<n;p++){
            result[k]=nums2[p];
            k++;
        }
            
        mid=(m+n)/2;
        if((m+n)%2==1)
            median=result[mid];
        else
            median=(result[mid]+result[mid-1])/2.0;
        return median;
    }
};