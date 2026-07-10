class Solution {
public:
    
    string encode(vector<string>& strs) {
        string ans="";
       for( string s : strs ){
           ans+=s;
           ans+='.';
       }
       return ans;
    }

    vector<string> decode(string s) {
     vector<string> ans;
     string str="";
     for(char ch: s){
    if(ch=='.'){
        ans.push_back(str);
        str = "";
    }
    else{
        str+=ch;
    }
     }
     return ans;
    }
};
