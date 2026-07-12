class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        int f = 0;
        int b = heights.size()-1;
        while(f<b){
            int area = (b-f)*(min(heights[b],heights[f]));
            if(area>max){max = area;}
            if(heights[f]>=heights[b])b--;
            if(heights[f]<heights[b])f++;
        }
        return max;
    }
};
