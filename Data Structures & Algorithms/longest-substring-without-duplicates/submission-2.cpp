class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> window;
        int max = 0;
        int l = 0,r = s.length();
        for(int cur = 0;cur<s.length();cur++){
            while(window.find(s[cur])!=window.end()){
                window.erase(s[l]);
                l++;
            }
            window.insert(s[cur]);
            max = max>(cur-l+1)?max:(cur-l+1);
        }
        return max;   
    }
};
