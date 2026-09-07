class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> wn;
        int l = 0;
        int mx = 0;
        for(int r = 0;r<s.length();r++){
            char c = s[r];
            if(!wn.count(c) || wn[c] == 0){
                mx = max(mx,r-l+1);
            }
            wn[c]++;
            while(wn[c]>1){
                wn[s[l]]--;
                l++;
            }
        }
        return mx;
    }
};
