class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        set<int> s(nums.begin(),nums.end());
        vector<int> sv(s.begin(),s.end());
        sort(sv.begin(),sv.end());
        int res = 0;
        int ct = 0;

        for(int i = 1;i<sv.size();i++){
            if(sv[i] == sv[i-1]+1){
                ct++;
                res = res>ct?res:ct;
            }
            else{
                ct = 0;
            }
        }
        //if(res == 0)return 0;
        return res+1;
    }
};
