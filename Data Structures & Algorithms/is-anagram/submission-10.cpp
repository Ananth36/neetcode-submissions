class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sm,tm;
        if(s.size()!=t.size())return false;
        for(int i = 0;i<s.size();i++){
            sm[s[i]]+=1;
            tm[t[i]]+=1;
        }
        for(int x:s){
            if (sm[x] !=tm[x])return false;
        }
        return true;
    }
};
