class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int r=height.size()-1;
        if(r==0)
            return height[r];
        int l=0;
        int maxarea=0;
        int area;
        while(l<r){
            area=min(height[l],height[r])*(r-l);
            maxarea=max(maxarea,area);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
    
        return maxarea;
    }
};