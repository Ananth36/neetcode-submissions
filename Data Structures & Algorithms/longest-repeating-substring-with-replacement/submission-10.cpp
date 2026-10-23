class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>ct;
        int l = 0;
        int mxele = INT_MIN;
        int mx = 0;
        for(int r = 0;r<s.length();r++){
            ct[s[r]]++;
            mxele = max(ct[s[r]],mxele);
            while(mxele+k<r-l+1){
                ct[s[l]]--;
                l++;
            }
            mx= max(mx,r-l+1);
        }
        return mx;
    }
};
