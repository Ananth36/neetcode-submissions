class Solution {
public:
    int characterReplacement(std::string s, int k) {
        int st = 0;          // Left pointer of the window
        int max_len = 0;     // Stores the maximum length found
        int max_freq = 0;    // Count of the most frequent character in the current window
        
        // Frequency array for uppercase English letters (A-Z)
        std::vector<int> counts(26, 0);

        for (int e = 0; e < s.length(); e++) {
            // Add the current character to the window frequency tracker
            counts[s[e] - 'A']++;
            
            // Update the peak frequency seen in the current window
            max_freq = std::max(max_freq, counts[s[e] - 'A']);

            // Current window size is (e - st + 1)
            // Number of characters to replace is (window_size - max_freq)
            // If replacements needed exceed k, shrink the window from the left
            while ((e - st + 1) - max_freq > k) {
                counts[s[st] - 'A']--;
                st++; // Move the left pointer forward
            }

            // Update the maximum window length encountered
            max_len = std::max(max_len, e - st + 1);
        }

        return max_len;
    }
};