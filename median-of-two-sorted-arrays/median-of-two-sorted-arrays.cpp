class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int i=0,j=0,x;double med;
        while(i<n&&j<m){
            if(nums1[i]<=nums2[j]){
                i++;
            }
            else{
                x=nums1[i];
                nums1[i]=nums2[j];
                nums2[j]=x;
                sort(nums2.begin(),nums2.end());
            }
        }
        int len=n+m;
        if(len%2==1){
            if(len/2<n)
                med=nums1[len/2];
            else{
                med=nums2[len/2-n];
            }
        }
        else{
            x=len/2;
            if(x<n){
                med=(nums1[x]+nums1[x-1])/2.0;
            }
            else{
                if((x-n)==0)
                    med=(nums2[0]+nums1[n-1])/2.0;
                else
                    med=(nums2[x-n]+nums2[x-n-1])/2.0;
            }
        }
        return med;
    }
};