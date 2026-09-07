class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> tw;
        unordered_map<char,int> wn;
        for(char c:t)tw[c]++;

        pair<int,int> range = {-1,-1};
        int minlen = INT_MAX;
        int need = tw.size();
        int l = 0;
        for(int r = 0;r<s.length();r++){
            char c = s[r];
            wn[c]++;
            if(wn[c]==tw[c])need-=1;
 
            while(need == 0){
                if(r-l+1<minlen){
                    range = {l,r};
                    minlen = r-l+1;
                }
                wn[s[l]]--;
                if(wn[s[l]]<tw[s[l]]){
                    need++;
                }
                l++;
            }
        }
        if(minlen == INT_MAX)return "";
        return s.substr(range.first,minlen);

    }
};
