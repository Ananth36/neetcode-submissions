class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> window,charT;
        
        int reslen = INT_MAX;
        pair<int,int> res = {-1,-1};

        int need = 0, have = 0;
        for(int x:t)charT[x]++;
        need = charT.size();
        int l = 0;
        
        for(int r = 0;r<s.length();r++){
            char c = s[r];
            window[c]++;

            if(charT.count(c) && window[c] == charT[c]){
                have++;
            }

            while(have == need){
                if(r-l+1 < reslen){
                    reslen = r-l+1;
                    res = {l,r};
                }
                window[s[l]]--;
                if(charT.count(s[l]) && window[s[l]]<charT[s[l]]){
                    have--;
                }
                l++;   
            }
        }
        return reslen == INT_MAX?"":s.substr(res.first,reslen);
    }
};
