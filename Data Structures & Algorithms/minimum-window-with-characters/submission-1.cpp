class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> win,chart;
        for(char c:t)chart[c]++;
        int l = 0;
        int need = chart.size();
        int have = 0;
        int ml = INT_MAX;
        pair<int,int> res;
        for(int r = 0;r<s.length();r++){
            win[s[r]]++;
            if(chart.count(s[r]) && win[s[r]] == chart[s[r]]){
                have++;
            }
            while(need == have){
                int len = r-l+1;
                if(len<ml){
                ml = len;
                res = {l,r};
            }
                win[s[l]]--;
                
                if(win.count(s[l]) && win[s[l]]<chart[s[l]]){
                    have--;
                }
                l++;
            }
            
            
        }
        return ml==INT_MAX?"":s.substr(res.first,ml);
    }
};
