class Solution {
public:
    int trap(vector<int>& height) {
        int cubes = 0;
        int max = 0;
        for(int i = 0;i<height.size();i++){
            if (height[max]<height[i]){
                max = i;
            }
        }

        int tmax = 0;
        for(int i = height.size()-1;i>max;i--){
            if(tmax<height[i]){
                tmax = height[i];
            }
            else{
                cubes+=tmax-height[i];
            }
        }
        tmax = 0;
        for(int i = 0;i<max;i++){
            if(tmax<height[i]){
                tmax = height[i];
            }
            else{
                cubes+=tmax-height[i];
            }
        }
        return cubes;
    }
};
