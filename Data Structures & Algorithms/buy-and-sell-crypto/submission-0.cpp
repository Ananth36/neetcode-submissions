class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s = prices.size();
        if(s<=1)return 0;
        int min = prices[0];
        int res = 0;
        for(int x: prices){
            if(x<min){
                min = x;
            }
            else{
                int imed = x-min;
                res = res>imed?res:imed;
            }
        }
        return res;
        
    }
};
