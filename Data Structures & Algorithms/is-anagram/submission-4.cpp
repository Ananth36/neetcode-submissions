class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        map<char, int> count;
        for (char ch : s) count[ch]++;
        for (char ch : t) {
            if (--count[ch] < 0) return false;
        }
        return true;
    }
};
