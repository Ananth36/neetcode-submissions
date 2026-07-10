class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int s = 0;
        int e = heights.size()-1;

        while(s<e){
            int val = (e-s)*(min(heights[s],heights[e]));

            if(val>max){
                max = val;
            }
            if(heights[s]>heights[e]){
                e--;
            }
            else if(heights[s]<=heights[e]) {
                s++;
            }
        }
        return max;
    }
};
