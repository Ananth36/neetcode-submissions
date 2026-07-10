class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        bool f = false;
        while(l<r){
            while(!isalnum(s[l])){
                l++;
            }
            while(!isalnum(s[r])){
                r--;
            }
            if(l<r && toupper(s[r])!=toupper(s[l])){
                return false;
            }
           
            r--;l++;

        }
        
        return true;
    }
};
