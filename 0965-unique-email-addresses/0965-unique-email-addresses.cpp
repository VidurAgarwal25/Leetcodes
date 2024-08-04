class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>unique;
        for(int i=0;i<emails.size();i++){
            string email = emails[i];
            int index = email.find('@');
            string localname = email.substr(0,index);
            string word="";
            for(int j=0;j<localname.length();j++){
                if(localname[j]=='+')
                break;
                if(localname[j]!='.')
                word+=localname[j];
            }
            unique.insert(word+email.substr(index));
        }
        return unique.size();
    }
};