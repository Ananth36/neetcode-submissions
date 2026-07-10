class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Handle edge case of an empty array
        if (nums.empty()) return 0;

        // Insert all numbers into a hash set for O(1) lookups
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longestStreak = 0;

        for (int num : numSet) {
            // Check if 'num' is the START of a sequence
            // It is the start only if the number before it doesn't exist
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Count upwards as long as consecutive numbers exist
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                // Update the maximum sequence length found so far
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};