class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for(int i=0;i<=8;i++){
            unordered_set<char>r;
            unordered_set<char>c;
            for(int j=0;j<=8;j++){
                if(b[i][j]!='.'){
                    if(r.find(b[i][j])==r.end()){
                        r.insert(b[i][j]);
                    }
                    else{
                        return false;
                    }
                }
                if(b[j][i]!='.'){
                    
                    if(c.find(b[j][i])==c.end()){
                        c.insert(b[j][i]);
                    }
                    else{
                        return false;
                    }   
                }

            }
        }
        for(int i=0;i<=8;i+=3){
            for(int j=0;j<=8;j+=3){
                unordered_set<char>s;
                for(int n=i;n<=i+2;n++){
                    for(int m=j;m<=j+2;m++){
                        if(b[n][m]!='.'){
                            if(s.find(b[n][m])==s.end()){
                                s.insert(b[n][m]);
                            }
                            else
                                return false;
                        }
                    }
                }
            }
        }
       
        return true;
    }
};