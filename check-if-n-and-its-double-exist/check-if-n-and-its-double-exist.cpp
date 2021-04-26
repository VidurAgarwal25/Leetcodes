class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>m;
        int x=0;
        for(int i=0;i<arr.size();i++){
            m[2*arr[i]]=arr[i];
            if(arr[i]==0)
                x++;
        }
        if(x>=2)
            return true;
        else{
            
        for(int i=0;i<arr.size();i++){
            
            if(m[arr[i]])
                return true;
            }
        }
        return false;
    }
};