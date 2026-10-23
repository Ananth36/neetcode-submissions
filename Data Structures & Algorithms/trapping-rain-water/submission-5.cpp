class Solution {
public:
    int trap(vector<int>& height) {
        
        if(height.empty())return 0;

        int res = 0;
        int l = 0;
        int r = height.size()-1;
        int lm = height[l], rm = height[r];
        while(l<r){
            if(rm>lm){
                l++;
                lm = max(lm,height[l]);
                res+=lm-height[l];
            }
            else{
                r--;
                rm = max(rm,height[r]);
                res+=rm-height[r];
            }
        }
        return res;
    }
};