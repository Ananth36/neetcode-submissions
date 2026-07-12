class Solution {
public:
    bool isPalindrome(string s) {
        int f = 0;
        int b = s.size()-1;

        while(b>f){
            if(isalnum(s[f]) && isalnum(s[b]) && tolower(s[f]) != tolower(s[b])){
                return false;
            }

            if(!isalnum(s[f])){
                f++;
            }
            else if(!isalnum(s[b])){
                b--;
            }
            
            else{f++;b--;}
        }
        return true;
    }
};
