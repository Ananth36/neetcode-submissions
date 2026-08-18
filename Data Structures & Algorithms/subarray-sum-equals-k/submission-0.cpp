class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> ps;
        for(int n:nums)ps.push_back(n);
        for(int i = 1;i<nums.size();i++){
            ps[i] += ps[i-1];
        }
        int res = 0;
        unordered_map<int,int> um;
        um[0] = 1;
        for(int i = 0;i<ps.size();i++){
            int target = ps[i]-k;
            if(um.find(target)!=um.end()){
                res+=um[target];
            }
            um[ps[i]]+=1;
        }
        return res;

    }
};