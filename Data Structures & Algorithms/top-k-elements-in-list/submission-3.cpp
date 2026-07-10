class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        
        map<int,int>ct;
        
        priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
        > minhp;

        for(int num: nums){
            ct[num]+=1;    
        }

        for(auto p: ct){
            minhp.emplace(p.second,p.first);
            if(minhp.size()>k){
                minhp.pop();
            }
        }
        for(int i =0;i<k;i++){
            pair<int,int> val = minhp.top();
            minhp.pop();
            res.push_back(val.second);
        }
        return res;
    }
};
