class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = 0;
        for(int n:prices){
            if(n<min)min = n;
            if(max<(n-min))max = n-min;
        }
        return max;
    }
};
