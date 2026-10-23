class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s = 0;
        int e = heights.size()-1;
        int mx = INT_MIN;
        while(e>s){
            int cap = min(heights[e],heights[s])*(e-s);
            mx = max(mx,cap);
            if(heights[e]>heights[s]){
                s++;
            }
            else{
                e--;
            }
        }
        return mx;
    }
};
