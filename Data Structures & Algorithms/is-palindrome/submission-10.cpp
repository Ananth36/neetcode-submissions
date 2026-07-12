class Solution {
public:
    bool isPalindrome(string s) {
        int f = 0;
        int b = s.size()-1;

        while(b>f){
            while(b>f &&!isalnum(s[f]))f++;
            while(b>f && !isalnum(s[b]) && b>f)b--;
            if(tolower(s[f]) != tolower(s[b])){
                return false;
            }
            f++;
            b--;
    }
    return true;
    }
};
