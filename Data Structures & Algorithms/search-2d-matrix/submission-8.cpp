class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int w = matrix[0].size();
        int h = matrix.size();
        
        // Fix: Use long long to prevent overflow during w * h calculation
        long long start = 0;
        long long end = (long long)w * h - 1;
        
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            
            // Cast to int for indexing (safe because row/col < h/w which are ints)
            int row = mid / w;
            int col = mid % w;
            
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return false;
    }
};   