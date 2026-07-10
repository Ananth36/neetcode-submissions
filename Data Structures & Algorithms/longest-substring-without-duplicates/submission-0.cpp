class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        unordered_set<char> mp;
        int l  =0;
        for(int r = 0;r<s.length();r++){
            if(mp.find(s[r])!= mp.end()){
                while(mp.find(s[r]) != mp.end()){
                    mp.erase(s[l]);
                    l++;
                }
            }
            mp.insert(s[r]);
            max = max>(r-l+1)?max:(r-l+1);
        }
        return max;
    }
};
