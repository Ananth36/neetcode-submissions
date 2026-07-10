class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int cur = 0;
        bool flag = true;
        while(flag){
            if (cur >= strs[0].length()) {
                break;
            }

           for (int i = 1; i < strs.size(); i++) {
                // Check bounds for current string or character mismatch
                if (cur >= strs[i].length() || strs[0][cur] != strs[i][cur]) {
                    flag = false;
                    break; 
                }
            }

           if (flag) {
                cur++;
            }
        }
        return strs[0].substr(0,cur);
    }
};