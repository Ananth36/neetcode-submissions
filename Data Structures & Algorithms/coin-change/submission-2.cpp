class Solution {
public:
    unordered_map<int,int> mp;
    int dfs(vector<int>& coins,int amount){
        if(amount == 0)return 0;
        if(mp.find(amount)!=mp.end())return mp[amount];

        int res = 1e9;
        for(int coin:coins){
            int next = amount-coin;
            if(next>=0){
                res = min(res,1+dfs(coins,next));
            }
        }
        mp[amount] = res;
        return res;

    }

    int coinChange(vector<int>& coins, int amount) {
        int count = dfs(coins,amount);
        if(count == 1e9)return -1;
        return count;
    }
};
