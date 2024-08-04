class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int>res;
        int lines=1,width,total=0;
        for(int i=0;i<s.length();i++){
            int index = s[i]-'a';
            if(widths[index]+total<=100)
            total+=widths[index];
            else{
                lines++;
                total=widths[index];
            }
        }
        res.push_back(lines);
        res.push_back(total);
        return res;
    }
};