// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i;
        for(i=n;i>=0;i--){
            if(isBadVersion(i)==false)
                break;
        }
        return i+1;
    }
};