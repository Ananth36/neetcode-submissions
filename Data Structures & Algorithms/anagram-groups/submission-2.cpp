class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       unordered_map<string,vector<string>> mp;

       for(string x: strs){

        string cp = x;
        sort(cp.begin(),cp.end());
        
        if(mp.find(cp)== mp.end()){
            mp[cp] = {x};
        }

        else{
            mp[cp].push_back(x);
        }
        
       }

       vector<vector<string>> res;
       for(const auto& [key,value]: mp){
        res.push_back(value);
       }
       return res;
    }
};
