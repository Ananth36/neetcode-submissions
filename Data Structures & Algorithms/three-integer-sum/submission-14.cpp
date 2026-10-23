class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-2;i++){
            if(nums[i]>0)break;
            if(i>0 && nums[i] == nums[i-1])continue;
            
            int s = i+1;
            int e = nums.size()-1;
            while(s<e){
                int sum = nums[s]+nums[e]+nums[i];
                if(sum == 0){
                    res.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[s]==nums[s+1])s++;
                    while(s<e && nums[e] == nums[e-1])e--;
                    s++;e--;
                }
                else if(sum>0){
                    e--;
                }
                else{
                    s++;
                }
            }
        }
        return res;
    }
};   