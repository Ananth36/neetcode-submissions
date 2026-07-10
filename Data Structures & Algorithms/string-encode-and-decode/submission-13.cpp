class Solution {
public:

    string encode(vector<string>& strs) {
        string cipher = "";
        for(string s:strs){
            cipher+=s;
            cipher+='.';
        }
        return cipher;
    }

    vector<string> decode(string s) {
        vector<string> plain_text;
        string temp;
        for(char c: s){
            if(c!='.'){
                temp+=c;
            }
            else{
                plain_text.push_back(temp);
                temp = "";
            }
        }
        return plain_text;
    }
};
