class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<int,int> sw,tw;
        for(char c:t)tw[c]++;
        int need= tw.size();
        int l = 0;
        pair<int,int> range= {-1,-1};
        int minlen = INT_MAX;
        for(int r = 0;r<s.length();r++){
            char c = s[r];
            sw[c]++;
            if(sw[c] == tw[c])need--;
            while(need == 0){
                if(r-l+1<minlen){
                    range = {l,r};
                    minlen = r-l+1;
                }
                sw[s[l]]--;
                if(sw[s[l]]<tw[s[l]])need++; 
                l++;
            }
        }
        if(minlen == INT_MAX)return "";
        return s.substr(range.first,minlen);


    }
};
