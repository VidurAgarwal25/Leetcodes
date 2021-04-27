class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>m;
        int x=0;
        for(int i=0;i<arr.size();i++){
            
            if(m[arr[i]*2])
                return true;
            if(arr[i]%2==0&&m[arr[i]/2])
                return true;
            
            m[arr[i]]=1;
        }
        return false;
    }
};