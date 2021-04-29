class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double s=0;
        for(int i=1;i<salary.size()-1;i++){
            s+=salary[i];
        }
        return s/(salary.size()-2);
    }
};