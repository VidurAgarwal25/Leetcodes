class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        
        vector<char>r1{'q','w','e','r','t','y','u','i','o','p'};
        vector<char>r2{'a','s','d','f','g','h','j','k','l'};
        vector<char>r3{'z','x','c','v','b','n','m'};
        int x,y,z;
        vector<string>res;
        for(auto i:words){
            x=0;y=0;z=0;
            for(int j=0;j<i.length();j++){
                if(find(r1.begin(),r1.end(),tolower(i[j]))!=r1.end())
                    x++;
                if(find(r2.begin(),r2.end(),tolower(i[j]))!=r2.end())
                    y++;
                if(find(r3.begin(),r3.end(),tolower(i[j]))!=r3.end())
                    z++;
            }
            if(x==i.length()||y==i.length()||z==i.length())
                res.push_back(i);
        }
        return res;
    }
};