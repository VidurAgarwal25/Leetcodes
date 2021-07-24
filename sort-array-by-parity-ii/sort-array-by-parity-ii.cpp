class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,f,temp;
        for(i=0;i<n;i++){
            f=0;
            if(nums[i]%2==0&&i%2==0)
                continue;
            if(nums[i]%2!=0&&i%2!=0)
                continue;
            if(nums[i]%2!=0&&i%2==0){
                for(j=i+1;j<n;j++){
                    if(nums[j]%2==0){
                        f=1;
                        break;
                    }
                }
                    if(f==1){
                        temp=nums[j];
                        for(k=j;k>i;k--){
                            nums[k]=nums[k-1];
                        }
                        nums[k]=temp;
                        continue;
                    }
            }
            if(nums[i]%2==0&&i%2!=0){
                for(j=i+1;j<n;j++){
                    if(nums[j]%2==1){
                        f=1;
                        break;
                    }
                }
                    if(f==1){
                        temp=nums[j];
                        for(k=j;k>i;k--){
                            nums[k]=nums[k-1];
                        }
                        nums[k]=temp;
                        continue;
                    }
            }
        }
        return nums;
    }
};