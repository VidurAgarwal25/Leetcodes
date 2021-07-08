class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;double med;
        int i=0,j=0;
        int l1=nums1.size();
        int l2=nums2.size();
        while(i<l1&&j<l2){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }
        if((l1-i)>0){
            for(int k=i;k<l1;k++)
                res.push_back(nums1[k]);
        }
        
        if((l2-j)>0){
            for(int k=j;k<l2;k++)
                res.push_back(nums2[k]);
        }
        if((l1+l2)%2==0)
            med=(res[(l1+l2)/2]+res[(l1+l2)/2-1])/2.0;
        else
            med=res[(l1+l2)/2];
        return med;
    }
};