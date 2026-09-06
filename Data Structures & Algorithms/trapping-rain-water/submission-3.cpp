class Solution {
public:
    int trap(vector<int>& height) {
        int idx = 0;
        for(int i = 0;i<height.size();i++){
            if(height[i]>height[idx]){
                idx = i;
            }
        }
        int res = 0;
        int maxint = height[0];
        for(int i = 0;i<=idx;i++){
            maxint = max(maxint,height[i]);
            res+=maxint-height[i];
        }
        maxint = height[height.size()-1];
        for(int i = height.size()-1;i>=idx;i--){
            maxint= max(maxint,height[i]);
            res+=maxint-height[i];
        }
        return res;
    }
};
