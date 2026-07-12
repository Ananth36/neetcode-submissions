class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i =0;i<nums.size()-2;i++){
            if(nums[i]>0)break;
            if(i>0 && nums[i] == nums[i-1])continue;
            int b = nums.size()-1;
            int f = i+1;
            while(b>f){
                int sum = nums[i]+nums[f]+nums[b];
                if(sum == 0){
                    res.push_back({nums[i],nums[f],nums[b]});
                    while(f < b && nums[f] == nums[f+1]) f++;
                    while(f < b && nums[b] == nums[b-1]) b--;
                    f++;b--;
                }
                else if(sum>0){
                    b--;
                }
                else{
                    f++;
                }
            }
        }
        return res;
    }
};
