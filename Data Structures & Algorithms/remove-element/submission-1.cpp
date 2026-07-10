class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int r = 0;
        for(int c = 0;c<nums.size();c++){
            if(nums[c] != val){
                nums[r++] = nums[c];
                
            }
        }
        return r;
    }
};