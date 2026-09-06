class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>res;
        for(int i = 0;i<n-2;i++){
            if(nums[i]>0)break;
            if(i>0 && nums[i] == nums[i-1])continue;
            int s = i+1,e =n-1;
            while(s<e){
                int sum = nums[i]+nums[s]+nums[e];
                if(sum == 0){
                    res.push_back({nums[i],nums[s],nums[e]});
                    while(s<e && nums[e] == nums[e-1])e--;
                    while(s<e && nums[s] == nums[s+1])s++;
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