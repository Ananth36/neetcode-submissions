class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> ump;
        for(string s: strs){
            string srt = s;
            sort(srt.begin(),srt.end());
            ump[srt].push_back(s);
        }
        for(auto &[key,vec]: ump){
            res.push_back(vec);
        }
        return res;
    }
};
