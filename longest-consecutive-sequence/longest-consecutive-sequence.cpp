class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
      if(n==1||n==0)
      return n;
      set<int>s;
      for(int i=0;i<n;i++)
      s.insert(nums[i]);
      set<int>::iterator it;
      set<int>::iterator it1;
      it=s.begin();
      it1=s.begin();
      it1++;
      int far=INT_MIN,count=1;
      while(it1!=s.end()){
          int diff=*it1-*it;
          if(diff==1){
              count++;
          }
          else{
              far=max(far,count);
              count=1;
          }
          it++;
          it1++;
      }
      far=max(far,count);
      return far;
    }
};