class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        for (int l = 0; l < n - 2; l++) {
            if (nums[l] > 0) break;                          
            if (l > 0 && nums[l] == nums[l-1]) continue;    
            int b = l + 1, e = n - 1;
            while (b < e) {
                int sum = nums[l] + nums[b] + nums[e];
                if (sum == 0) {
                    res.push_back({nums[l], nums[b], nums[e]});
                    while (b < e && nums[b] == nums[b+1]) b++;
                    while (b < e && nums[e] == nums[e-1]) e--;
                    b++; e--;
                } else if (sum < 0) {
                    b++;
                } else {
                    e--;
                }
            }
        }
        return res;
    }
};   