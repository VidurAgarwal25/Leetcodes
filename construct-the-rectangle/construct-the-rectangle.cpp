class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>res;
        res.push_back(area);
        res.push_back(1);
        int diff=area-1;
        int j=area/2;
        int i=2;
        while(i<=area/2){
            if(i*j==area){
                if(abs(i-j)<diff&&i>=j){
                    diff=i-j;
                    res.pop_back();
                    res.pop_back();
                    res.push_back(i);
                    res.push_back(j);
                }
                i++;
                j--;
            }
            else if(i*j<area)
                i++;
            else j--;
        }
        return res;
    }
};