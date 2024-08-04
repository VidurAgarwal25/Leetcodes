class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> unique;

        vector<string> morseCodes {
                ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                "...-", ".--",  "-..-", "-.--", "--.." 
        };
        for (int i = 0; i < words.size(); i++) {
            string word = words[i];
            string temp="";
            for (int j = 0; j < word.length(); j++) {
                int index=word[j]-'a';
                temp+=morseCodes[index];
            }
            unique.insert(temp);
        }
        return unique.size();
    }
};