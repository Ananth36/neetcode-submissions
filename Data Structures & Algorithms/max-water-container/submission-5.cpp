class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx = 0;
        int l = 0;
        int r = heights.size()-1;
        while(l<r){
            int lh = heights[l];
            int rh = heights[r];
            int h = min(lh,rh);
            int holding = h*(r-l);
            mx = max(mx,holding);
            while (l < r && heights[l] <= h) ++l;
            while (l < r && heights[r] <= h) --r;
        }
        return mx;
    }
};
