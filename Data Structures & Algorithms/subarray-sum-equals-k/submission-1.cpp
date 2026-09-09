class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> ps;
        int back = 0;
        int res = 0;
        for(int num:nums){   
            ps.push_back(back+num);
            back = ps.back();
        }
        unordered_map<int,int> need_freq;
        need_freq[0] = 1;

        for(int f = 0;f<ps.size();f++){
             int front = ps[f];
             int back = front-k;
             if(need_freq.count(back)){
                res+=need_freq[back];
             }
             need_freq[front]++;
        }
        return res;
    }
};