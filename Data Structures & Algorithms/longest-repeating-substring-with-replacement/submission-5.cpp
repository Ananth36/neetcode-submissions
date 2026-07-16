class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        unordered_map<char,int> scc;
        int cmax = 0;
        int l = 0;
        for(int r = 0;r<s.length();r++){
            //updating the majority element count
            scc[s[r]]++;
            cmax = cmax>scc[s[r]]?cmax:scc[s[r]];

            //checking if replacements exceed the count k and shrinking the window from left.
            while((r-l+1)-cmax>k){
                scc[s[l]]--;
                l++;
            }
            res = max(res,(r-l+1));
        }
        return res;
        
    }
};
