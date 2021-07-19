class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0,i,j,k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                z++;
            else if(nums[i]==1)
                o++;
            else 
                t++;
        }
        for(i=0;i<z;i++){
            nums[i]=0;
        }
        cout<<i<<endl;
        for(k=0;k<o;k++){
            nums[k+i]=1;
        }
        cout<<k<<endl;
        for(j=0;j<t;j++){
            nums[j+k+i]=2;
        }
        cout<<j<<endl;
    }
};