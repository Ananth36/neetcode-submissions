class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx = 0;
        int l = 0;
        int r = heights.size()-1;
        while(l<r){
            int lh = heights[l];
            int rh = heights[r];

            int holding = min(lh,rh)*(r-l);
            mx = max(mx,holding);
            if(lh<rh)l++;
            else r--;
        }
        return mx;
    }
};
