class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (string str : strs) {
            string key = str;
            sort(key.begin(), key.end()); // sort characters in the word
            anagramGroups[key].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& group : anagramGroups) {
            result.push_back(group.second);
        }
        return result;
    }
};
